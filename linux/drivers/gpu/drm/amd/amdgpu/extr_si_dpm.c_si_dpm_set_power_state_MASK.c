
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ps {int dummy; } ;
struct evergreen_power_info {scalar_t__ pcie_performance_request; scalar_t__ dynamic_ac_timing; struct amdgpu_ps current_rps; struct amdgpu_ps requested_rps; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct evergreen_power_info* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ps*,struct amdgpu_ps*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ps*,struct amdgpu_ps*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,struct amdgpu_ps*,int) ;
 int FUNC_6 (struct amdgpu_device*,struct amdgpu_ps*,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*,struct amdgpu_ps*,struct amdgpu_ps*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_11 (struct amdgpu_device*,struct amdgpu_ps*,struct amdgpu_ps*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*,struct amdgpu_ps*,struct amdgpu_ps*) ;
 int FUNC_15 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_16 (struct amdgpu_device*) ;
 int FUNC_17 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_18 (struct amdgpu_device*) ;
 int FUNC_19 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_20 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_21(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 struct evergreen_power_info *VAR_2 = FUNC_1(VAR_1);
 struct amdgpu_ps *VAR_3 = &VAR_2->requested_rps;
 struct amdgpu_ps *VAR_4 = &VAR_2->current_rps;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5) {
  FUNC_0("si_disable_ulv failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_12(VAR_1);
 if (VAR_5) {
  FUNC_0("si_restrict_performance_levels_before_switch failed\n");
  return VAR_5;
 }
 if (VAR_2->pcie_performance_request)
  FUNC_11(VAR_1, VAR_3, VAR_4);
 FUNC_3(VAR_1, VAR_3, VAR_4);
 VAR_5 = FUNC_5(VAR_1, VAR_3, 0);
 if (VAR_5) {
  FUNC_0("si_enable_power_containment failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_6(VAR_1, VAR_3, 0);
 if (VAR_5) {
  FUNC_0("si_enable_smc_cac failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_7(VAR_1);
 if (VAR_5) {
  FUNC_0("si_halt_smc failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_19(VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_0("si_upload_sw_state failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_18(VAR_1);
 if (VAR_5) {
  FUNC_0("si_upload_smc_data failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_20(VAR_1);
 if (VAR_5) {
  FUNC_0("si_upload_ulv_state failed\n");
  return VAR_5;
 }
 if (VAR_2->dynamic_ac_timing) {
  VAR_5 = FUNC_17(VAR_1, VAR_3);
  if (VAR_5) {
   FUNC_0("si_upload_mc_reg_table failed\n");
   return VAR_5;
  }
 }
 VAR_5 = FUNC_10(VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_0("si_program_memory_timing_parameters failed\n");
  return VAR_5;
 }
 FUNC_14(VAR_1, VAR_3, VAR_4);

 VAR_5 = FUNC_13(VAR_1);
 if (VAR_5) {
  FUNC_0("si_resume_smc failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_16(VAR_1);
 if (VAR_5) {
  FUNC_0("si_set_sw_state failed\n");
  return VAR_5;
 }
 FUNC_2(VAR_1, VAR_3, VAR_4);
 if (VAR_2->pcie_performance_request)
  FUNC_8(VAR_1, VAR_3, VAR_4);
 VAR_5 = FUNC_15(VAR_1, VAR_3);
 if (VAR_5) {
  FUNC_0("si_set_power_state_conditionally_enable_ulv failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_6(VAR_1, VAR_3, 1);
 if (VAR_5) {
  FUNC_0("si_enable_smc_cac failed\n");
  return VAR_5;
 }
 VAR_5 = FUNC_5(VAR_1, VAR_3, 1);
 if (VAR_5) {
  FUNC_0("si_enable_power_containment failed\n");
  return VAR_5;
 }

 VAR_5 = FUNC_9(VAR_1);
 if (VAR_5) {
  FUNC_0("si_power_control_set_level failed\n");
  return VAR_5;
 }

 return 0;
}
