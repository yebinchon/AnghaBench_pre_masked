
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct radeon_device {int dummy; } ;
struct TYPE_10__ {int sclk_dpm_enable_mask; } ;
struct TYPE_9__ {scalar_t__ GraphicsDpmLevelCount; TYPE_4__* GraphicsLevel; } ;
struct TYPE_12__ {size_t count; TYPE_1__* dpm_levels; } ;
struct ci_dpm_table {TYPE_7__ sclk_table; } ;
struct ci_power_info {size_t dpm_table_start; int sram_end; TYPE_3__ dpm_level_enable_mask; TYPE_2__ smc_state_table; scalar_t__* activity_target; struct ci_dpm_table dpm_table; } ;
struct TYPE_11__ {int EnabledForActivity; int DisplayWatermark; scalar_t__ DeepSleepDivId; } ;
struct TYPE_8__ {int value; } ;
typedef TYPE_4__ SMU7_Discrete_GraphicsLevel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct radeon_device*,size_t,scalar_t__*,size_t,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;
 size_t FUNC_3 (struct radeon_device*,int ,int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,size_t) ;
 size_t FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_4)
{
 struct ci_power_info *VAR_5 = FUNC_2(VAR_4);
 struct ci_dpm_table *VAR_6 = &VAR_5->dpm_table;
 u32 VAR_7 = VAR_5->dpm_table_start +
  FUNC_5(VAR_2, VAR_0);
 u32 VAR_8 = sizeof(SMU7_Discrete_GraphicsLevel) *
  VAR_3;
 SMU7_Discrete_GraphicsLevel *VAR_9 = VAR_5->smc_state_table.GraphicsLevel;
 u32 VAR_10, VAR_11;

 FUNC_4(VAR_9, 0, VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_6->sclk_table.count; VAR_10++) {
  VAR_11 = FUNC_3(VAR_4,
             VAR_6->sclk_table.dpm_levels[VAR_10].value,
             (u16)VAR_5->activity_target[VAR_10],
             &VAR_5->smc_state_table.GraphicsLevel[VAR_10]);
  if (VAR_11)
   return VAR_11;
  if (VAR_10 > 1)
   VAR_5->smc_state_table.GraphicsLevel[VAR_10].DeepSleepDivId = 0;
  if (VAR_10 == (VAR_6->sclk_table.count - 1))
   VAR_5->smc_state_table.GraphicsLevel[VAR_10].DisplayWatermark =
    VAR_1;
 }
 VAR_5->smc_state_table.GraphicsLevel[0].EnabledForActivity = 1;

 VAR_5->smc_state_table.GraphicsDpmLevelCount = (u8)VAR_6->sclk_table.count;
 VAR_5->dpm_level_enable_mask.sclk_dpm_enable_mask =
  FUNC_1(&VAR_6->sclk_table);

 VAR_11 = FUNC_0(VAR_4, VAR_7,
       (u8 *)VAR_9, VAR_8,
       VAR_5->sram_end);
 if (VAR_11)
  return VAR_11;

 return 0;
}
