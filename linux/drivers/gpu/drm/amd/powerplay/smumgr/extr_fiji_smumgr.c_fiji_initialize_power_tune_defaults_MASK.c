
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {scalar_t__ pptable; scalar_t__ smu_backend; } ;
struct phm_ppt_v1_information {TYPE_1__* cac_dtp_table; } ;
struct fiji_smumgr {int * power_tune_defaults; } ;
struct TYPE_2__ {int usPowerTuneDataSetID; } ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_2)
{
 struct fiji_smumgr *VAR_3 = (struct fiji_smumgr *)(VAR_2->smu_backend);
 struct phm_ppt_v1_information *VAR_4 =
   (struct phm_ppt_v1_information *)(VAR_2->pptable);

 if (VAR_4 &&
   VAR_4->cac_dtp_table->usPowerTuneDataSetID <= VAR_0 &&
   VAR_4->cac_dtp_table->usPowerTuneDataSetID)
  VAR_3->power_tune_defaults =
    &VAR_1
    [VAR_4->cac_dtp_table->usPowerTuneDataSetID - 1];
 else
  VAR_3->power_tune_defaults = &VAR_1[0];

}
