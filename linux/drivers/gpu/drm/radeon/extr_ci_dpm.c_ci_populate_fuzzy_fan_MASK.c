
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fan_output_sensitivity; int default_fan_output_sensitivity; } ;
struct TYPE_6__ {TYPE_4__ fan; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct TYPE_5__ {int FuzzyFan_PwmSetDelta; } ;
struct ci_power_info {TYPE_1__ smc_powertune_table; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_0(VAR_0);

 if ((VAR_0->pm.dpm.fan.fan_output_sensitivity & (1 << 15)) ||
     (VAR_0->pm.dpm.fan.fan_output_sensitivity == 0))
  VAR_0->pm.dpm.fan.fan_output_sensitivity =
   VAR_0->pm.dpm.fan.default_fan_output_sensitivity;

 VAR_1->smc_powertune_table.FuzzyFan_PwmSetDelta =
  FUNC_1(VAR_0->pm.dpm.fan.fan_output_sensitivity);

 return 0;
}
