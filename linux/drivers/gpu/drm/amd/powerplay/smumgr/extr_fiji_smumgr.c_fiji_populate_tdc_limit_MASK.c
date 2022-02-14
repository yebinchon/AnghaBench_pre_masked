
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ smu_backend; } ;
struct phm_ppt_v1_information {TYPE_1__* cac_dtp_table; } ;
struct TYPE_4__ {int TDC_MAWt; int TDC_VDDC_ThrottleReleaseLimitPerc; int TDC_VDDC_PkgLimit; } ;
struct fiji_smumgr {TYPE_2__ power_tune_table; struct fiji_pt_defaults* power_tune_defaults; } ;
struct fiji_pt_defaults {int TDC_MAWt; int TDC_VDDC_ThrottleReleaseLimitPerc; } ;
struct TYPE_3__ {int usTDC; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 uint16_t VAR_1;
 struct fiji_smumgr *VAR_2 = (struct fiji_smumgr *)(VAR_0->smu_backend);
 struct phm_ppt_v1_information *VAR_3 =
   (struct phm_ppt_v1_information *)(VAR_0->pptable);
 const struct fiji_pt_defaults *VAR_4 = VAR_2->power_tune_defaults;




 VAR_1 = (uint16_t)(VAR_3->cac_dtp_table->usTDC * 128);
 VAR_2->power_tune_table.TDC_VDDC_PkgLimit =
   FUNC_0(VAR_1);
 VAR_2->power_tune_table.TDC_VDDC_ThrottleReleaseLimitPerc =
   VAR_4->TDC_VDDC_ThrottleReleaseLimitPerc;
 VAR_2->power_tune_table.TDC_MAWt = VAR_4->TDC_MAWt;

 return 0;
}
