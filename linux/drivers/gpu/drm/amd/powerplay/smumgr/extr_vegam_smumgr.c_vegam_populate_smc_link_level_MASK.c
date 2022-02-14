
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_8__ {void* LinkLevelCount; } ;
struct vegam_smumgr {TYPE_3__ smc_state_table; } ;
struct TYPE_9__ {int pcie_dpm_enable_mask; } ;
struct TYPE_10__ {int count; TYPE_1__* dpm_levels; } ;
struct smu7_dpm_table {TYPE_5__ pcie_speed_table; } ;
struct smu7_hwmgr {int pcie_spc_cap; TYPE_4__ dpm_level_enable_mask; struct smu7_dpm_table dpm_table; } ;
struct pp_hwmgr {scalar_t__ smu_backend; scalar_t__ backend; } ;
struct SMU75_Discrete_DpmTable {TYPE_2__* LinkLevel; } ;
struct TYPE_7__ {int EnabledForActivity; void* UpThreshold; void* DownThreshold; void* SPC; void* PcieLaneCount; void* PcieGenSpeed; } ;
struct TYPE_6__ {int param1; scalar_t__ value; } ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_0,
  struct SMU75_Discrete_DpmTable *VAR_1)
{
 struct smu7_hwmgr *VAR_2 = (struct smu7_hwmgr *)(VAR_0->backend);
 struct vegam_smumgr *VAR_3 =
   (struct vegam_smumgr *)(VAR_0->smu_backend);
 struct smu7_dpm_table *VAR_4 = &VAR_2->dpm_table;
 int VAR_5;



 for (VAR_5 = 0; VAR_5 <= VAR_4->pcie_speed_table.count; VAR_5++) {
  VAR_1->LinkLevel[VAR_5].PcieGenSpeed =
    (uint8_t)VAR_4->pcie_speed_table.dpm_levels[VAR_5].value;
  VAR_1->LinkLevel[VAR_5].PcieLaneCount = (uint8_t)FUNC_1(
    VAR_4->pcie_speed_table.dpm_levels[VAR_5].param1);
  VAR_1->LinkLevel[VAR_5].EnabledForActivity = 1;
  VAR_1->LinkLevel[VAR_5].SPC = (uint8_t)(VAR_2->pcie_spc_cap & 0xff);
  VAR_1->LinkLevel[VAR_5].DownThreshold = FUNC_0(5);
  VAR_1->LinkLevel[VAR_5].UpThreshold = FUNC_0(30);
 }

 VAR_3->smc_state_table.LinkLevelCount =
   (uint8_t)VAR_4->pcie_speed_table.count;


 VAR_2->dpm_level_enable_mask.pcie_dpm_enable_mask =
   FUNC_2(&VAR_4->pcie_speed_table);

 return 0;
}
