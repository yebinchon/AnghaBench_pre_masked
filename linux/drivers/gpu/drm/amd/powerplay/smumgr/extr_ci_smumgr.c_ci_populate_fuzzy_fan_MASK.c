
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int usFanOutputSensitivity; int usDefaultFanOutputSensitivity; } ;
struct TYPE_6__ {TYPE_2__ advanceFanControlParameters; } ;
struct pp_hwmgr {TYPE_3__ thermal_controller; scalar_t__ smu_backend; } ;
struct TYPE_4__ {int FuzzyFan_PwmSetDelta; } ;
struct ci_smumgr {TYPE_1__ power_tune_table; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0, uint32_t VAR_1)
{
 uint16_t VAR_2;
 struct ci_smumgr *VAR_3 = (struct ci_smumgr *)(VAR_0->smu_backend);

 if ((VAR_0->thermal_controller.advanceFanControlParameters.usFanOutputSensitivity & (1 << 15))
  || 0 == VAR_0->thermal_controller.advanceFanControlParameters.usFanOutputSensitivity)
  VAR_2 = VAR_0->thermal_controller.advanceFanControlParameters.usFanOutputSensitivity;
 else
  VAR_2 = VAR_0->thermal_controller.advanceFanControlParameters.usDefaultFanOutputSensitivity;

 VAR_3->power_tune_table.FuzzyFan_PwmSetDelta = FUNC_0(VAR_2);

 return 0;
}
