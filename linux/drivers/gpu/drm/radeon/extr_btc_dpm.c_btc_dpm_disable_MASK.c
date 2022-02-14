
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ mg_clock_gating; scalar_t__ gfx_clock_gating; scalar_t__ dynamic_pcie_gen2; scalar_t__ thermal_protection; } ;
struct TYPE_5__ {int boot_ps; } ;
struct TYPE_6__ {TYPE_2__ dpm; int int_thermal_type; } ;
struct TYPE_4__ {int dpm_thermal; scalar_t__ installed; } ;
struct radeon_device {TYPE_3__ pm; TYPE_1__ irq; } ;
struct evergreen_power_info {scalar_t__ ls_clock_gating; } ;


 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,int ) ;
 int FUNC_8 (struct radeon_device*,int) ;
 struct evergreen_power_info* FUNC_9 (struct radeon_device*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*,int) ;
 struct rv7xx_power_info* FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;

void FUNC_16(struct radeon_device *VAR_0)
{
 struct rv7xx_power_info *VAR_1 = FUNC_14(VAR_0);
 struct evergreen_power_info *VAR_2 = FUNC_9(VAR_0);

 if (!FUNC_1(VAR_0))
  return;

 FUNC_12(VAR_0);

 if (VAR_1->thermal_protection)
  FUNC_13(VAR_0, 0);

 if (VAR_1->dynamic_pcie_gen2)
  FUNC_2(VAR_0, 0);

 if (VAR_0->irq.installed &&
     FUNC_10(VAR_0->pm.int_thermal_type)) {
  VAR_0->irq.dpm_thermal = 0;
  FUNC_11(VAR_0);
 }

 if (VAR_1->gfx_clock_gating)
  FUNC_0(VAR_0, 0);

 if (VAR_1->mg_clock_gating)
  FUNC_4(VAR_0, 0);

 if (VAR_2->ls_clock_gating)
  FUNC_3(VAR_0, 0);

 FUNC_15(VAR_0);
 FUNC_5(VAR_0);
 FUNC_6(VAR_0);
 FUNC_8(VAR_0, 0);

 FUNC_7(VAR_0, VAR_0->pm.dpm.boot_ps);
}
