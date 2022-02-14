
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ FanThrottlingRpm; } ;
struct TYPE_9__ {TYPE_5__ pp_table; } ;
struct vega10_hwmgr {TYPE_4__ smc_state_table; TYPE_1__* smu_features; } ;
struct TYPE_7__ {scalar_t__ usMGpuThrottlingRPMLimit; } ;
struct TYPE_8__ {TYPE_2__ advanceFanControlParameters; } ;
struct pp_hwmgr {TYPE_3__ thermal_controller; struct vega10_hwmgr* backend; } ;
struct TYPE_6__ {int supported; } ;
typedef TYPE_5__ PPTable_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*,int *,int ,int) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;

int FUNC_4(struct pp_hwmgr *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_2->backend;
 PPTable_t *VAR_4 = &(VAR_3->smc_state_table.pp_table);
 int VAR_5;

 if (!VAR_3->smu_features[VAR_0].supported)
  return 0;

 if (!VAR_2->thermal_controller.advanceFanControlParameters.
   usMGpuThrottlingRPMLimit)
  return 0;

 VAR_4->FanThrottlingRpm = VAR_2->thermal_controller.
   advanceFanControlParameters.usMGpuThrottlingRPMLimit;

 VAR_5 = FUNC_1(VAR_2,
    (uint8_t *)(&(VAR_3->smc_state_table.pp_table)),
    VAR_1, 0);
 if (VAR_5) {
  FUNC_0("Failed to update fan control table in pptable!");
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5) {
  FUNC_0("Attempt to disable SMC fan control feature failed!");
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5)
  FUNC_0("Attempt to enable SMC fan control feature failed!");

 return VAR_5;
}
