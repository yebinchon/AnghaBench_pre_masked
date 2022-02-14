
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_dpm_context {struct arcturus_dpm_table* dpm_context; } ;
struct smu_context {int pstate_sclk; int pstate_mclk; struct smu_dpm_context smu_dpm; } ;
struct arcturus_single_dpm_table {size_t count; TYPE_1__* dpm_levels; } ;
struct arcturus_dpm_table {struct arcturus_single_dpm_table mem_table; struct arcturus_single_dpm_table gfx_table; } ;
struct TYPE_2__ {int value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct smu_context *VAR_2)
{
 struct smu_dpm_context *VAR_3 = &VAR_2->smu_dpm;
 struct arcturus_dpm_table *VAR_4 = ((void*)0);
 struct arcturus_single_dpm_table *VAR_5 = ((void*)0);
 struct arcturus_single_dpm_table *VAR_6 = ((void*)0);

 VAR_4 = VAR_3->dpm_context;
 VAR_5 = &(VAR_4->gfx_table);
 VAR_6 = &(VAR_4->mem_table);

 VAR_2->pstate_sclk = VAR_5->dpm_levels[0].value;
 VAR_2->pstate_mclk = VAR_6->dpm_levels[0].value;

 if (VAR_5->count > VAR_0 &&
     VAR_6->count > VAR_1) {
  VAR_2->pstate_sclk = VAR_5->dpm_levels[VAR_0].value;
  VAR_2->pstate_mclk = VAR_6->dpm_levels[VAR_1].value;
 }

 VAR_2->pstate_sclk = VAR_2->pstate_sclk * 100;
 VAR_2->pstate_mclk = VAR_2->pstate_mclk * 100;

 return 0;
}
