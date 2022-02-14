
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct TYPE_3__ {int ac_power; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ pm; } ;
struct kv_power_info {scalar_t__ enable_dpm; scalar_t__ bapm_enable; struct radeon_ps current_rps; struct radeon_ps requested_rps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,int) ;
 struct kv_power_info* FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_12 (struct radeon_device*,int ) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_18 (struct radeon_device*) ;

int FUNC_19(struct radeon_device *VAR_2)
{
 struct kv_power_info *VAR_3 = FUNC_8(VAR_2);
 struct radeon_ps *VAR_4 = &VAR_3->requested_rps;
 struct radeon_ps *VAR_5 = &VAR_3->current_rps;
 int VAR_6;

 if (VAR_3->bapm_enable) {
  VAR_6 = FUNC_12(VAR_2, VAR_2->pm.dpm.ac_power);
  if (VAR_6) {
   FUNC_0("kv_smc_bapm_enable failed\n");
   return VAR_6;
  }
 }

 if (VAR_2->family == VAR_0 || VAR_2->family == VAR_1) {
  if (VAR_3->enable_dpm) {
   FUNC_11(VAR_2, VAR_4);
   FUNC_15(VAR_2, VAR_4);
   VAR_6 = FUNC_2(VAR_2);
   if (VAR_6) {
    FUNC_0("kv_calculate_ds_divider failed\n");
    return VAR_6;
   }
   FUNC_3(VAR_2);
   FUNC_1(VAR_2);
   FUNC_6(VAR_2);
   FUNC_5(VAR_2);
   FUNC_18(VAR_2);
   FUNC_9(VAR_2, VAR_4);
   FUNC_13(VAR_2);
   FUNC_10(VAR_2);
   FUNC_6(VAR_2);
   FUNC_13(VAR_2);

   VAR_6 = FUNC_17(VAR_2, VAR_4, VAR_5);
   if (VAR_6) {
    FUNC_0("kv_update_vce_dpm failed\n");
    return VAR_6;
   }
   FUNC_16(VAR_2);
   if (VAR_2->family == VAR_1)
    FUNC_4(VAR_2, 1);
  }
 } else {
  if (VAR_3->enable_dpm) {
   FUNC_11(VAR_2, VAR_4);
   FUNC_15(VAR_2, VAR_4);
   VAR_6 = FUNC_2(VAR_2);
   if (VAR_6) {
    FUNC_0("kv_calculate_ds_divider failed\n");
    return VAR_6;
   }
   FUNC_3(VAR_2);
   FUNC_1(VAR_2);
   FUNC_7(VAR_2, 1);
   FUNC_18(VAR_2);
   FUNC_9(VAR_2, VAR_4);
   FUNC_7(VAR_2, 0);
   FUNC_10(VAR_2);
   VAR_6 = FUNC_17(VAR_2, VAR_4, VAR_5);
   if (VAR_6) {
    FUNC_0("kv_update_vce_dpm failed\n");
    return VAR_6;
   }
   FUNC_14(VAR_2);
   FUNC_16(VAR_2);
   FUNC_4(VAR_2, 1);
  }
 }

 return 0;
}
