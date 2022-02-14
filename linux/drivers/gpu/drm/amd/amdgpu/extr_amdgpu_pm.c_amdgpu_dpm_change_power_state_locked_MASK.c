
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_ps {int vce_active; } ;
struct TYPE_7__ {scalar_t__ user_state; scalar_t__ state; int forced_level; scalar_t__ thermal_active; int new_active_crtc_count; int current_active_crtc_count; int new_active_crtcs; int current_active_crtcs; struct amdgpu_ps* requested_ps; struct amdgpu_ps* current_ps; int vce_active; int uvd_active; } ;
struct TYPE_8__ {TYPE_3__ dpm; int dpm_enabled; } ;
struct TYPE_6__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_2__ powerplay; } ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
struct TYPE_5__ {scalar_t__ force_performance_level; scalar_t__ check_state_equal; scalar_t__ display_configuration_changed; scalar_t__ print_power_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,struct amdgpu_ps*,struct amdgpu_ps*,int*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 struct amdgpu_ps* FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(struct amdgpu_device *VAR_2)
{
 struct amdgpu_ps *VAR_3;
 enum amd_pm_state_type VAR_4;
 int VAR_5;
 bool VAR_6 = 0;


 if (!VAR_2->pm.dpm_enabled)
  return;

 if (VAR_2->pm.dpm.user_state != VAR_2->pm.dpm.state) {

  if ((!VAR_2->pm.dpm.thermal_active) &&
      (!VAR_2->pm.dpm.uvd_active))
   VAR_2->pm.dpm.state = VAR_2->pm.dpm.user_state;
 }
 VAR_4 = VAR_2->pm.dpm.state;

 VAR_3 = FUNC_3(VAR_2, VAR_4);
 if (VAR_3)
  VAR_2->pm.dpm.requested_ps = VAR_3;
 else
  return;

 if (VAR_1 == 1 && VAR_2->powerplay.pp_funcs->print_power_state) {
  FUNC_8("switching from power state:\n");
  FUNC_6(VAR_2, VAR_2->pm.dpm.current_ps);
  FUNC_8("switching to power state:\n");
  FUNC_6(VAR_2, VAR_2->pm.dpm.requested_ps);
 }


 VAR_3->vce_active = VAR_2->pm.dpm.vce_active;
 if (VAR_2->powerplay.pp_funcs->display_configuration_changed)
  FUNC_1(VAR_2);

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5)
  return;

 if (VAR_2->powerplay.pp_funcs->check_state_equal) {
  if (0 != FUNC_0(VAR_2, VAR_2->pm.dpm.current_ps, VAR_2->pm.dpm.requested_ps, &VAR_6))
   VAR_6 = 0;
 }

 if (VAR_6)
  return;

 FUNC_7(VAR_2);
 FUNC_4(VAR_2);

 VAR_2->pm.dpm.current_active_crtcs = VAR_2->pm.dpm.new_active_crtcs;
 VAR_2->pm.dpm.current_active_crtc_count = VAR_2->pm.dpm.new_active_crtc_count;

 if (VAR_2->powerplay.pp_funcs->force_performance_level) {
  if (VAR_2->pm.dpm.thermal_active) {
   enum amd_dpm_forced_level VAR_7 = VAR_2->pm.dpm.forced_level;

   FUNC_2(VAR_2, VAR_0);

   VAR_2->pm.dpm.forced_level = VAR_7;
  } else {

   FUNC_2(VAR_2, VAR_2->pm.dpm.forced_level);
  }
 }
}
