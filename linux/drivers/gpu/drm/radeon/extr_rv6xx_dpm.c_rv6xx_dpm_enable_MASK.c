
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv6xx_power_info {int display_gap; scalar_t__ gfx_clock_gating; scalar_t__ dynamic_pcie_gen2; scalar_t__ voltage_control; scalar_t__ dynamic_ss; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_3__ {int platform_caps; struct radeon_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int ,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_5 (struct radeon_device*,int ,int) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_9 (struct radeon_device*,int) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_11 (struct radeon_device*,struct radeon_ps*) ;
 struct rv6xx_power_info* FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
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
 int FUNC_30 (struct radeon_device*) ;
 int FUNC_31 (struct radeon_device*) ;

int FUNC_32(struct radeon_device *VAR_6)
{
 struct rv6xx_power_info *VAR_7 = FUNC_12(VAR_6);
 struct radeon_ps *VAR_8 = VAR_6->pm.dpm.boot_ps;

 if (FUNC_0(VAR_6))
  return -VAR_1;

 if (VAR_6->pm.dpm.platform_caps & VAR_0)
  FUNC_6(VAR_6, 1);

 if (VAR_7->dynamic_ss)
  FUNC_9(VAR_6, 1);

 FUNC_18(VAR_6);
 FUNC_14(VAR_6);
 FUNC_17(VAR_6);
 FUNC_26(VAR_6);
 FUNC_27(VAR_6);
 FUNC_23(VAR_6);
 FUNC_16(VAR_6);
 FUNC_29(VAR_6);
 FUNC_31(VAR_6);
 FUNC_15(VAR_6);

 FUNC_7(VAR_6, 1);
 if (VAR_7->display_gap == 0)
  FUNC_7(VAR_6, 0);

 FUNC_19(VAR_6);

 FUNC_4(VAR_6, VAR_8);

 if (VAR_7->voltage_control)
  FUNC_30(VAR_6);

 FUNC_11(VAR_6, VAR_8);

 FUNC_24(VAR_6);
 FUNC_25(VAR_6);

 FUNC_21(VAR_6);
 FUNC_22(VAR_6);
 FUNC_20(VAR_6);
 FUNC_28(VAR_6);
 FUNC_13(VAR_6);

 FUNC_2(VAR_6, VAR_3, 1);
 FUNC_2(VAR_6, VAR_4, 1);
 FUNC_2(VAR_6, VAR_2, 1);

 FUNC_5(VAR_6, VAR_5, 1);

 FUNC_3(VAR_6);

 if (VAR_7->voltage_control)
  FUNC_10(VAR_6, VAR_8, 0);

 if (VAR_7->dynamic_pcie_gen2)
  FUNC_8(VAR_6, VAR_8, 1);

 if (VAR_7->gfx_clock_gating)
  FUNC_1(VAR_6, 1);

 return 0;
}
