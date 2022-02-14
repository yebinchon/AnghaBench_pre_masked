
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_11__ {int pcie_dpm_enable_mask; int sclk_dpm_enable_mask; } ;
struct TYPE_14__ {size_t count; TYPE_2__* dpm_levels; } ;
struct smu7_dpm_table {TYPE_6__ sclk_table; } ;
struct smu7_hwmgr {TYPE_3__ dpm_level_enable_mask; struct smu7_dpm_table dpm_table; } ;
struct pp_hwmgr {scalar_t__ smu_backend; scalar_t__ backend; } ;
struct TYPE_12__ {int GraphicsDpmLevelCount; TYPE_5__* GraphicsLevel; } ;
struct TYPE_9__ {size_t dpm_table_start; } ;
struct iceland_smumgr {TYPE_4__ smc_state_table; TYPE_1__ smu7_data; } ;
struct TYPE_13__ {int EnabledForActivity; int pcieDpmLevel; int DisplayWatermark; scalar_t__ DeepSleepDivId; } ;
struct TYPE_10__ {int value; } ;
typedef TYPE_5__ SMU71_Discrete_GraphicsLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pp_hwmgr*,int ,TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int,size_t) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (struct pp_hwmgr*,size_t,int*,size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_5)
{
 struct smu7_hwmgr *VAR_6 = (struct smu7_hwmgr *)(VAR_5->backend);
 struct iceland_smumgr *VAR_7 = (struct iceland_smumgr *)(VAR_5->smu_backend);
 struct smu7_dpm_table *VAR_8 = &VAR_6->dpm_table;
 uint32_t VAR_9 = VAR_7->smu7_data.dpm_table_start +
    FUNC_2(VAR_3, VAR_0);

 uint32_t VAR_10 = sizeof(SMU71_Discrete_GraphicsLevel) *
      VAR_4;

 SMU71_Discrete_GraphicsLevel *VAR_11 = VAR_7->smc_state_table.GraphicsLevel;

 uint32_t VAR_12;
 uint8_t VAR_13 = 0;
 uint8_t VAR_14 = 0, VAR_15 = 0;
 uint8_t VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_1(VAR_11, 0x00, VAR_10);

 for (VAR_12 = 0; VAR_12 < VAR_8->sclk_table.count; VAR_12++) {
  VAR_17 = FUNC_0(VAR_5,
     VAR_8->sclk_table.dpm_levels[VAR_12].value,
     &(VAR_7->smc_state_table.GraphicsLevel[VAR_12]));
  if (VAR_17 != 0)
   return VAR_17;


  if (VAR_12 > 1)
   VAR_7->smc_state_table.GraphicsLevel[VAR_12].DeepSleepDivId = 0;
 }


 VAR_7->smc_state_table.GraphicsLevel[0].EnabledForActivity = 1;


 if (VAR_8->sclk_table.count > 1)
  VAR_7->smc_state_table.GraphicsLevel[VAR_8->sclk_table.count-1].DisplayWatermark =
   VAR_1;

 VAR_7->smc_state_table.GraphicsDpmLevelCount =
  (uint8_t)VAR_8->sclk_table.count;
 VAR_6->dpm_level_enable_mask.sclk_dpm_enable_mask =
  FUNC_3(&VAR_8->sclk_table);

 while ((VAR_6->dpm_level_enable_mask.pcie_dpm_enable_mask &
    (1 << (VAR_13 + 1))) != 0) {
  VAR_13++;
 }

 while ((VAR_6->dpm_level_enable_mask.pcie_dpm_enable_mask &
  (1 << VAR_14)) == 0) {
  VAR_14++;
 }

 while ((VAR_16 < VAR_13) &&
   ((VAR_6->dpm_level_enable_mask.pcie_dpm_enable_mask &
    (1 << (VAR_14 + 1 + VAR_16))) == 0)) {
  VAR_16++;
 }

 VAR_15 = (VAR_14+1+VAR_16) < VAR_13 ?
  (VAR_14+1+VAR_16) : VAR_13;



 for (VAR_12 = 2; VAR_12 < VAR_8->sclk_table.count; VAR_12++) {
  VAR_7->smc_state_table.GraphicsLevel[VAR_12].pcieDpmLevel = VAR_13;
 }


 VAR_7->smc_state_table.GraphicsLevel[0].pcieDpmLevel = VAR_14;


 VAR_7->smc_state_table.GraphicsLevel[1].pcieDpmLevel = VAR_15;


 VAR_17 = FUNC_4(VAR_5, VAR_9,
    (uint8_t *)VAR_11, (uint32_t)VAR_10,
        VAR_2);

 return VAR_17;
}
