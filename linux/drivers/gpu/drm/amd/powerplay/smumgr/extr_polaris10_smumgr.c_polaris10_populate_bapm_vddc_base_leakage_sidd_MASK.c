
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ smu_backend; } ;
struct TYPE_2__ {void* BapmVddCBaseLeakageLoSidd; void* BapmVddCBaseLeakageHiSidd; } ;
struct polaris10_smumgr {TYPE_1__ power_tune_table; } ;
struct phm_ppt_v1_information {struct phm_cac_tdp_table* cac_dtp_table; } ;
struct phm_cac_tdp_table {int usHighCACLeakage; int usLowCACLeakage; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct polaris10_smumgr *VAR_1 = (struct polaris10_smumgr *)(VAR_0->smu_backend);
 struct phm_ppt_v1_information *VAR_2 =
   (struct phm_ppt_v1_information *)(VAR_0->pptable);
 uint16_t VAR_3 = VAR_1->power_tune_table.BapmVddCBaseLeakageHiSidd;
 uint16_t VAR_4 = VAR_1->power_tune_table.BapmVddCBaseLeakageLoSidd;
 struct phm_cac_tdp_table *VAR_5 = VAR_2->cac_dtp_table;

 VAR_3 = (uint16_t)(VAR_5->usHighCACLeakage / 100 * 256);
 VAR_4 = (uint16_t)(VAR_5->usLowCACLeakage / 100 * 256);

 VAR_1->power_tune_table.BapmVddCBaseLeakageHiSidd =
   FUNC_0(VAR_3);
 VAR_1->power_tune_table.BapmVddCBaseLeakageLoSidd =
   FUNC_0(VAR_4);

 return 0;
}
