
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int work; } ;
struct TYPE_7__ {int boot_ps; int requested_ps; int current_ps; TYPE_2__ thermal; int forced_level; void* user_state; void* state; } ;
struct TYPE_8__ {int dpm_enabled; scalar_t__ default_mclk; scalar_t__ default_sclk; scalar_t__ default_vddci; scalar_t__ default_vddc; int mutex; TYPE_3__ dpm; int int_thermal_type; scalar_t__ current_mclk; scalar_t__ current_sclk; } ;
struct TYPE_5__ {scalar_t__ default_mclk; scalar_t__ default_sclk; } ;
struct radeon_device {scalar_t__ family; TYPE_4__ pm; scalar_t__ mc_fw; scalar_t__ is_atom_bios; scalar_t__ bios; TYPE_1__ clock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*,scalar_t__,int ) ;
 int FUNC_6 (struct radeon_device*) ;
 scalar_t__ FUNC_7 (struct radeon_device*) ;
 int VAR_8 ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int VAR_9 ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*,scalar_t__) ;
 int FUNC_14 (struct radeon_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct radeon_device *VAR_10)
{
 int VAR_11;


 VAR_10->pm.dpm.state = VAR_3;
 VAR_10->pm.dpm.user_state = VAR_3;
 VAR_10->pm.dpm.forced_level = VAR_4;
 VAR_10->pm.default_sclk = VAR_10->clock.default_sclk;
 VAR_10->pm.default_mclk = VAR_10->clock.default_mclk;
 VAR_10->pm.current_sclk = VAR_10->clock.default_sclk;
 VAR_10->pm.current_mclk = VAR_10->clock.default_mclk;
 VAR_10->pm.int_thermal_type = VAR_7;

 if (VAR_10->bios && VAR_10->is_atom_bios)
  FUNC_6(VAR_10);
 else
  return -VAR_2;


 VAR_11 = FUNC_12(VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_2(&VAR_10->pm.dpm.thermal.work, VAR_9);
 FUNC_3(&VAR_10->pm.mutex);
 FUNC_9(VAR_10);
 VAR_10->pm.dpm.current_ps = VAR_10->pm.dpm.requested_ps = VAR_10->pm.dpm.boot_ps;
 if (VAR_8 == 1)
  FUNC_10(VAR_10);
 FUNC_11(VAR_10);
 VAR_11 = FUNC_8(VAR_10);
 FUNC_4(&VAR_10->pm.mutex);
 if (VAR_11)
  goto dpm_failed;
 VAR_10->pm.dpm_enabled = 1;

 if (FUNC_7(VAR_10)) {
  FUNC_0("Failed to register debugfs file for dpm!\n");
 }

 FUNC_1("radeon: dpm initialized\n");

 return 0;

dpm_failed:
 VAR_10->pm.dpm_enabled = 0;
 if ((VAR_10->family >= VAR_0) &&
     (VAR_10->family <= VAR_1) &&
     VAR_10->mc_fw) {
  if (VAR_10->pm.default_vddc)
   FUNC_5(VAR_10, VAR_10->pm.default_vddc,
      VAR_5);
  if (VAR_10->pm.default_vddci)
   FUNC_5(VAR_10, VAR_10->pm.default_vddci,
      VAR_6);
  if (VAR_10->pm.default_sclk)
   FUNC_13(VAR_10, VAR_10->pm.default_sclk);
  if (VAR_10->pm.default_mclk)
   FUNC_14(VAR_10, VAR_10->pm.default_mclk);
 }
 FUNC_0("radeon: dpm initialization failed\n");
 return VAR_11;
}
