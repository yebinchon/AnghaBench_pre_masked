
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ps {int dummy; } ;
struct kv_power_info {scalar_t__ enable_dpm; scalar_t__ bapm_enable; struct amdgpu_ps current_rps; struct amdgpu_ps requested_rps; } ;
struct TYPE_2__ {int ac_power; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ pm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 struct kv_power_info* FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*) ;
 int FUNC_15 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_16 (struct amdgpu_device*) ;
 int FUNC_17 (struct amdgpu_device*,struct amdgpu_ps*,struct amdgpu_ps*) ;
 int FUNC_18 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_19(void *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_2;
 struct kv_power_info *VAR_4 = FUNC_9(VAR_3);
 struct amdgpu_ps *VAR_5 = &VAR_4->requested_rps;
 struct amdgpu_ps *VAR_6 = &VAR_4->current_rps;
 int VAR_7;

 if (VAR_4->bapm_enable) {
  VAR_7 = FUNC_1(VAR_3, VAR_3->pm.ac_power);
  if (VAR_7) {
   FUNC_0("amdgpu_kv_smc_bapm_enable failed\n");
   return VAR_7;
  }
 }

 if (VAR_3->asic_type == VAR_0 || VAR_3->asic_type == VAR_1) {
  if (VAR_4->enable_dpm) {
   FUNC_12(VAR_3, VAR_5);
   FUNC_15(VAR_3, VAR_5);
   VAR_7 = FUNC_3(VAR_3);
   if (VAR_7) {
    FUNC_0("kv_calculate_ds_divider failed\n");
    return VAR_7;
   }
   FUNC_4(VAR_3);
   FUNC_2(VAR_3);
   FUNC_7(VAR_3);
   FUNC_6(VAR_3);
   FUNC_18(VAR_3);
   FUNC_10(VAR_3, VAR_5);
   FUNC_13(VAR_3);
   FUNC_11(VAR_3);
   FUNC_7(VAR_3);
   FUNC_13(VAR_3);

   VAR_7 = FUNC_17(VAR_3, VAR_5, VAR_6);
   if (VAR_7) {
    FUNC_0("kv_update_vce_dpm failed\n");
    return VAR_7;
   }
   FUNC_16(VAR_3);
   if (VAR_3->asic_type == VAR_1)
    FUNC_5(VAR_3, 1);
  }
 } else {
  if (VAR_4->enable_dpm) {
   FUNC_12(VAR_3, VAR_5);
   FUNC_15(VAR_3, VAR_5);
   VAR_7 = FUNC_3(VAR_3);
   if (VAR_7) {
    FUNC_0("kv_calculate_ds_divider failed\n");
    return VAR_7;
   }
   FUNC_4(VAR_3);
   FUNC_2(VAR_3);
   FUNC_8(VAR_3, 1);
   FUNC_18(VAR_3);
   FUNC_10(VAR_3, VAR_5);
   FUNC_8(VAR_3, 0);
   FUNC_11(VAR_3);
   VAR_7 = FUNC_17(VAR_3, VAR_5, VAR_6);
   if (VAR_7) {
    FUNC_0("kv_update_vce_dpm failed\n");
    return VAR_7;
   }
   FUNC_14(VAR_3);
   FUNC_16(VAR_3);
   FUNC_5(VAR_3, 1);
  }
 }

 return 0;
}
