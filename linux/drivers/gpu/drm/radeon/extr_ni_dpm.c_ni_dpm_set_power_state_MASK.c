
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct evergreen_power_info {scalar_t__ dynamic_ac_timing; scalar_t__ smu_uvd_hs; struct radeon_ps current_rps; struct radeon_ps requested_rps; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;

int FUNC_15(struct radeon_device *VAR_0)
{
 struct evergreen_power_info *VAR_1 = FUNC_2(VAR_0);
 struct radeon_ps *VAR_2 = &VAR_1->requested_rps;
 struct radeon_ps *VAR_3 = &VAR_1->current_rps;
 int VAR_4;

 VAR_4 = FUNC_7(VAR_0);
 if (VAR_4) {
  FUNC_0("ni_restrict_performance_levels_before_switch failed\n");
  return VAR_4;
 }
 FUNC_9(VAR_0, VAR_2, VAR_3);
 VAR_4 = FUNC_3(VAR_0, VAR_2, 0);
 if (VAR_4) {
  FUNC_0("ni_enable_power_containment failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_4(VAR_0, VAR_2, 0);
 if (VAR_4) {
  FUNC_0("ni_enable_smc_cac failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_12(VAR_0);
 if (VAR_4) {
  FUNC_0("rv770_halt_smc failed\n");
  return VAR_4;
 }
 if (VAR_1->smu_uvd_hs)
  FUNC_1(VAR_0, VAR_2);
 VAR_4 = FUNC_11(VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_0("ni_upload_sw_state failed\n");
  return VAR_4;
 }
 if (VAR_1->dynamic_ac_timing) {
  VAR_4 = FUNC_10(VAR_0, VAR_2);
  if (VAR_4) {
   FUNC_0("ni_upload_mc_reg_table failed\n");
   return VAR_4;
  }
 }
 VAR_4 = FUNC_6(VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_0("ni_program_memory_timing_parameters failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_13(VAR_0);
 if (VAR_4) {
  FUNC_0("rv770_resume_smc failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_14(VAR_0);
 if (VAR_4) {
  FUNC_0("rv770_set_sw_state failed\n");
  return VAR_4;
 }
 FUNC_8(VAR_0, VAR_2, VAR_3);
 VAR_4 = FUNC_4(VAR_0, VAR_2, 1);
 if (VAR_4) {
  FUNC_0("ni_enable_smc_cac failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_3(VAR_0, VAR_2, 1);
 if (VAR_4) {
  FUNC_0("ni_enable_power_containment failed\n");
  return VAR_4;
 }


 VAR_4 = FUNC_5(VAR_0);
 if (VAR_4) {
  FUNC_0("ni_power_control_set_level failed\n");
  return VAR_4;
 }

 return 0;
}
