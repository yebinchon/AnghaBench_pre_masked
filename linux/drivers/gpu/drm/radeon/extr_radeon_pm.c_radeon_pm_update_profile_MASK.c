
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int profile; size_t profile_index; int active_crtc_count; TYPE_1__* profiles; int requested_clock_mode_index; int requested_power_state_index; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_3__ {int dpms_on_cm_idx; int dpms_on_ps_idx; int dpms_off_cm_idx; int dpms_off_ps_idx; } ;




 size_t VAR_0 ;

 void* VAR_1 ;
 void* VAR_2 ;

 size_t VAR_3 ;
 size_t VAR_4 ;

 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_7)
{
 switch (VAR_7->pm.profile) {
 case 131:
  VAR_7->pm.profile_index = VAR_0;
  break;
 case 132:
  if (FUNC_0() > 0) {
   if (VAR_7->pm.active_crtc_count > 1)
    VAR_7->pm.profile_index = VAR_1;
   else
    VAR_7->pm.profile_index = VAR_2;
  } else {
   if (VAR_7->pm.active_crtc_count > 1)
    VAR_7->pm.profile_index = VAR_5;
   else
    VAR_7->pm.profile_index = VAR_6;
  }
  break;
 case 129:
  if (VAR_7->pm.active_crtc_count > 1)
   VAR_7->pm.profile_index = VAR_3;
  else
   VAR_7->pm.profile_index = VAR_4;
  break;
 case 128:
  if (VAR_7->pm.active_crtc_count > 1)
   VAR_7->pm.profile_index = VAR_5;
  else
   VAR_7->pm.profile_index = VAR_6;
  break;
 case 130:
  if (VAR_7->pm.active_crtc_count > 1)
   VAR_7->pm.profile_index = VAR_1;
  else
   VAR_7->pm.profile_index = VAR_2;
  break;
 }

 if (VAR_7->pm.active_crtc_count == 0) {
  VAR_7->pm.requested_power_state_index =
   VAR_7->pm.profiles[VAR_7->pm.profile_index].dpms_off_ps_idx;
  VAR_7->pm.requested_clock_mode_index =
   VAR_7->pm.profiles[VAR_7->pm.profile_index].dpms_off_cm_idx;
 } else {
  VAR_7->pm.requested_power_state_index =
   VAR_7->pm.profiles[VAR_7->pm.profile_index].dpms_on_ps_idx;
  VAR_7->pm.requested_clock_mode_index =
   VAR_7->pm.profiles[VAR_7->pm.profile_index].dpms_on_cm_idx;
 }
}
