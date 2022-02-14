
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_12__ {int arb_table_start; } ;
struct vegam_smumgr {TYPE_6__ smu7_data; } ;
struct TYPE_10__ {size_t count; TYPE_3__* dpm_levels; } ;
struct TYPE_8__ {size_t count; TYPE_1__* dpm_levels; } ;
struct TYPE_11__ {TYPE_4__ mclk_table; TYPE_2__ sclk_table; } ;
struct smu7_hwmgr {TYPE_5__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ smu_backend; scalar_t__ backend; } ;
struct SMU75_Discrete_MCArbDramTimingTable {int ** entries; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_7__ {int value; } ;
typedef int SMU75_Discrete_MCArbDramTimingTable ;


 int VAR_0 ;
 int FUNC_0 (struct SMU75_Discrete_MCArbDramTimingTable*,int ,int) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int *,int,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_1)
{
 struct smu7_hwmgr *VAR_2 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct vegam_smumgr *VAR_3 = (struct vegam_smumgr *)(VAR_1->smu_backend);
 struct SMU75_Discrete_MCArbDramTimingTable VAR_4;
 uint32_t VAR_5, VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_4, 0, sizeof(SMU75_Discrete_MCArbDramTimingTable));

 for (VAR_5 = 0; VAR_5 < VAR_2->dpm_table.sclk_table.count; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_2->dpm_table.mclk_table.count; VAR_6++) {
   VAR_7 = FUNC_2(VAR_1,
     VAR_2->dpm_table.sclk_table.dpm_levels[VAR_5].value,
     VAR_2->dpm_table.mclk_table.dpm_levels[VAR_6].value,
     &VAR_4.entries[VAR_5][VAR_6]);
   if (VAR_7)
    return VAR_7;
  }
 }

 VAR_7 = FUNC_1(
   VAR_1,
   VAR_3->smu7_data.arb_table_start,
   (uint8_t *)&VAR_4,
   sizeof(SMU75_Discrete_MCArbDramTimingTable),
   VAR_0);
 return VAR_7;
}
