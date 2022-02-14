
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int default_max_fan_pwm; } ;
struct TYPE_5__ {TYPE_1__ fan; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct ci_power_info {int fan_is_controlled_by_smc; scalar_t__ caps_od_fuzzy_fan_control_support; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_6)
{
 struct ci_power_info *VAR_7 = FUNC_0(VAR_6);
 PPSMC_Result VAR_8;

 if (VAR_7->caps_od_fuzzy_fan_control_support) {
  VAR_8 = FUNC_1(VAR_6,
       VAR_5,
       VAR_1);
  if (VAR_8 != VAR_4)
   return -VAR_0;
  VAR_8 = FUNC_1(VAR_6,
       VAR_3,
       VAR_6->pm.dpm.fan.default_max_fan_pwm);
  if (VAR_8 != VAR_4)
   return -VAR_0;
 } else {
  VAR_8 = FUNC_1(VAR_6,
       VAR_5,
       VAR_2);
  if (VAR_8 != VAR_4)
   return -VAR_0;
 }

 VAR_7->fan_is_controlled_by_smc = 1;
 return 0;
}
