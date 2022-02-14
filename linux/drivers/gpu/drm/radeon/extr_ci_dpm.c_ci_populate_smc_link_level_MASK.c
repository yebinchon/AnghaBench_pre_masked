
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_11__ {int pcie_dpm_enable_mask; } ;
struct TYPE_10__ {void* LinkLevelCount; } ;
struct TYPE_13__ {size_t count; TYPE_1__* dpm_levels; } ;
struct ci_dpm_table {TYPE_7__ pcie_speed_table; } ;
struct ci_power_info {TYPE_4__ dpm_level_enable_mask; TYPE_3__ smc_state_table; struct ci_dpm_table dpm_table; } ;
struct TYPE_12__ {TYPE_2__* LinkLevel; } ;
struct TYPE_9__ {int EnabledForActivity; void* UpT; void* DownT; int PcieLaneCount; void* PcieGenSpeed; } ;
struct TYPE_8__ {int param1; scalar_t__ value; } ;
typedef TYPE_5__ SMU7_Discrete_DpmTable ;


 int FUNC_0 (TYPE_7__*) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_0,
           SMU7_Discrete_DpmTable *VAR_1)
{
 struct ci_power_info *VAR_2 = FUNC_1(VAR_0);
 struct ci_dpm_table *VAR_3 = &VAR_2->dpm_table;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->pcie_speed_table.count; VAR_4++) {
  VAR_1->LinkLevel[VAR_4].PcieGenSpeed =
   (u8)VAR_3->pcie_speed_table.dpm_levels[VAR_4].value;
  VAR_1->LinkLevel[VAR_4].PcieLaneCount =
   FUNC_3(VAR_3->pcie_speed_table.dpm_levels[VAR_4].param1);
  VAR_1->LinkLevel[VAR_4].EnabledForActivity = 1;
  VAR_1->LinkLevel[VAR_4].DownT = FUNC_2(5);
  VAR_1->LinkLevel[VAR_4].UpT = FUNC_2(30);
 }

 VAR_2->smc_state_table.LinkLevelCount = (u8)VAR_3->pcie_speed_table.count;
 VAR_2->dpm_level_enable_mask.pcie_dpm_enable_mask =
  FUNC_0(&VAR_3->pcie_speed_table);
}
