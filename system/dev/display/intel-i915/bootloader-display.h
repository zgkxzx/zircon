// Copyright 2017 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include "display-device.h"

namespace i915 {

class BootloaderDisplay : public DisplayDevice {
public:
    BootloaderDisplay(Controller* controller);

private:
    bool Init(zx_display_info_t* info) final;
};

} // namespace i915
