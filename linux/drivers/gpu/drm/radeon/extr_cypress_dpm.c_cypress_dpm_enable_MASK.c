
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ mg_clock_gating; scalar_t__ gfx_clock_gating; scalar_t__ dynamic_pcie_gen2; scalar_t__ thermal_protection; scalar_t__ dynamic_ss; scalar_t__ mvdd_control; scalar_t__ voltage_control; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_3__ {int platform_caps; struct radeon_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct evergreen_power_info {int dynamic_ac_timing; scalar_t__ memory_transition; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*,int) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*,int) ;
 int FUNC_15 (struct radeon_device*,int) ;
 int FUNC_16 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 struct evergreen_power_info* FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 scalar_t__ FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*,int ,int) ;
 int FUNC_24 (struct radeon_device*,int) ;
 int FUNC_25 (struct radeon_device*,int) ;
 int FUNC_26 (struct radeon_device*,int) ;
 struct rv7xx_power_info* FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;
 int FUNC_30 (struct radeon_device*) ;
 int FUNC_31 (struct radeon_device*) ;
 int FUNC_32 (struct radeon_device*) ;
 int FUNC_33 (struct radeon_device*) ;
 int FUNC_34 (struct radeon_device*) ;
 int FUNC_35 (struct radeon_device*) ;
 int FUNC_36 (struct radeon_device*) ;

int FUNC_37(struct radeon_device *VAR_3)
{
 struct rv7xx_power_info *VAR_4 = FUNC_27(VAR_3);
 struct evergreen_power_info *VAR_5 = FUNC_20(VAR_3);
 struct radeon_ps *VAR_6 = VAR_3->pm.dpm.boot_ps;
 int VAR_7;

 if (VAR_4->gfx_clock_gating)
  FUNC_34(VAR_3);

 if (FUNC_22(VAR_3))
  return -VAR_1;

 if (VAR_4->voltage_control) {
  FUNC_26(VAR_3, 1);
  VAR_7 = FUNC_1(VAR_3);
  if (VAR_7) {
   FUNC_0("cypress_construct_voltage_tables failed\n");
   return VAR_7;
  }
 }

 if (VAR_4->mvdd_control) {
  VAR_7 = FUNC_9(VAR_3);
  if (VAR_7) {
   FUNC_0("cypress_get_mvdd_configuration failed\n");
   return VAR_7;
  }
 }

 if (VAR_5->dynamic_ac_timing) {
  FUNC_18(VAR_3);
  FUNC_7(VAR_3, VAR_6);
  VAR_7 = FUNC_13(VAR_3);
  if (VAR_7)
   VAR_5->dynamic_ac_timing = 0;
  FUNC_8(VAR_3, VAR_6);
 }

 if (VAR_3->pm.dpm.platform_caps & VAR_0)
  FUNC_24(VAR_3, 1);

 if (VAR_4->dynamic_ss)
  FUNC_6(VAR_3, 1);

 if (VAR_4->thermal_protection)
  FUNC_25(VAR_3, 1);

 FUNC_35(VAR_3);
 FUNC_29(VAR_3);
 FUNC_31(VAR_3);
 FUNC_32(VAR_3);
 FUNC_30(VAR_3);
 FUNC_28(VAR_3);
 FUNC_2(VAR_3);
 FUNC_33(VAR_3);

 if (VAR_4->dynamic_pcie_gen2)
  FUNC_3(VAR_3, 1);

 VAR_7 = FUNC_36(VAR_3);
 if (VAR_7) {
  FUNC_0("rv770_upload_firmware failed\n");
  return VAR_7;
 }

 VAR_7 = FUNC_10(VAR_3);
 if (VAR_7) {
  FUNC_0("cypress_get_table_locations failed\n");
  return VAR_7;
 }
 VAR_7 = FUNC_12(VAR_3, VAR_6);
 if (VAR_7) {
  FUNC_0("cypress_init_smc_table failed\n");
  return VAR_7;
 }
 if (VAR_5->dynamic_ac_timing) {
  VAR_7 = FUNC_16(VAR_3, VAR_6);
  if (VAR_7) {
   FUNC_0("cypress_populate_mc_reg_table failed\n");
   return VAR_7;
  }
 }

 FUNC_17(VAR_3);

 FUNC_21(VAR_3);

 VAR_7 = FUNC_15(VAR_3, 0);
 if (VAR_7) {
  FUNC_0("cypress_notify_smc_display_change failed\n");
  return VAR_7;
 }
 FUNC_5(VAR_3, 1);

 if (VAR_5->memory_transition)
  FUNC_4(VAR_3, 1);

 FUNC_19(VAR_3);

 if (VAR_4->gfx_clock_gating)
  FUNC_11(VAR_3, 1);

 if (VAR_4->mg_clock_gating)
  FUNC_14(VAR_3, 1);

 FUNC_23(VAR_3, VAR_2, 1);

 return 0;
}
