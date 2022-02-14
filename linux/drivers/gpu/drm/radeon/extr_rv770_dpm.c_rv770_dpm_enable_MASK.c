
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ mg_clock_gating; scalar_t__ gfx_clock_gating; scalar_t__ dynamic_pcie_gen2; scalar_t__ thermal_protection; scalar_t__ mvdd_control; scalar_t__ dcodt; scalar_t__ voltage_control; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_3__ {int platform_caps; struct radeon_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ pm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int ,int) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,int) ;
 int FUNC_9 (struct radeon_device*,int) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*) ;
 struct rv7xx_power_info* FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*,int) ;
 int FUNC_15 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_16 (struct radeon_device*,int) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;

int FUNC_30(struct radeon_device *VAR_5)
{
 struct rv7xx_power_info *VAR_6 = FUNC_13(VAR_5);
 struct radeon_ps *VAR_7 = VAR_5->pm.dpm.boot_ps;
 int VAR_8;

 if (VAR_6->gfx_clock_gating)
  FUNC_25(VAR_5);

 if (FUNC_4(VAR_5))
  return -VAR_3;

 if (VAR_6->voltage_control) {
  FUNC_11(VAR_5, 1);
  VAR_8 = FUNC_3(VAR_5);
  if (VAR_8) {
   FUNC_0("rv770_construct_vddc_table failed\n");
   return VAR_8;
  }
 }

 if (VAR_6->dcodt)
  FUNC_26(VAR_5);

 if (VAR_6->mvdd_control) {
  VAR_8 = FUNC_12(VAR_5);
  if (VAR_8) {
   FUNC_0("rv770_get_mvdd_configuration failed\n");
   return VAR_8;
  }
 }

 if (VAR_5->pm.dpm.platform_caps & VAR_0)
  FUNC_6(VAR_5, 1);

 FUNC_9(VAR_5, 1);

 if (VAR_6->thermal_protection)
  FUNC_10(VAR_5, 1);

 FUNC_19(VAR_5);
 FUNC_27(VAR_5);
 FUNC_18(VAR_5);
 FUNC_22(VAR_5);
 FUNC_23(VAR_5);
 FUNC_21(VAR_5);
 FUNC_17(VAR_5);
 FUNC_7(VAR_5);
 FUNC_24(VAR_5);

 if (VAR_6->dynamic_pcie_gen2)
  FUNC_8(VAR_5, 1);

 VAR_8 = FUNC_29(VAR_5);
 if (VAR_8) {
  FUNC_0("rv770_upload_firmware failed\n");
  return VAR_8;
 }
 VAR_8 = FUNC_15(VAR_5, VAR_7);
 if (VAR_8) {
  FUNC_0("rv770_init_smc_table failed\n");
  return VAR_8;
 }

 FUNC_20(VAR_5);
 FUNC_1(VAR_5);

 if ((VAR_5->family == VAR_2) || (VAR_5->family == VAR_1))
  FUNC_2(VAR_5);
 else
  FUNC_28(VAR_5);

 if (VAR_6->gfx_clock_gating)
  FUNC_14(VAR_5, 1);

 if (VAR_6->mg_clock_gating)
  FUNC_16(VAR_5, 1);

 FUNC_5(VAR_5, VAR_4, 1);

 return 0;
}
