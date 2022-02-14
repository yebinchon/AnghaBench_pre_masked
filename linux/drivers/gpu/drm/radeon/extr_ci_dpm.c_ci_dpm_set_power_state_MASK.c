
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ci_power_info {scalar_t__ pcie_performance_request; scalar_t__ caps_dynamic_ac_timing; struct radeon_ps current_rps; struct radeon_ps requested_rps; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*) ;
 struct ci_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_13 (struct radeon_device*) ;

int FUNC_14(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_4(VAR_0);
 struct radeon_ps *VAR_2 = &VAR_1->requested_rps;
 struct radeon_ps *VAR_3 = &VAR_1->current_rps;
 int VAR_4;

 FUNC_1(VAR_0, VAR_2);
 if (VAR_1->pcie_performance_request)
  FUNC_8(VAR_0, VAR_2, VAR_3);
 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4) {
  FUNC_0("ci_freeze_sclk_mclk_dpm failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_6(VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_0("ci_populate_and_upload_sclk_mclk_dpm_levels failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_3(VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_0("ci_generate_dpm_level_enable_mask failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_12(VAR_0, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0("ci_update_vce_dpm failed\n");
  return VAR_4;
 }

 VAR_4 = FUNC_11(VAR_0);
 if (VAR_4) {
  FUNC_0("ci_update_sclk_t failed\n");
  return VAR_4;
 }
 if (VAR_1->caps_dynamic_ac_timing) {
  VAR_4 = FUNC_10(VAR_0);
  if (VAR_4) {
   FUNC_0("ci_update_and_upload_mc_reg_table failed\n");
   return VAR_4;
  }
 }
 VAR_4 = FUNC_7(VAR_0);
 if (VAR_4) {
  FUNC_0("ci_program_memory_timing_parameters failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_9(VAR_0);
 if (VAR_4) {
  FUNC_0("ci_unfreeze_sclk_mclk_dpm failed\n");
  return VAR_4;
 }
 VAR_4 = FUNC_13(VAR_0);
 if (VAR_4) {
  FUNC_0("ci_upload_dpm_level_enable_mask failed\n");
  return VAR_4;
 }
 if (VAR_1->pcie_performance_request)
  FUNC_5(VAR_0, VAR_2, VAR_3);

 return 0;
}
