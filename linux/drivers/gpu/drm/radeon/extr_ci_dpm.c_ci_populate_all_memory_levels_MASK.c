
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct radeon_device {TYPE_2__* pdev; } ;
struct TYPE_12__ {TYPE_5__* MemoryLevel; scalar_t__ MemoryDpmLevelCount; } ;
struct TYPE_11__ {int mclk_dpm_enable_mask; } ;
struct TYPE_14__ {size_t count; TYPE_1__* dpm_levels; } ;
struct ci_dpm_table {TYPE_8__ mclk_table; } ;
struct ci_power_info {size_t dpm_table_start; int sram_end; TYPE_4__ smc_state_table; TYPE_3__ dpm_level_enable_mask; struct ci_dpm_table dpm_table; } ;
struct TYPE_13__ {int EnabledForActivity; int DisplayWatermark; int ActivityLevel; int MinVddcPhases; int MinVddc; } ;
struct TYPE_10__ {int device; } ;
struct TYPE_9__ {scalar_t__ value; } ;
typedef TYPE_5__ SMU7_Discrete_MemoryLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct radeon_device*,size_t,scalar_t__*,size_t,int ) ;
 int FUNC_1 (TYPE_8__*) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;
 size_t FUNC_3 (struct radeon_device*,scalar_t__,TYPE_5__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,int ,size_t) ;
 size_t FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_2(VAR_5);
 struct ci_dpm_table *VAR_7 = &VAR_6->dpm_table;
 u32 VAR_8 = VAR_6->dpm_table_start +
  FUNC_6(VAR_3, VAR_1);
 u32 VAR_9 = sizeof(SMU7_Discrete_MemoryLevel) *
  VAR_4;
 SMU7_Discrete_MemoryLevel *VAR_10 = VAR_6->smc_state_table.MemoryLevel;
 u32 VAR_11, VAR_12;

 FUNC_5(VAR_10, 0, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_7->mclk_table.count; VAR_11++) {
  if (VAR_7->mclk_table.dpm_levels[VAR_11].value == 0)
   return -VAR_0;
  VAR_12 = FUNC_3(VAR_5,
            VAR_7->mclk_table.dpm_levels[VAR_11].value,
            &VAR_6->smc_state_table.MemoryLevel[VAR_11]);
  if (VAR_12)
   return VAR_12;
 }

 VAR_6->smc_state_table.MemoryLevel[0].EnabledForActivity = 1;

 if ((VAR_7->mclk_table.count >= 2) &&
     ((VAR_5->pdev->device == 0x67B0) || (VAR_5->pdev->device == 0x67B1))) {
  VAR_6->smc_state_table.MemoryLevel[1].MinVddc =
   VAR_6->smc_state_table.MemoryLevel[0].MinVddc;
  VAR_6->smc_state_table.MemoryLevel[1].MinVddcPhases =
   VAR_6->smc_state_table.MemoryLevel[0].MinVddcPhases;
 }

 VAR_6->smc_state_table.MemoryLevel[0].ActivityLevel = FUNC_4(0x1F);

 VAR_6->smc_state_table.MemoryDpmLevelCount = (u8)VAR_7->mclk_table.count;
 VAR_6->dpm_level_enable_mask.mclk_dpm_enable_mask =
  FUNC_1(&VAR_7->mclk_table);

 VAR_6->smc_state_table.MemoryLevel[VAR_7->mclk_table.count - 1].DisplayWatermark =
  VAR_2;

 VAR_12 = FUNC_0(VAR_5, VAR_8,
       (u8 *)VAR_10, VAR_9,
       VAR_6->sram_end);
 if (VAR_12)
  return VAR_12;

 return 0;
}
