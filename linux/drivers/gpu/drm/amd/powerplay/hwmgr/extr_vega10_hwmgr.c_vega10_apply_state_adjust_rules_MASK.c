
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t uint32_t ;
struct vega10_power_state {int performance_level_count; TYPE_5__* performance_levels; } ;
struct TYPE_13__ {size_t count; TYPE_1__* entries; } ;
struct TYPE_18__ {size_t stable_pstate_sclk_dpm_percentage; } ;
struct vega10_hwmgr {int battery_state; TYPE_2__ mclk_latency_table; TYPE_7__ registry_data; } ;
struct TYPE_14__ {scalar_t__ ui_label; } ;
struct pp_power_state {TYPE_3__ classification; int hardware; } ;
struct phm_clock_and_voltage_limits {scalar_t__ mclk; size_t sclk; } ;
struct TYPE_19__ {struct phm_clock_and_voltage_limits max_clock_voltage_on_ac; struct phm_clock_and_voltage_limits max_clock_voltage_on_dc; } ;
struct pp_hwmgr {TYPE_6__* display_config; TYPE_8__ dyn_state; scalar_t__ pptable; struct vega10_hwmgr* backend; struct amdgpu_device* adev; } ;
struct phm_ppt_v2_information {TYPE_9__* vdd_dep_on_sclk; } ;
struct TYPE_15__ {scalar_t__ ac_power; } ;
struct amdgpu_device {TYPE_4__ pm; } ;
struct PP_Clocks {size_t engineClock; size_t memoryClock; int member_0; } ;
typedef size_t int32_t ;
struct TYPE_20__ {size_t count; TYPE_10__* entries; } ;
struct TYPE_17__ {size_t min_core_set_clock; size_t min_mem_set_clock; int num_display; size_t dce_tolerable_mclk_in_active_latency; int multi_monitor_in_sync; } ;
struct TYPE_16__ {scalar_t__ mem_clock; size_t gfx_clock; } ;
struct TYPE_12__ {size_t latency; scalar_t__ frequency; } ;
struct TYPE_11__ {size_t clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 struct vega10_power_state* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_5,
    struct pp_power_state *VAR_6,
   const struct pp_power_state *VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_5->adev;
 struct vega10_power_state *VAR_9 =
    FUNC_2(&VAR_6->hardware);
 uint32_t VAR_10;
 uint32_t VAR_11;
 struct PP_Clocks VAR_12 = {0};
 bool VAR_13;
 bool VAR_14;
 bool VAR_15;
 bool VAR_16;
 const struct phm_clock_and_voltage_limits *VAR_17;
 uint32_t VAR_18;
 struct vega10_hwmgr *VAR_19 = VAR_5->backend;
 struct phm_ppt_v2_information *VAR_20 =
   (struct phm_ppt_v2_information *)(VAR_5->pptable);
 int32_t VAR_21;
 uint32_t VAR_22;
 uint32_t VAR_23 = 0, VAR_24 = 0;
 uint32_t VAR_25;

 VAR_19->battery_state = (VAR_4 ==
   VAR_6->classification.ui_label);

 if (VAR_9->performance_level_count != 2)
  FUNC_3("VI should always have 2 performance levels");

 VAR_17 = VAR_8->pm.ac_power ?
   &(VAR_5->dyn_state.max_clock_voltage_on_ac) :
   &(VAR_5->dyn_state.max_clock_voltage_on_dc);


 if (!VAR_8->pm.ac_power) {
  for (VAR_18 = 0; VAR_18 < VAR_9->performance_level_count; VAR_18++) {
   if (VAR_9->performance_levels[VAR_18].mem_clock >
    VAR_17->mclk)
    VAR_9->performance_levels[VAR_18].mem_clock =
      VAR_17->mclk;
   if (VAR_9->performance_levels[VAR_18].gfx_clock >
    VAR_17->sclk)
    VAR_9->performance_levels[VAR_18].gfx_clock =
      VAR_17->sclk;
  }
 }


 VAR_12.engineClock = VAR_5->display_config->min_core_set_clock;
 VAR_12.memoryClock = VAR_5->display_config->min_mem_set_clock;

