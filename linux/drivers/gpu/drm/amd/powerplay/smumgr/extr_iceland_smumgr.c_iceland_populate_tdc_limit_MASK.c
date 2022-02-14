
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {TYPE_3__* cac_dtp_table; } ;
struct pp_hwmgr {TYPE_2__ dyn_state; scalar_t__ smu_backend; } ;
struct TYPE_4__ {int TDC_MAWt; int TDC_VDDC_ThrottleReleaseLimitPerc; int TDC_VDDC_PkgLimit; } ;
struct iceland_smumgr {TYPE_1__ power_tune_table; struct iceland_pt_defaults* power_tune_defaults; } ;
struct iceland_pt_defaults {int tdc_mawt; int tdc_vddc_throttle_release_limit_perc; } ;
struct TYPE_6__ {int usTDC; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0)
{
 uint16_t VAR_1;
 struct iceland_smumgr *VAR_2 = (struct iceland_smumgr *)(VAR_0->smu_backend);
 const struct iceland_pt_defaults *VAR_3 = VAR_2->power_tune_defaults;

 VAR_1 = (uint16_t)(VAR_0->dyn_state.cac_dtp_table->usTDC * 256);
 VAR_2->power_tune_table.TDC_VDDC_PkgLimit =
   FUNC_0(VAR_1);
 VAR_2->power_tune_table.TDC_VDDC_ThrottleReleaseLimitPerc =
   VAR_3->tdc_vddc_throttle_release_limit_perc;
 VAR_2->power_tune_table.TDC_MAWt = VAR_3->tdc_mawt;

 return 0;
}
