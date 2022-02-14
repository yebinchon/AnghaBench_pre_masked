
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct si_power_info {scalar_t__ voltage_control_svi2; } ;
struct rv7xx_power_info {scalar_t__ thermal_protection; scalar_t__ dynamic_ss; scalar_t__ voltage_control; scalar_t__ mvdd_control; } ;
struct evergreen_power_info {int dynamic_ac_timing; } ;
struct amdgpu_ps {int dummy; } ;
struct TYPE_3__ {struct amdgpu_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 struct evergreen_power_info* FUNC_2 (struct amdgpu_device*) ;
 struct rv7xx_power_info* FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int ,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int) ;
 int FUNC_10 (struct amdgpu_device*,int) ;
 int FUNC_11 (struct amdgpu_device*,int) ;
 int FUNC_12 (struct amdgpu_device*) ;
 struct si_power_info* FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*) ;
 int FUNC_15 (struct amdgpu_device*) ;
 int FUNC_16 (struct amdgpu_device*) ;
 int FUNC_17 (struct amdgpu_device*) ;
 int FUNC_18 (struct amdgpu_device*) ;
 int FUNC_19 (struct amdgpu_device*) ;
 int FUNC_20 (struct amdgpu_device*) ;
 int FUNC_21 (struct amdgpu_device*) ;
 int FUNC_22 (struct amdgpu_device*,int) ;
 int FUNC_23 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_24 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_25 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_26 (struct amdgpu_device*) ;
 int FUNC_27 (struct amdgpu_device*) ;
 int FUNC_28 (struct amdgpu_device*) ;
 int FUNC_29 (struct amdgpu_device*) ;
 int FUNC_30 (struct amdgpu_device*) ;
 int FUNC_31 (struct amdgpu_device*) ;
 int FUNC_32 (struct amdgpu_device*) ;
 int FUNC_33 (struct amdgpu_device*) ;
 int FUNC_34 (struct amdgpu_device*) ;
 int FUNC_35 (struct amdgpu_device*) ;
 int FUNC_36 (struct amdgpu_device*) ;
 int FUNC_37 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_38(struct amdgpu_device *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_3(VAR_2);
 struct evergreen_power_info *VAR_4 = FUNC_2(VAR_2);
 struct si_power_info *VAR_5 = FUNC_13(VAR_2);
 struct amdgpu_ps *VAR_6 = VAR_2->pm.dpm.boot_ps;
 int VAR_7;

 if (FUNC_1(VAR_2))
  return -VAR_1;
 if (VAR_3->voltage_control || VAR_5->voltage_control_svi2)
  FUNC_11(VAR_2, 1);
 if (VAR_3->mvdd_control)
  FUNC_12(VAR_2);
 if (VAR_3->voltage_control || VAR_5->voltage_control_svi2) {
  VAR_7 = FUNC_4(VAR_2);
  if (VAR_7) {
   FUNC_0("si_construct_voltage_tables failed\n");
   return VAR_7;
  }
 }
 if (VAR_4->dynamic_ac_timing) {
  VAR_7 = FUNC_19(VAR_2);
  if (VAR_7)
   VAR_4->dynamic_ac_timing = 0;
 }
 if (VAR_3->dynamic_ss)
  FUNC_9(VAR_2, 1);
 if (VAR_3->thermal_protection)
  FUNC_10(VAR_2, 1);
 FUNC_34(VAR_2);
 FUNC_28(VAR_2);
 FUNC_31(VAR_2);
 FUNC_32(VAR_2);
 FUNC_30(VAR_2);
 FUNC_7(VAR_2);
 FUNC_33(VAR_2);
 VAR_7 = FUNC_37(VAR_2);
 if (VAR_7) {
  FUNC_0("si_upload_firmware failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_26(VAR_2);
 if (VAR_7) {
  FUNC_0("si_process_firmware_header failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_17(VAR_2);
 if (VAR_7) {
  FUNC_0("si_initial_switch_from_arb_f0_to_f1 failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_16(VAR_2);
 if (VAR_7) {
  FUNC_0("si_init_smc_table failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_15(VAR_2);
 if (VAR_7) {
  FUNC_0("si_init_smc_spll_table failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_14(VAR_2);
 if (VAR_7) {
  FUNC_0("si_init_arb_table_index failed\n");
  return VAR_7;
 }
 if (VAR_4->dynamic_ac_timing) {
  VAR_7 = FUNC_23(VAR_2, VAR_6);
  if (VAR_7) {
   FUNC_0("si_populate_mc_reg_table failed\n");
   return VAR_7;
  }
 }
 VAR_7 = FUNC_20(VAR_2);
 if (VAR_7) {
  FUNC_0("si_initialize_smc_cac_tables failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_18(VAR_2);
 if (VAR_7) {
  FUNC_0("si_initialize_hardware_cac_manager failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_21(VAR_2);
 if (VAR_7) {
  FUNC_0("si_initialize_smc_dte_tables failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_24(VAR_2, VAR_6);
 if (VAR_7) {
  FUNC_0("si_populate_smc_tdp_limits failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_25(VAR_2, VAR_6);
 if (VAR_7) {
  FUNC_0("si_populate_smc_tdp_limits_2 failed\n");
  return VAR_7;
 }
 FUNC_29(VAR_2);
 FUNC_27(VAR_2);
 FUNC_5(VAR_2);
 VAR_7 = FUNC_22(VAR_2, 0);
 if (VAR_7) {
  FUNC_0("si_notify_smc_display_change failed\n");
  return VAR_7;
 }
 FUNC_8(VAR_2, 1);
 FUNC_35(VAR_2);

 FUNC_6(VAR_2, VAR_0, 1);
 FUNC_36(VAR_2);

 return 0;
}
