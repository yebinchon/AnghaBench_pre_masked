
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_11__ {int count; TYPE_3__* entries; } ;
struct TYPE_9__ {int count; } ;
struct TYPE_12__ {TYPE_4__ cac_leakage_table; TYPE_2__ vddc_dependency_on_sclk; } ;
struct TYPE_13__ {int platform_caps; TYPE_5__ dyn_state; } ;
struct TYPE_14__ {TYPE_6__ dpm; } ;
struct radeon_device {TYPE_7__ pm; } ;
struct TYPE_8__ {int * BapmVddCVidHiSidd2; int * BapmVddCVidLoSidd; int * BapmVddCVidHiSidd; } ;
struct ci_power_info {TYPE_1__ smc_powertune_table; } ;
struct TYPE_10__ {scalar_t__ leakage; int vddc; int vddc3; int vddc2; int vddc1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_2)
{
 struct ci_power_info *VAR_3 = FUNC_1(VAR_2);
 u8 *VAR_4 = VAR_3->smc_powertune_table.BapmVddCVidHiSidd;
 u8 *VAR_5 = VAR_3->smc_powertune_table.BapmVddCVidLoSidd;
 u8 *VAR_6 = VAR_3->smc_powertune_table.BapmVddCVidHiSidd2;
 u32 VAR_7;

 if (VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries == ((void*)0))
  return -VAR_1;
 if (VAR_2->pm.dpm.dyn_state.cac_leakage_table.count > 8)
  return -VAR_1;
 if (VAR_2->pm.dpm.dyn_state.cac_leakage_table.count !=
     VAR_2->pm.dpm.dyn_state.vddc_dependency_on_sclk.count)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_2->pm.dpm.dyn_state.cac_leakage_table.count; VAR_7++) {
  if (VAR_2->pm.dpm.platform_caps & VAR_0) {
   VAR_5[VAR_7] = FUNC_0(VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].vddc1);
   VAR_4[VAR_7] = FUNC_0(VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].vddc2);
   VAR_6[VAR_7] = FUNC_0(VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].vddc3);
  } else {
   VAR_5[VAR_7] = FUNC_0(VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].vddc);
   VAR_4[VAR_7] = FUNC_0((u16)VAR_2->pm.dpm.dyn_state.cac_leakage_table.entries[VAR_7].leakage);
  }
 }
 return 0;
}
