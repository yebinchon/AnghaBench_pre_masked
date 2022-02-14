
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv6xx_power_info {scalar_t__ thermal_protection; scalar_t__ dynamic_pcie_gen2; scalar_t__ voltage_control; scalar_t__ restricted_levels; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_3__ {int platform_caps; int voltage_response_time; struct radeon_ps* current_ps; struct radeon_ps* requested_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int ,int) ;
 int FUNC_3 (struct radeon_device*,int,int,int,int) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (struct radeon_device*,int ) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,int) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*,int) ;
 int FUNC_14 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_15 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_16 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 struct rv6xx_power_info* FUNC_17 (struct radeon_device*) ;
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
 int FUNC_29 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_30 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_31 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_32 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_33 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_34 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_35 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;
 int FUNC_36 (struct radeon_device*,struct radeon_ps*,struct radeon_ps*) ;

int FUNC_37(struct radeon_device *VAR_5)
{
 struct rv6xx_power_info *VAR_6 = FUNC_17(VAR_5);
 struct radeon_ps *VAR_7 = VAR_5->pm.dpm.requested_ps;
 struct radeon_ps *VAR_8 = VAR_5->pm.dpm.current_ps;
 int VAR_9;

 VAR_6->restricted_levels = 0;

 FUNC_34(VAR_5, VAR_7, VAR_8);

 FUNC_7(VAR_5);
 FUNC_2(VAR_5, VAR_3, 1);
 FUNC_3(VAR_5, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF);

 if (VAR_6->thermal_protection)
  FUNC_1(VAR_5, 0);

 FUNC_4(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_2, 0);
 FUNC_2(VAR_5, VAR_4, 0);

 FUNC_16(VAR_5, VAR_7, VAR_8);
 FUNC_24(VAR_5);

 if (VAR_6->voltage_control) {
  FUNC_32(VAR_5, VAR_7, VAR_8);
  if (VAR_5->pm.dpm.platform_caps & VAR_1)
   FUNC_31(VAR_5, VAR_8);
 }

 if (VAR_5->pm.dpm.platform_caps & VAR_0)
  FUNC_29(VAR_5, VAR_7, VAR_8);

 if (VAR_6->dynamic_pcie_gen2)
  FUNC_30(VAR_5, VAR_7, VAR_8);

 if (VAR_6->voltage_control)
  FUNC_10(VAR_5, 0);

 if (VAR_5->pm.dpm.platform_caps & VAR_0)
  FUNC_8(VAR_5, 0);

 if (VAR_6->voltage_control) {
  if (VAR_5->pm.dpm.platform_caps & VAR_1)
   FUNC_36(VAR_5, VAR_7, VAR_8);
  FUNC_0((VAR_5->pm.dpm.voltage_response_time + 999) / 1000);
 }

 FUNC_2(VAR_5, VAR_4, 1);
 FUNC_2(VAR_5, VAR_3, 0);
 FUNC_5(VAR_5, VAR_3);

 FUNC_14(VAR_5, VAR_7);
 FUNC_18(VAR_5);
 FUNC_6(VAR_5, VAR_7);
 FUNC_26(VAR_5);
 FUNC_22(VAR_5);

 FUNC_2(VAR_5, VAR_3, 1);
 FUNC_4(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_4, 0);

 if (VAR_6->voltage_control) {
  if (VAR_5->pm.dpm.platform_caps & VAR_1) {
   VAR_9 = FUNC_35(VAR_5, VAR_7, VAR_8);
   if (VAR_9)
    return VAR_9;
  }
  FUNC_10(VAR_5, 1);
 }

 if (VAR_5->pm.dpm.platform_caps & VAR_0)
  FUNC_8(VAR_5, 1);

 if (VAR_6->dynamic_pcie_gen2)
  FUNC_9(VAR_5, VAR_7, 1);

 FUNC_28(VAR_5);

 FUNC_15(VAR_5, VAR_7);
 FUNC_25(VAR_5);
 FUNC_21(VAR_5);
 FUNC_23(VAR_5);
 FUNC_20(VAR_5);
 FUNC_12(VAR_5);
 FUNC_11(VAR_5);

 if (VAR_6->thermal_protection)
  FUNC_13(VAR_5, 1);
 FUNC_27(VAR_5);
 FUNC_19(VAR_5);

 FUNC_33(VAR_5, VAR_7, VAR_8);

 return 0;
}
