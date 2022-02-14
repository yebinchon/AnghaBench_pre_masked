
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ mg_clock_gating; scalar_t__ gfx_clock_gating; scalar_t__ dynamic_pcie_gen2; scalar_t__ thermal_protection; } ;
struct TYPE_4__ {int dpm_thermal; scalar_t__ installed; } ;
struct TYPE_3__ {int int_thermal_type; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ irq; TYPE_1__ pm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,int) ;
 int FUNC_8 (struct radeon_device*,int) ;
 struct rv7xx_power_info* FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;

void FUNC_14(struct radeon_device *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_9(VAR_2);

 if (!FUNC_5(VAR_2))
  return;

 FUNC_4(VAR_2);

 if (VAR_3->thermal_protection)
  FUNC_8(VAR_2, 0);

 FUNC_7(VAR_2, 0);

 if (VAR_3->dynamic_pcie_gen2)
  FUNC_6(VAR_2, 0);

 if (VAR_2->irq.installed &&
     FUNC_0(VAR_2->pm.int_thermal_type)) {
  VAR_2->irq.dpm_thermal = 0;
  FUNC_2(VAR_2);
 }

 if (VAR_3->gfx_clock_gating)
  FUNC_10(VAR_2, 0);

 if (VAR_3->mg_clock_gating)
  FUNC_11(VAR_2, 0);

 if ((VAR_2->family == VAR_1) || (VAR_2->family == VAR_0))
  FUNC_3(VAR_2);
 else
  FUNC_13(VAR_2);

 FUNC_1(VAR_2);
 FUNC_12(VAR_2);
}
