
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ mg_clock_gating; scalar_t__ gfx_clock_gating; scalar_t__ dynamic_pcie_gen2; scalar_t__ thermal_protection; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_6__ {int dpm_thermal; scalar_t__ installed; } ;
struct TYPE_4__ {struct radeon_ps* boot_ps; } ;
struct TYPE_5__ {int int_thermal_type; TYPE_1__ dpm; } ;
struct radeon_device {TYPE_3__ irq; TYPE_2__ pm; } ;
struct evergreen_power_info {scalar_t__ ls_clock_gating; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int) ;
 struct evergreen_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ps*,int) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,int) ;
 int FUNC_9 (struct radeon_device*,int) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*,struct radeon_ps*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*,int ,int) ;
 int FUNC_18 (struct radeon_device*,int) ;
 struct rv7xx_power_info* FUNC_19 (struct radeon_device*) ;

void FUNC_20(struct radeon_device *VAR_1)
{
 struct rv7xx_power_info *VAR_2 = FUNC_19(VAR_1);
 struct evergreen_power_info *VAR_3 = FUNC_3(VAR_1);
 struct radeon_ps *VAR_4 = VAR_1->pm.dpm.boot_ps;

 if (!FUNC_0(VAR_1))
  return;
 FUNC_16(VAR_1);
 if (VAR_2->thermal_protection)
  FUNC_18(VAR_1, 0);
 FUNC_5(VAR_1, VAR_4, 0);
 FUNC_6(VAR_1, VAR_4, 0);
 FUNC_2(VAR_1, 0);
 FUNC_17(VAR_1, VAR_0, 0);
 if (VAR_2->dynamic_pcie_gen2)
  FUNC_4(VAR_1, 0);

 if (VAR_1->irq.installed &&
     FUNC_14(VAR_1->pm.int_thermal_type)) {
  VAR_1->irq.dpm_thermal = 0;
  FUNC_15(VAR_1);
 }

 if (VAR_2->gfx_clock_gating)
  FUNC_8(VAR_1, 0);
 if (VAR_2->mg_clock_gating)
  FUNC_10(VAR_1, 0);
 if (VAR_3->ls_clock_gating)
  FUNC_9(VAR_1, 0);
 FUNC_11(VAR_1);
 FUNC_1(VAR_1);
 FUNC_12(VAR_1);
 FUNC_7(VAR_1);

 FUNC_13(VAR_1, VAR_4);
}
