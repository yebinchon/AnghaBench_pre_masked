
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


typedef int uint32_t ;
struct TYPE_11__ {int soft_min_level; int soft_max_level; int hard_min_level; int hard_max_level; } ;
struct vega12_single_dpm_table {int count; TYPE_6__* dpm_levels; TYPE_5__ dpm_state; } ;
struct TYPE_10__ {struct vega12_single_dpm_table eclk_table; struct vega12_single_dpm_table soc_table; struct vega12_single_dpm_table dclk_table; struct vega12_single_dpm_table vclk_table; struct vega12_single_dpm_table mem_table; struct vega12_single_dpm_table gfx_table; } ;
struct TYPE_8__ {int count; TYPE_1__* entries; } ;
struct vega12_hwmgr {TYPE_4__ dpm_table; TYPE_2__ mclk_latency_table; } ;
struct pp_hwmgr {scalar_t__ dpm_level; TYPE_3__* display_config; scalar_t__ backend; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_9__ {int num_display; int dce_tolerable_mclk_in_active_latency; int min_mem_set_clock; scalar_t__ nb_pstate_switch_disable; int multi_monitor_in_sync; } ;
struct TYPE_7__ {int latency; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_9)
{
 struct vega12_hwmgr *VAR_10 = (struct vega12_hwmgr *)(VAR_9->backend);
 struct vega12_single_dpm_table *VAR_11;
 bool VAR_12 = 0;
 bool VAR_13;
 uint32_t VAR_14, VAR_15;

 VAR_13 = ((1 < VAR_9->display_config->num_display) &&
             !VAR_9->display_config->multi_monitor_in_sync) ||
             VAR_12;
 VAR_15 = VAR_9->display_config->dce_tolerable_mclk_in_active_latency;


 VAR_11 = &(VAR_10->dpm_table.gfx_table);
 VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
 VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.hard_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;

 if (FUNC_0(VAR_3)) {
  if (VAR_4 < VAR_11->count) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_4].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_4].value;
  }

  if (VAR_9->dpm_level == VAR_1) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[0].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[0].value;
  }

  if (VAR_9->dpm_level == VAR_2) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
  }
 }


 VAR_11 = &(VAR_10->dpm_table.mem_table);
 VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
 VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.hard_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;

 if (FUNC_0(VAR_3)) {
  if (VAR_5 < VAR_11->count) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_5].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_5].value;
  }

  if (VAR_9->dpm_level == VAR_0) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[0].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[0].value;
  }

  if (VAR_9->dpm_level == VAR_2) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
  }
 }


 if (VAR_11->dpm_state.hard_min_level < (VAR_9->display_config->min_mem_set_clock / 100))
  VAR_11->dpm_state.hard_min_level = VAR_9->display_config->min_mem_set_clock / 100;


 if (VAR_13) {
  VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
  for (VAR_14 = 0; VAR_14 < VAR_10->mclk_latency_table.count - 1; VAR_14++) {
   if (VAR_10->mclk_latency_table.entries[VAR_14].latency <= VAR_15) {
    if (VAR_11->dpm_levels[VAR_14].value >= (VAR_9->display_config->min_mem_set_clock / 100)) {
     VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[VAR_14].value;
     break;
    }
   }
  }
 }

 if (VAR_9->display_config->nb_pstate_switch_disable)
  VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[VAR_11->count - 1].value;


 VAR_11 = &(VAR_10->dpm_table.vclk_table);
 VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
 VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.hard_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;

 if (FUNC_0(VAR_3)) {
  if (VAR_7 < VAR_11->count) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_7].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_7].value;
  }

  if (VAR_9->dpm_level == VAR_2) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
  }
 }


 VAR_11 = &(VAR_10->dpm_table.dclk_table);
 VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
 VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.hard_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;

 if (FUNC_0(VAR_3)) {
  if (VAR_7 < VAR_11->count) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_7].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_7].value;
  }

  if (VAR_9->dpm_level == VAR_2) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
  }
 }


 VAR_11 = &(VAR_10->dpm_table.soc_table);
 VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
 VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.hard_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;

 if (FUNC_0(VAR_3)) {
  if (VAR_6 < VAR_11->count) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_6].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_6].value;
  }

  if (VAR_9->dpm_level == VAR_2) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
  }
 }


 VAR_11 = &(VAR_10->dpm_table.eclk_table);
 VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
 VAR_11->dpm_state.hard_min_level = VAR_11->dpm_levels[0].value;
 VAR_11->dpm_state.hard_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;

 if (FUNC_0(VAR_3)) {
  if (VAR_8 < VAR_11->count) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_8].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_8].value;
  }

  if (VAR_9->dpm_level == VAR_2) {
   VAR_11->dpm_state.soft_min_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
   VAR_11->dpm_state.soft_max_level = VAR_11->dpm_levels[VAR_11->count - 1].value;
  }
 }

 return 0;
}
