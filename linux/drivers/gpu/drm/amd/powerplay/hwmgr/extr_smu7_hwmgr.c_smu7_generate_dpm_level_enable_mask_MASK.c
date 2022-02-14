
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu7_power_state {int dummy; } ;
struct TYPE_4__ {int pcie_speed_table; int mclk_table; int sclk_table; } ;
struct TYPE_3__ {void* pcie_dpm_enable_mask; void* mclk_dpm_enable_mask; void* sclk_dpm_enable_mask; } ;
struct smu7_hwmgr {TYPE_2__ dpm_table; TYPE_1__ dpm_level_enable_mask; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct phm_set_power_state_input {int pnew_state; } ;


 struct smu7_power_state* FUNC_0 (int ) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (struct pp_hwmgr*,struct smu7_power_state const*) ;

__attribute__((used)) static int FUNC_3(
  struct pp_hwmgr *VAR_0, const void *VAR_1)
{
 int VAR_2 = 0;
 const struct phm_set_power_state_input *VAR_3 =
   (const struct phm_set_power_state_input *)VAR_1;
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_0->backend);
 const struct smu7_power_state *VAR_5 =
   FUNC_0(VAR_3->pnew_state);


 VAR_2 = FUNC_2(VAR_0, VAR_5);
 if (VAR_2)
  return VAR_2;

 VAR_4->dpm_level_enable_mask.sclk_dpm_enable_mask =
   FUNC_1(&VAR_4->dpm_table.sclk_table);
 VAR_4->dpm_level_enable_mask.mclk_dpm_enable_mask =
   FUNC_1(&VAR_4->dpm_table.mclk_table);
 VAR_4->dpm_level_enable_mask.pcie_dpm_enable_mask =
   FUNC_1(&VAR_4->dpm_table.pcie_speed_table);

 return 0;
}
