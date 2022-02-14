
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vega10_single_dpm_table {int count; TYPE_3__* dpm_levels; } ;
struct vega10_power_state {int performance_level_count; TYPE_2__* performance_levels; } ;
struct TYPE_4__ {struct vega10_single_dpm_table mem_table; struct vega10_single_dpm_table soc_table; struct vega10_single_dpm_table gfx_table; } ;
struct vega10_hwmgr {TYPE_1__ dpm_table; } ;
struct pp_power_state {int hardware; } ;
struct pp_hwmgr {int ps_size; int num_ps; scalar_t__ ps; struct pp_power_state* request_ps; struct vega10_hwmgr* backend; } ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {scalar_t__ gfx_clock; scalar_t__ soc_clock; scalar_t__ mem_clock; } ;


 struct vega10_power_state* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_0)
{
 struct vega10_hwmgr *VAR_1 = VAR_0->backend;
 struct pp_power_state *VAR_2 = VAR_0->request_ps;
 struct vega10_power_state *VAR_3;
 struct vega10_single_dpm_table *VAR_4 =
  &VAR_1->dpm_table.gfx_table;
 struct vega10_single_dpm_table *VAR_5 =
  &VAR_1->dpm_table.soc_table;
 struct vega10_single_dpm_table *VAR_6 =
  &VAR_1->dpm_table.mem_table;
 int VAR_7;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_0(&VAR_2->hardware);
 VAR_7 = VAR_3->performance_level_count - 1;

 if (VAR_3->performance_levels[VAR_7].gfx_clock !=
     VAR_4->dpm_levels[VAR_4->count - 1].value)
  VAR_3->performance_levels[VAR_7].gfx_clock =
   VAR_4->dpm_levels[VAR_4->count - 1].value;

 if (VAR_3->performance_levels[VAR_7].soc_clock !=
     VAR_5->dpm_levels[VAR_5->count - 1].value)
  VAR_3->performance_levels[VAR_7].soc_clock =
   VAR_5->dpm_levels[VAR_5->count - 1].value;

 if (VAR_3->performance_levels[VAR_7].mem_clock !=
     VAR_6->dpm_levels[VAR_6->count - 1].value)
  VAR_3->performance_levels[VAR_7].mem_clock =
   VAR_6->dpm_levels[VAR_6->count - 1].value;

 if (!VAR_0->ps)
  return;

 VAR_2 = (struct pp_power_state *)((unsigned long)(VAR_0->ps) + VAR_0->ps_size * (VAR_0->num_ps - 1));
 VAR_3 = FUNC_0(&VAR_2->hardware);
 VAR_7 = VAR_3->performance_level_count - 1;

 if (VAR_3->performance_levels[VAR_7].gfx_clock !=
     VAR_4->dpm_levels[VAR_4->count - 1].value)
  VAR_3->performance_levels[VAR_7].gfx_clock =
   VAR_4->dpm_levels[VAR_4->count - 1].value;

 if (VAR_3->performance_levels[VAR_7].soc_clock !=
     VAR_5->dpm_levels[VAR_5->count - 1].value)
  VAR_3->performance_levels[VAR_7].soc_clock =
   VAR_5->dpm_levels[VAR_5->count - 1].value;

 if (VAR_3->performance_levels[VAR_7].mem_clock !=
     VAR_6->dpm_levels[VAR_6->count - 1].value)
  VAR_3->performance_levels[VAR_7].mem_clock =
   VAR_6->dpm_levels[VAR_6->count - 1].value;
}
