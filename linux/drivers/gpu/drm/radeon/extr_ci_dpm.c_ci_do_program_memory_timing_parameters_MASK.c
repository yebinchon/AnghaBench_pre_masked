
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_11__ {size_t count; TYPE_3__* dpm_levels; } ;
struct TYPE_9__ {size_t count; TYPE_1__* dpm_levels; } ;
struct TYPE_12__ {TYPE_4__ mclk_table; TYPE_2__ sclk_table; } ;
struct ci_power_info {int sram_end; int arb_table_start; TYPE_5__ dpm_table; } ;
struct TYPE_13__ {int ** entries; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_8__ {int value; } ;
typedef TYPE_6__ SMU7_Discrete_MCArbDramTimingTable ;


 int FUNC_0 (struct radeon_device*,int ,int *,int,int ) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ,int ,int *) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_0)
{
 struct ci_power_info *VAR_1 = FUNC_1(VAR_0);
 SMU7_Discrete_MCArbDramTimingTable VAR_2;
 u32 VAR_3, VAR_4;
 int VAR_5 = 0;

 FUNC_3(&VAR_2, 0, sizeof(SMU7_Discrete_MCArbDramTimingTable));

 for (VAR_3 = 0; VAR_3 < VAR_1->dpm_table.sclk_table.count; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_1->dpm_table.mclk_table.count; VAR_4++) {
   VAR_5 = FUNC_2(VAR_0,
           VAR_1->dpm_table.sclk_table.dpm_levels[VAR_3].value,
           VAR_1->dpm_table.mclk_table.dpm_levels[VAR_4].value,
           &VAR_2.entries[VAR_3][VAR_4]);
   if (VAR_5)
    break;
  }
 }

 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_0,
        VAR_1->arb_table_start,
        (u8 *)&VAR_2,
        sizeof(SMU7_Discrete_MCArbDramTimingTable),
        VAR_1->sram_end);

 return VAR_5;
}
