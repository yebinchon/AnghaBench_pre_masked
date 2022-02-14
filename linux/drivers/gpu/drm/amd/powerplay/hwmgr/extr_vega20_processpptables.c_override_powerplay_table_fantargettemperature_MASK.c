
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {scalar_t__ pptable; } ;
struct phm_ppt_v3_information {scalar_t__ smc_pptable; } ;
struct TYPE_2__ {int FanTargetTemperature; } ;
typedef TYPE_1__ PPTable_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1)
{
 struct phm_ppt_v3_information *VAR_2 =
  (struct phm_ppt_v3_information *)VAR_1->pptable;
 PPTable_t *VAR_3 = (PPTable_t *)(VAR_2->smc_pptable);

 VAR_3->FanTargetTemperature = VAR_0;

 return 0;
}
