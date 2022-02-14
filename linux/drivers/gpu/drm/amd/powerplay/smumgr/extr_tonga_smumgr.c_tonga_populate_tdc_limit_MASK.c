
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int TDC_MAWt; int TDC_VDDC_ThrottleReleaseLimitPerc; int TDC_VDDC_PkgLimit; } ;
struct tonga_smumgr {TYPE_2__ power_tune_table; struct tonga_pt_defaults* power_tune_defaults; } ;
struct tonga_pt_defaults {int tdc_mawt; int tdc_vddc_throttle_release_limit_perc; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ smu_backend; } ;
struct phm_ppt_v1_information {TYPE_1__* cac_dtp_table; } ;
struct TYPE_3__ {int usTDC; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 uint16_t VAR_1;
 struct tonga_smumgr *VAR_2 =
    (struct tonga_smumgr *)(VAR_0->smu_backend);
 const struct tonga_pt_defaults *VAR_3 = VAR_2->power_tune_defaults;
 struct phm_ppt_v1_information *VAR_4 =
   (struct phm_ppt_v1_information *)(VAR_0->pptable);




 VAR_1 = (uint16_t)(VAR_4->cac_dtp_table->usTDC * 256);
 VAR_2->power_tune_table.TDC_VDDC_PkgLimit =
   FUNC_0(VAR_1);
 VAR_2->power_tune_table.TDC_VDDC_ThrottleReleaseLimitPerc =
   VAR_3->tdc_vddc_throttle_release_limit_perc;
 VAR_2->power_tune_table.TDC_MAWt = VAR_3->tdc_mawt;

 return 0;
}
