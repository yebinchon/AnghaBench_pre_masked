
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int FuzzyFan_PwmSetDelta; } ;
struct vegam_smumgr {TYPE_1__ power_tune_table; } ;
struct TYPE_5__ {int usFanOutputSensitivity; int usDefaultFanOutputSensitivity; } ;
struct TYPE_6__ {TYPE_2__ advanceFanControlParameters; } ;
struct pp_hwmgr {TYPE_3__ thermal_controller; scalar_t__ smu_backend; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct vegam_smumgr *VAR_1 = (struct vegam_smumgr *)(VAR_0->smu_backend);


 if ((VAR_0->thermal_controller.advanceFanControlParameters.usFanOutputSensitivity & (1 << 15))
  || 0 == VAR_0->thermal_controller.advanceFanControlParameters.usFanOutputSensitivity)
  VAR_0->thermal_controller.advanceFanControlParameters.usFanOutputSensitivity =
   VAR_0->thermal_controller.advanceFanControlParameters.usDefaultFanOutputSensitivity;

 VAR_1->power_tune_table.FuzzyFan_PwmSetDelta = FUNC_0(
    VAR_0->thermal_controller.advanceFanControlParameters.usFanOutputSensitivity);
 return 0;
}
