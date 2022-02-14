
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vega10_single_dpm_table {size_t count; TYPE_3__* dpm_levels; } ;
struct vega10_power_state {int performance_level_count; TYPE_2__* performance_levels; } ;
struct TYPE_9__ {scalar_t__ num_existing_displays; } ;
struct TYPE_6__ {struct vega10_single_dpm_table mem_table; struct vega10_single_dpm_table gfx_table; } ;
struct vega10_hwmgr {int need_update_dpm_table; TYPE_4__ display_timing; TYPE_1__ dpm_table; } ;
struct pp_hwmgr {TYPE_5__* display_config; struct vega10_hwmgr* backend; } ;
struct phm_set_power_state_input {int pnew_state; } ;
struct TYPE_10__ {scalar_t__ num_display; } ;
struct TYPE_8__ {size_t value; } ;
struct TYPE_7__ {size_t gfx_clock; size_t mem_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vega10_power_state* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_3, const void *VAR_4)
{
 struct vega10_hwmgr *VAR_5 = VAR_3->backend;
 const struct phm_set_power_state_input *VAR_6 =
   (const struct phm_set_power_state_input *)VAR_4;
 const struct vega10_power_state *VAR_7 =
   FUNC_0(VAR_6->pnew_state);
 struct vega10_single_dpm_table *VAR_8 = &(VAR_5->dpm_table.gfx_table);
 uint32_t VAR_9 = VAR_7->performance_levels
   [VAR_7->performance_level_count - 1].gfx_clock;
 struct vega10_single_dpm_table *VAR_10 = &(VAR_5->dpm_table.mem_table);
 uint32_t VAR_11 = VAR_7->performance_levels
   [VAR_7->performance_level_count - 1].mem_clock;
 uint32_t VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_8->count; VAR_12++) {
  if (VAR_9 == VAR_8->dpm_levels[VAR_12].value)
   break;
 }

 if (VAR_12 >= VAR_8->count) {
  if (VAR_9 > VAR_8->dpm_levels[VAR_12-1].value) {
   VAR_5->need_update_dpm_table |= VAR_1;
   VAR_8->dpm_levels[VAR_12-1].value = VAR_9;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_10->count; VAR_12++) {
  if (VAR_11 == VAR_10->dpm_levels[VAR_12].value)
   break;
 }

 if (VAR_12 >= VAR_10->count) {
  if (VAR_11 > VAR_10->dpm_levels[VAR_12-1].value) {
   VAR_5->need_update_dpm_table |= VAR_0;
   VAR_10->dpm_levels[VAR_12-1].value = VAR_11;
  }
 }

 if (VAR_5->display_timing.num_existing_displays != VAR_3->display_config->num_display)
  VAR_5->need_update_dpm_table |= VAR_2;

 return 0;
}
