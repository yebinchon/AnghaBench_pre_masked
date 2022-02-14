
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dpm_thermal; scalar_t__ installed; } ;
struct TYPE_3__ {scalar_t__ int_thermal_type; } ;
struct radeon_device {TYPE_2__ irq; TYPE_1__ pm; } ;
struct igp_power_info {scalar_t__ gfx_clock_gating; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int) ;
 struct igp_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int) ;

void FUNC_6(struct radeon_device *VAR_1)
{
 struct igp_power_info *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_1, 0);

 FUNC_3(VAR_1, 0);
 FUNC_5(VAR_1, 0);

 if (VAR_2->gfx_clock_gating)
  FUNC_1(VAR_1, 0);

 if (VAR_1->irq.installed &&
     (VAR_1->pm.int_thermal_type == VAR_0)) {
  VAR_1->irq.dpm_thermal = 0;
  FUNC_2(VAR_1);
 }
}
