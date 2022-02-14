
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct TYPE_3__ {struct radeon_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct ci_power_info {scalar_t__ voltage_control; int caps_dynamic_ac_timing; scalar_t__ thermal_protection; scalar_t__ dynamic_ss; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int ,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,int) ;
 int FUNC_8 (struct radeon_device*,int) ;
 int FUNC_9 (struct radeon_device*,int) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*,int) ;
 int FUNC_13 (struct radeon_device*,int) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 struct ci_power_info* FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 scalar_t__ FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*,int) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;
 int FUNC_30 (struct radeon_device*) ;
 int FUNC_31 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_32 (struct radeon_device*) ;

int FUNC_33(struct radeon_device *VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_16(VAR_3);
 struct radeon_ps *VAR_5 = VAR_3->pm.dpm.boot_ps;
 int VAR_6;

 if (FUNC_21(VAR_3))
  return -VAR_1;
 if (VAR_4->voltage_control != VAR_0) {
  FUNC_14(VAR_3);
  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6) {
   FUNC_0("ci_construct_voltage_tables failed\n");
   return VAR_6;
  }
 }
 if (VAR_4->caps_dynamic_ac_timing) {
  VAR_6 = FUNC_20(VAR_3);
  if (VAR_6)
   VAR_4->caps_dynamic_ac_timing = 0;
 }
 if (VAR_4->dynamic_ss)
  FUNC_10(VAR_3, 1);
 if (VAR_4->thermal_protection)
  FUNC_12(VAR_3, 1);
 FUNC_27(VAR_3);
 FUNC_5(VAR_3);
 FUNC_28(VAR_3);
 VAR_6 = FUNC_32(VAR_3);
 if (VAR_6) {
  FUNC_0("ci_upload_firmware failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_26(VAR_3);
 if (VAR_6) {
  FUNC_0("ci_process_firmware_header failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_19(VAR_3);
 if (VAR_6) {
  FUNC_0("ci_initial_switch_from_arb_f0_to_f1 failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_18(VAR_3);
 if (VAR_6) {
  FUNC_0("ci_init_smc_table failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_17(VAR_3);
 if (VAR_6) {
  FUNC_0("ci_init_arb_table_index failed\n");
  return VAR_6;
 }
 if (VAR_4->caps_dynamic_ac_timing) {
  VAR_6 = FUNC_23(VAR_3);
  if (VAR_6) {
   FUNC_0("ci_populate_initial_mc_reg_table failed\n");
   return VAR_6;
  }
 }
 VAR_6 = FUNC_24(VAR_3);
 if (VAR_6) {
  FUNC_0("ci_populate_pm_base failed\n");
  return VAR_6;
 }
 FUNC_2(VAR_3);
 FUNC_15(VAR_3);
 VAR_6 = FUNC_22(VAR_3, 0);
 if (VAR_6) {
  FUNC_0("ci_notify_smc_display_change failed\n");
  return VAR_6;
 }
 FUNC_8(VAR_3, 1);
 VAR_6 = FUNC_13(VAR_3, 1);
 if (VAR_6) {
  FUNC_0("ci_enable_ulv failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_6(VAR_3, 1);
 if (VAR_6) {
  FUNC_0("ci_enable_ds_master_switch failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_29(VAR_3);
 if (VAR_6) {
  FUNC_0("ci_start_dpm failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_4(VAR_3, 1);
 if (VAR_6) {
  FUNC_0("ci_enable_didt failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_9(VAR_3, 1);
 if (VAR_6) {
  FUNC_0("ci_enable_smc_cac failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_7(VAR_3, 1);
 if (VAR_6) {
  FUNC_0("ci_enable_power_containment failed\n");
  return VAR_6;
 }

 VAR_6 = FUNC_25(VAR_3);
 if (VAR_6) {
  FUNC_0("ci_power_control_set_level failed\n");
  return VAR_6;
 }

 FUNC_3(VAR_3, VAR_2, 1);

 VAR_6 = FUNC_11(VAR_3, 1);
 if (VAR_6) {
  FUNC_0("ci_enable_thermal_based_sclk_dpm failed\n");
  return VAR_6;
 }

 FUNC_30(VAR_3);

 FUNC_31(VAR_3, VAR_5);

 return 0;
}
