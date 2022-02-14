
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dynpm_can_upclock; int dynpm_can_downclock; int num_power_states; int dynpm_idle_work; scalar_t__ default_mclk; scalar_t__ default_sclk; scalar_t__ default_vddci; scalar_t__ default_vddc; int int_thermal_type; scalar_t__ current_mclk; scalar_t__ current_sclk; int dynpm_planned_action; int dynpm_state; int profile; } ;
struct TYPE_3__ {scalar_t__ default_mclk; scalar_t__ default_sclk; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ pm; scalar_t__ mc_fw; scalar_t__ is_atom_bios; scalar_t__ bios; TYPE_1__ clock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct radeon_device*,scalar_t__,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 int VAR_8 ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,scalar_t__) ;
 int FUNC_11 (struct radeon_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_9)
{
 int VAR_10;

 VAR_9->pm.profile = VAR_4;
 VAR_9->pm.dynpm_state = VAR_3;
 VAR_9->pm.dynpm_planned_action = VAR_2;
 VAR_9->pm.dynpm_can_upclock = 1;
 VAR_9->pm.dynpm_can_downclock = 1;
 VAR_9->pm.default_sclk = VAR_9->clock.default_sclk;
 VAR_9->pm.default_mclk = VAR_9->clock.default_mclk;
 VAR_9->pm.current_sclk = VAR_9->clock.default_sclk;
 VAR_9->pm.current_mclk = VAR_9->clock.default_mclk;
 VAR_9->pm.int_thermal_type = VAR_7;

 if (VAR_9->bios) {
  if (VAR_9->is_atom_bios)
   FUNC_4(VAR_9);
  else
   FUNC_5(VAR_9);
  FUNC_9(VAR_9);
  FUNC_8(VAR_9);

  if ((VAR_9->family >= VAR_0) &&
      (VAR_9->family <= VAR_1) &&
      VAR_9->mc_fw) {
   if (VAR_9->pm.default_vddc)
    FUNC_3(VAR_9, VAR_9->pm.default_vddc,
       VAR_5);
   if (VAR_9->pm.default_vddci)
    FUNC_3(VAR_9, VAR_9->pm.default_vddci,
       VAR_6);
   if (VAR_9->pm.default_sclk)
    FUNC_10(VAR_9, VAR_9->pm.default_sclk);
   if (VAR_9->pm.default_mclk)
    FUNC_11(VAR_9, VAR_9->pm.default_mclk);
  }
 }


 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_2(&VAR_9->pm.dynpm_idle_work, VAR_8);

 if (VAR_9->pm.num_power_states > 1) {
  if (FUNC_6(VAR_9)) {
   FUNC_0("Failed to register debugfs file for PM!\n");
  }

  FUNC_1("radeon: power management initialized\n");
 }

 return 0;
}
