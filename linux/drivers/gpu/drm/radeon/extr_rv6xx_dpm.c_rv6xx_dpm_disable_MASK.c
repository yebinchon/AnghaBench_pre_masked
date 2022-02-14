
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv6xx_power_info {scalar_t__ gfx_clock_gating; scalar_t__ dynamic_pcie_gen2; scalar_t__ voltage_control; scalar_t__ thermal_protection; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_6__ {int dpm_thermal; scalar_t__ installed; } ;
struct TYPE_4__ {int platform_caps; struct radeon_ps* boot_ps; } ;
struct TYPE_5__ {int int_thermal_type; TYPE_1__ dpm; } ;
struct radeon_device {TYPE_3__ irq; TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*,int ,int) ;
 int FUNC_5 (struct radeon_device*,int,int,int,int) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,int ) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_13 (struct radeon_device*,int) ;
 int FUNC_14 (struct radeon_device*,struct radeon_ps*,int) ;
 struct rv6xx_power_info* FUNC_15 (struct radeon_device*) ;

void FUNC_16(struct radeon_device *VAR_4)
{
 struct rv6xx_power_info *VAR_5 = FUNC_15(VAR_4);
 struct radeon_ps *VAR_6 = VAR_4->pm.dpm.boot_ps;

 if (!FUNC_0(VAR_4))
  return;

 FUNC_4(VAR_4, VAR_2, 1);
 FUNC_4(VAR_4, VAR_3, 1);
 FUNC_11(VAR_4, 0);
 FUNC_9(VAR_4);
 FUNC_5(VAR_4, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF);

 if (VAR_5->thermal_protection)
  FUNC_1(VAR_4, 0);

 FUNC_7(VAR_4, VAR_2);
 FUNC_4(VAR_4, VAR_1, 0);
 FUNC_4(VAR_4, VAR_3, 0);

 if (VAR_4->pm.dpm.platform_caps & VAR_0)
  FUNC_10(VAR_4, 0);

 FUNC_13(VAR_4, 0);

 if (VAR_5->voltage_control)
  FUNC_14(VAR_4, VAR_6, 1);

 if (VAR_5->dynamic_pcie_gen2)
  FUNC_12(VAR_4, VAR_6, 0);

 if (VAR_4->irq.installed &&
     FUNC_3(VAR_4->pm.int_thermal_type)) {
  VAR_4->irq.dpm_thermal = 0;
  FUNC_8(VAR_4);
 }

 if (VAR_5->gfx_clock_gating)
  FUNC_2(VAR_4, 0);

 FUNC_6(VAR_4);
}