 if (FUNC_1(VAR_3)) {
  VAR_22 =
   VAR_19->registry_data.stable_pstate_sclk_dpm_percentage;
  FUNC_0(
   VAR_19->registry_data.stable_pstate_sclk_dpm_percentage >= 1 &&
   VAR_19->registry_data.stable_pstate_sclk_dpm_percentage <= 100,
   "percent sclk value must range from 1% to 100%, setting default value",
   VAR_22 = 75);

  VAR_17 = &(VAR_5->dyn_state.max_clock_voltage_on_ac);
  VAR_23 = (VAR_17->sclk *
    VAR_22) / 100;

  for (VAR_21 = VAR_20->vdd_dep_on_sclk->count - 1;
    VAR_21 >= 0; VAR_21--) {
   if (VAR_23 >=
     VAR_20->vdd_dep_on_sclk->entries[VAR_21].clk) {
    VAR_23 =
      VAR_20->vdd_dep_on_sclk->entries[VAR_21].clk;
    break;
   }
  }

  if (VAR_21 < 0)
   VAR_23 = VAR_20->vdd_dep_on_sclk->entries[0].clk;

  VAR_24 = VAR_17->mclk;

  VAR_12.engineClock = VAR_23;
  VAR_12.memoryClock = VAR_24;
 }

 VAR_14 =
  FUNC_1(VAR_1);
 VAR_15 =
  FUNC_1(VAR_0);
 VAR_16 = FUNC_1(VAR_2);

 if (VAR_5->display_config->num_display == 0)
  VAR_13 = 0;
 else
  VAR_13 = ((1 < VAR_5->display_config->num_display) &&
       !VAR_5->display_config->multi_monitor_in_sync) ||
   VAR_14 ||
   VAR_15 ||
   VAR_16;

 VAR_10 = VAR_9->performance_levels[0].gfx_clock;
 VAR_11 = VAR_9->performance_levels[0].mem_clock;

 if (VAR_10 < VAR_12.engineClock)
  VAR_10 = (VAR_12.engineClock > VAR_17->sclk) ?
    VAR_17->sclk : VAR_12.engineClock;

 if (VAR_11 < VAR_12.memoryClock)
  VAR_11 = (VAR_12.memoryClock > VAR_17->mclk) ?
    VAR_17->mclk : VAR_12.memoryClock;

 VAR_9->performance_levels[0].gfx_clock = VAR_10;
 VAR_9->performance_levels[0].mem_clock = VAR_11;

 if (VAR_9->performance_levels[1].gfx_clock <
   VAR_9->performance_levels[0].gfx_clock)
  VAR_9->performance_levels[0].gfx_clock =
    VAR_9->performance_levels[1].gfx_clock;

 if (VAR_13) {

  if (VAR_11 < VAR_9->performance_levels[1].mem_clock)
   VAR_11 = VAR_9->performance_levels[1].mem_clock;




  VAR_25 = VAR_5->display_config->dce_tolerable_mclk_in_active_latency;
  for (VAR_18 = 0; VAR_18 < VAR_19->mclk_latency_table.count; VAR_18++) {
   if ((VAR_19->mclk_latency_table.entries[VAR_18].latency <= VAR_25) &&
    (VAR_19->mclk_latency_table.entries[VAR_18].frequency >=
      VAR_9->performance_levels[0].mem_clock) &&
    (VAR_19->mclk_latency_table.entries[VAR_18].frequency <=
      VAR_9->performance_levels[1].mem_clock))
    VAR_11 = VAR_19->mclk_latency_table.entries[VAR_18].frequency;
  }
  VAR_9->performance_levels[0].mem_clock = VAR_11;
 } else {
  if (VAR_9->performance_levels[1].mem_clock <
    VAR_9->performance_levels[0].mem_clock)
   VAR_9->performance_levels[0].mem_clock =
     VAR_9->performance_levels[1].mem_clock;
 }

 if (FUNC_1(VAR_3)) {
  for (VAR_18 = 0; VAR_18 < VAR_9->performance_level_count; VAR_18++) {
   VAR_9->performance_levels[VAR_18].gfx_clock = VAR_23;
   VAR_9->performance_levels[VAR_18].mem_clock = VAR_24;
  }
 }

 return 0;
}
