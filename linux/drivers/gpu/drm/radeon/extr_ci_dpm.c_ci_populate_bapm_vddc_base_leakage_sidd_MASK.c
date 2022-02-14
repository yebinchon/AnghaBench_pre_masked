
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {struct radeon_cac_tdp_table* cac_tdp_table; } ;
struct TYPE_6__ {TYPE_1__ dyn_state; } ;
struct TYPE_7__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;
struct radeon_cac_tdp_table {int high_cac_leakage; int low_cac_leakage; } ;
struct TYPE_8__ {int BapmVddCBaseLeakageHiSidd; int BapmVddCBaseLeakageLoSidd; } ;
struct ci_power_info {TYPE_4__ smc_powertune_table; } ;


 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_0(VAR_0);
 u16 VAR_2 = VAR_1->smc_powertune_table.BapmVddCBaseLeakageHiSidd;
 u16 VAR_3 = VAR_1->smc_powertune_table.BapmVddCBaseLeakageLoSidd;
 struct radeon_cac_tdp_table *VAR_4 =
  VAR_0->pm.dpm.dyn_state.cac_tdp_table;

 VAR_2 = VAR_4->high_cac_leakage / 100 * 256;
 VAR_3 = VAR_4->low_cac_leakage / 100 * 256;

 VAR_1->smc_powertune_table.BapmVddCBaseLeakageHiSidd = FUNC_1(VAR_2);
 VAR_1->smc_powertune_table.BapmVddCBaseLeakageLoSidd = FUNC_1(VAR_3);

 return 0;
}
