
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct kv_power_info {scalar_t__ enable_auto_thermal_throttling; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*,int) ;
 struct kv_power_info* FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*,int) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*,int ) ;
 int FUNC_25 (struct radeon_device*) ;

int FUNC_26(struct radeon_device *VAR_0)
{
 struct kv_power_info *VAR_1 = FUNC_7(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_15(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_process_firmware_header failed\n");
  return VAR_2;
 }
 FUNC_8(VAR_0);
 FUNC_9(VAR_0);
 VAR_2 = FUNC_16(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_program_bootup_state failed\n");
  return VAR_2;
 }
 FUNC_1(VAR_0);
 VAR_2 = FUNC_25(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_upload_dpm_settings failed\n");
  return VAR_2;
 }
 VAR_2 = FUNC_13(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_populate_uvd_table failed\n");
  return VAR_2;
 }
 VAR_2 = FUNC_14(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_populate_vce_table failed\n");
  return VAR_2;
 }
 VAR_2 = FUNC_12(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_populate_samu_table failed\n");
  return VAR_2;
 }
 VAR_2 = FUNC_11(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_populate_acp_table failed\n");
  return VAR_2;
 }
 FUNC_17(VAR_0);



 FUNC_22(VAR_0);
 if (VAR_1->enable_auto_thermal_throttling) {
  VAR_2 = FUNC_2(VAR_0);
  if (VAR_2) {
   FUNC_0("kv_enable_auto_thermal_throttling failed\n");
   return VAR_2;
  }
 }
 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_enable_dpm_voltage_scaling failed\n");
  return VAR_2;
 }
 VAR_2 = FUNC_20(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_set_dpm_interval failed\n");
  return VAR_2;
 }
 VAR_2 = FUNC_19(VAR_0);
 if (VAR_2) {
  FUNC_0("kv_set_dpm_boot_state failed\n");
  return VAR_2;
 }
 VAR_2 = FUNC_6(VAR_0, 1);
 if (VAR_2) {
  FUNC_0("kv_enable_ulv failed\n");
  return VAR_2;
 }
 FUNC_23(VAR_0);
 VAR_2 = FUNC_3(VAR_0, 1);
 if (VAR_2) {
  FUNC_0("kv_enable_didt failed\n");
  return VAR_2;
 }
 VAR_2 = FUNC_5(VAR_0, 1);
 if (VAR_2) {
  FUNC_0("kv_enable_smc_cac failed\n");
  return VAR_2;
 }

 FUNC_18(VAR_0);

 VAR_2 = FUNC_21(VAR_0, 0);
 if (VAR_2) {
  FUNC_0("kv_smc_bapm_enable failed\n");
  return VAR_2;
 }

 FUNC_24(VAR_0, VAR_0->pm.dpm.boot_ps);

 return VAR_2;
}
