
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu7_single_dpm_table {int count; TYPE_2__* dpm_levels; } ;
struct TYPE_3__ {struct smu7_single_dpm_table mclk_table; struct smu7_single_dpm_table sclk_table; } ;
struct smu7_hwmgr {TYPE_1__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct amd_pp_simple_clock_info {int engine_max_clock; int memory_max_clock; } ;
struct TYPE_4__ {int value; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1,
     struct amd_pp_simple_clock_info *VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct smu7_single_dpm_table *VAR_4 = &(VAR_3->dpm_table.sclk_table);
 struct smu7_single_dpm_table *VAR_5 = &(VAR_3->dpm_table.mclk_table);

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_2->memory_max_clock = VAR_5->count > 1 ?
    VAR_5->dpm_levels[VAR_5->count-1].value :
    VAR_5->dpm_levels[0].value;
 VAR_2->engine_max_clock = VAR_4->count > 1 ?
    VAR_4->dpm_levels[VAR_4->count-1].value :
    VAR_4->dpm_levels[0].value;
 return 0;
}
