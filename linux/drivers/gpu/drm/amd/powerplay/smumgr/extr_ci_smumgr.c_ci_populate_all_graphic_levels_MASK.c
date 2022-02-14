
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ u8 ;
struct TYPE_7__ {int sclk_dpm_enable_mask; } ;
struct TYPE_8__ {size_t count; TYPE_1__* dpm_levels; } ;
struct smu7_dpm_table {TYPE_4__ sclk_table; } ;
struct smu7_hwmgr {TYPE_3__ dpm_level_enable_mask; struct smu7_dpm_table dpm_table; } ;
struct pp_hwmgr {scalar_t__ smu_backend; scalar_t__ backend; } ;
struct TYPE_6__ {scalar_t__ GraphicsDpmLevelCount; struct SMU7_Discrete_GraphicsLevel* GraphicsLevel; } ;
struct ci_smumgr {size_t dpm_table_start; TYPE_2__ smc_state_table; } ;
struct SMU7_Discrete_GraphicsLevel {int EnabledForActivity; int DisplayWatermark; scalar_t__ DeepSleepDivId; } ;
struct TYPE_5__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pp_hwmgr*,size_t,scalar_t__*,size_t,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,struct SMU7_Discrete_GraphicsLevel*) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_5)
{
 struct smu7_hwmgr *VAR_6 = (struct smu7_hwmgr *)(VAR_5->backend);
 struct ci_smumgr *VAR_7 = (struct ci_smumgr *)(VAR_5->smu_backend);
 struct smu7_dpm_table *VAR_8 = &VAR_6->dpm_table;
 int VAR_9 = 0;
 uint32_t VAR_10 = VAR_7->dpm_table_start +
   FUNC_2(VAR_3, VAR_0);
 uint32_t VAR_11 = sizeof(struct SMU7_Discrete_GraphicsLevel) *
   VAR_4;
 struct SMU7_Discrete_GraphicsLevel *VAR_12 =
   VAR_7->smc_state_table.GraphicsLevel;
 uint32_t VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_8->sclk_table.count; VAR_13++) {
  VAR_9 = FUNC_1(VAR_5,
    VAR_8->sclk_table.dpm_levels[VAR_13].value,
    &VAR_12[VAR_13]);
  if (VAR_9)
   return VAR_9;
  if (VAR_13 > 1)
   VAR_7->smc_state_table.GraphicsLevel[VAR_13].DeepSleepDivId = 0;
  if (VAR_13 == (VAR_8->sclk_table.count - 1))
   VAR_7->smc_state_table.GraphicsLevel[VAR_13].DisplayWatermark =
    VAR_1;
 }

 VAR_7->smc_state_table.GraphicsLevel[0].EnabledForActivity = 1;

 VAR_7->smc_state_table.GraphicsDpmLevelCount = (u8)VAR_8->sclk_table.count;
 VAR_6->dpm_level_enable_mask.sclk_dpm_enable_mask =
  FUNC_3(&VAR_8->sclk_table);

 VAR_9 = FUNC_0(VAR_5, VAR_10,
       (u8 *)VAR_12, VAR_11,
       VAR_2);

 return VAR_9;

}
