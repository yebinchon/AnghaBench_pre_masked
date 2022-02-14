
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {TYPE_2__* cac_tdp_table; } ;
struct TYPE_9__ {TYPE_3__ dyn_state; } ;
struct TYPE_10__ {TYPE_4__ dpm; } ;
struct radeon_device {TYPE_5__ pm; } ;
struct ci_pt_defaults {int tdc_mawt; int tdc_vddc_throttle_release_limit_perc; } ;
struct TYPE_6__ {int TDC_MAWt; int TDC_VDDC_ThrottleReleaseLimitPerc; int TDC_VDDC_PkgLimit; } ;
struct ci_power_info {TYPE_1__ smc_powertune_table; struct ci_pt_defaults* powertune_defaults; } ;
struct TYPE_7__ {int tdc; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_0(VAR_0);
 const struct ci_pt_defaults *VAR_2 = VAR_1->powertune_defaults;
 u16 VAR_3;

 VAR_3 = VAR_0->pm.dpm.dyn_state.cac_tdp_table->tdc * 256;
 VAR_1->smc_powertune_table.TDC_VDDC_PkgLimit = FUNC_1(VAR_3);
 VAR_1->smc_powertune_table.TDC_VDDC_ThrottleReleaseLimitPerc =
  VAR_2->tdc_vddc_throttle_release_limit_perc;
 VAR_1->smc_powertune_table.TDC_MAWt = VAR_2->tdc_mawt;

 return 0;
}
