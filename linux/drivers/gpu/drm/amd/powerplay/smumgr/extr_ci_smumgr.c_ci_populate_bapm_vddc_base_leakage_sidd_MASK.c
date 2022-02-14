
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_3__ {struct phm_cac_tdp_table* cac_dtp_table; } ;
struct pp_hwmgr {TYPE_1__ dyn_state; scalar_t__ smu_backend; } ;
struct phm_cac_tdp_table {int usHighCACLeakage; int usLowCACLeakage; } ;
struct TYPE_4__ {void* BapmVddCBaseLeakageLoSidd; void* BapmVddCBaseLeakageHiSidd; } ;
struct ci_smumgr {TYPE_2__ power_tune_table; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct ci_smumgr *VAR_1 = (struct ci_smumgr *)(VAR_0->smu_backend);
 uint16_t VAR_2 = VAR_1->power_tune_table.BapmVddCBaseLeakageHiSidd;
 uint16_t VAR_3 = VAR_1->power_tune_table.BapmVddCBaseLeakageLoSidd;
 struct phm_cac_tdp_table *VAR_4 = VAR_0->dyn_state.cac_dtp_table;

 VAR_2 = (uint16_t)(VAR_4->usHighCACLeakage / 100 * 256);
 VAR_3 = (uint16_t)(VAR_4->usLowCACLeakage / 100 * 256);

 VAR_1->power_tune_table.BapmVddCBaseLeakageHiSidd =
   FUNC_0(VAR_2);
 VAR_1->power_tune_table.BapmVddCBaseLeakageLoSidd =
   FUNC_0(VAR_3);

 return 0;
}
