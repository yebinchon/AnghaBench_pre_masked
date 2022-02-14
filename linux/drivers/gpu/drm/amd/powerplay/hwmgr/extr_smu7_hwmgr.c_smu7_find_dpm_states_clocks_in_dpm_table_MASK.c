
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
struct smu7_single_dpm_table {size_t count; TYPE_3__* dpm_levels; } ;
struct smu7_power_state {int performance_level_count; TYPE_2__* performance_levels; } ;
struct TYPE_9__ {scalar_t__ min_clock_in_sr; scalar_t__ num_existing_displays; } ;
struct TYPE_6__ {struct smu7_single_dpm_table mclk_table; struct smu7_single_dpm_table sclk_table; } ;
struct smu7_hwmgr {int need_update_smu7_dpm_table; TYPE_4__ display_timing; TYPE_1__ dpm_table; } ;
struct pp_hwmgr {TYPE_5__* display_config; scalar_t__ backend; } ;
struct phm_set_power_state_input {int pnew_state; } ;
struct PP_Clocks {scalar_t__ engineClockInSR; int member_0; } ;
struct TYPE_10__ {scalar_t__ num_display; } ;
struct TYPE_8__ {size_t value; } ;
struct TYPE_7__ {size_t engine_clock; size_t memory_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct smu7_power_state* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_5, const void *VAR_6)
{
 const struct phm_set_power_state_input *VAR_7 =
   (const struct phm_set_power_state_input *)VAR_6;
 const struct smu7_power_state *VAR_8 =
   FUNC_0(VAR_7->pnew_state);
 struct smu7_hwmgr *VAR_9 = (struct smu7_hwmgr *)(VAR_5->backend);
 struct smu7_single_dpm_table *VAR_10 = &(VAR_9->dpm_table.sclk_table);
 uint32_t VAR_11 = VAR_8->performance_levels
   [VAR_8->performance_level_count - 1].engine_clock;
 struct smu7_single_dpm_table *VAR_12 = &(VAR_9->dpm_table.mclk_table);
 uint32_t VAR_13 = VAR_8->performance_levels
   [VAR_8->performance_level_count - 1].memory_clock;
 struct PP_Clocks VAR_14 = {0};
 uint32_t VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_10->count; VAR_15++) {
  if (VAR_11 == VAR_10->dpm_levels[VAR_15].value)
   break;
 }

 if (VAR_15 >= VAR_10->count) {
  if (VAR_11 > VAR_10->dpm_levels[VAR_15-1].value) {
   VAR_9->need_update_smu7_dpm_table |= VAR_1;
   VAR_10->dpm_levels[VAR_15-1].value = VAR_11;
  }
 } else {



  if (VAR_9->display_timing.min_clock_in_sr != VAR_14.engineClockInSR &&
   (VAR_14.engineClockInSR >= VAR_4 ||
    VAR_9->display_timing.min_clock_in_sr >= VAR_4))
   VAR_9->need_update_smu7_dpm_table |= VAR_3;
 }

 for (VAR_15 = 0; VAR_15 < VAR_12->count; VAR_15++) {
  if (VAR_13 == VAR_12->dpm_levels[VAR_15].value)
   break;
 }

 if (VAR_15 >= VAR_12->count) {
  if (VAR_13 > VAR_12->dpm_levels[VAR_15-1].value) {
   VAR_9->need_update_smu7_dpm_table |= VAR_0;
   VAR_12->dpm_levels[VAR_15-1].value = VAR_13;
  }
 }

 if (VAR_9->display_timing.num_existing_displays != VAR_5->display_config->num_display)
  VAR_9->need_update_smu7_dpm_table |= VAR_2;

 return 0;
}
