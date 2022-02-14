
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_dm_backlight_caps {int caps_valid; int max_input_signal; int min_input_signal; } ;
struct amdgpu_device {TYPE_2__* atif; } ;
struct TYPE_3__ {int caps_valid; int max_input_signal; int min_input_signal; } ;
struct TYPE_4__ {TYPE_1__ backlight_caps; } ;



void FUNC_0(struct amdgpu_device *VAR_0,
  struct amdgpu_dm_backlight_caps *VAR_1)
{
 if (!VAR_0->atif) {
  VAR_1->caps_valid = 0;
  return;
 }
 VAR_1->caps_valid = VAR_0->atif->backlight_caps.caps_valid;
 VAR_1->min_input_signal = VAR_0->atif->backlight_caps.min_input_signal;
 VAR_1->max_input_signal = VAR_0->atif->backlight_caps.max_input_signal;
}
