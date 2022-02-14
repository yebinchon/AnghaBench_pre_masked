
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kv_power_info {scalar_t__ enable_auto_thermal_throttling; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_7__ {TYPE_2__ thermal; } ;
struct TYPE_8__ {TYPE_3__ dpm; int int_thermal_type; } ;
struct TYPE_5__ {scalar_t__ installed; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_1__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct amdgpu_device*,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int) ;
 struct kv_power_info* FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*) ;
 int FUNC_15 (struct amdgpu_device*) ;
 int FUNC_16 (struct amdgpu_device*) ;
 int FUNC_17 (struct amdgpu_device*) ;
 int FUNC_18 (struct amdgpu_device*) ;
 int FUNC_19 (struct amdgpu_device*) ;
 int FUNC_20 (struct amdgpu_device*) ;
 int FUNC_21 (struct amdgpu_device*) ;
 int FUNC_22 (struct amdgpu_device*) ;
 int FUNC_23 (struct amdgpu_device*) ;
 int FUNC_24 (struct amdgpu_device*,int ,int ) ;
 int FUNC_25 (struct amdgpu_device*) ;
 int FUNC_26 (struct amdgpu_device*) ;
 int FUNC_27 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_28(struct amdgpu_device *VAR_4)
{
 struct kv_power_info *VAR_5 = FUNC_10(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_18(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_process_firmware_header failed\n");
  return VAR_6;
 }
 FUNC_11(VAR_4);
 FUNC_12(VAR_4);
 VAR_6 = FUNC_19(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_program_bootup_state failed\n");
  return VAR_6;
 }
 FUNC_4(VAR_4);
 VAR_6 = FUNC_27(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_upload_dpm_settings failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_16(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_populate_uvd_table failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_17(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_populate_vce_table failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_15(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_populate_samu_table failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_14(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_populate_acp_table failed\n");
  return VAR_6;
 }
 FUNC_20(VAR_4);



 FUNC_25(VAR_4);
 if (VAR_5->enable_auto_thermal_throttling) {
  VAR_6 = FUNC_5(VAR_4);
  if (VAR_6) {
   FUNC_0("kv_enable_auto_thermal_throttling failed\n");
   return VAR_6;
  }
 }
 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_enable_dpm_voltage_scaling failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_23(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_set_dpm_interval failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_22(VAR_4);
 if (VAR_6) {
  FUNC_0("kv_set_dpm_boot_state failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_9(VAR_4, 1);
 if (VAR_6) {
  FUNC_0("kv_enable_ulv failed\n");
  return VAR_6;
 }
 FUNC_26(VAR_4);
 VAR_6 = FUNC_6(VAR_4, 1);
 if (VAR_6) {
  FUNC_0("kv_enable_didt failed\n");
  return VAR_6;
 }
 VAR_6 = FUNC_8(VAR_4, 1);
 if (VAR_6) {
  FUNC_0("kv_enable_smc_cac failed\n");
  return VAR_6;
 }

 FUNC_21(VAR_4);

 VAR_6 = FUNC_3(VAR_4, 0);
 if (VAR_6) {
  FUNC_0("amdgpu_kv_smc_bapm_enable failed\n");
  return VAR_6;
 }

 if (VAR_4->irq.installed &&
     FUNC_2(VAR_4->pm.int_thermal_type)) {
  VAR_6 = FUNC_24(VAR_4, VAR_3, VAR_2);
  if (VAR_6) {
   FUNC_0("kv_set_thermal_temperature_range failed\n");
   return VAR_6;
  }
  FUNC_1(VAR_4, &VAR_4->pm.dpm.thermal.irq,
          VAR_1);
  FUNC_1(VAR_4, &VAR_4->pm.dpm.thermal.irq,
          VAR_0);
 }

 return VAR_6;
}
