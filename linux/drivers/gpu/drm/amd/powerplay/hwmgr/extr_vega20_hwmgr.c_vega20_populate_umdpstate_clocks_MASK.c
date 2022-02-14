
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vega20_single_dpm_table {size_t count; TYPE_2__* dpm_levels; } ;
struct TYPE_3__ {struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; } ;
struct vega20_hwmgr {TYPE_1__ dpm_table; } ;
struct pp_hwmgr {int pstate_sclk; int pstate_mclk; scalar_t__ backend; } ;
struct TYPE_4__ {int value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(
  struct pp_hwmgr *VAR_2)
{
 struct vega20_hwmgr *VAR_3 = (struct vega20_hwmgr *)(VAR_2->backend);
 struct vega20_single_dpm_table *VAR_4 = &(VAR_3->dpm_table.gfx_table);
 struct vega20_single_dpm_table *VAR_5 = &(VAR_3->dpm_table.mem_table);

 VAR_2->pstate_sclk = VAR_4->dpm_levels[0].value;
 VAR_2->pstate_mclk = VAR_5->dpm_levels[0].value;

 if (VAR_4->count > VAR_0 &&
     VAR_5->count > VAR_1) {
  VAR_2->pstate_sclk = VAR_4->dpm_levels[VAR_0].value;
  VAR_2->pstate_mclk = VAR_5->dpm_levels[VAR_1].value;
 }

 VAR_2->pstate_sclk = VAR_2->pstate_sclk * 100;
 VAR_2->pstate_mclk = VAR_2->pstate_mclk * 100;

 return 0;
}
