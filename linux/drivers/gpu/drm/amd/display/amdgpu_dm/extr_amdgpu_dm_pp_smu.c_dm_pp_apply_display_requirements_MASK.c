
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct smu_context {int dummy; } ;
struct dm_pp_single_disp_config {scalar_t__ pipe_idx; int v_refresh; } ;
struct dm_pp_display_configuration {int display_count; int min_engine_clock_khz; int min_engine_clock_deep_sleep_khz; int min_memory_clock_khz; int min_dcfclock_khz; int disp_clk_khz; struct dm_pp_single_disp_config* disp_configs; int line_time_in_us; int crtc_index; int avail_mclk_switch_time_in_disp_active_us; int avail_mclk_switch_time_us; int all_displays_in_sync; int nb_pstate_switch_disable; int cpu_pstate_separation_time; int cpu_pstate_disable; int cpu_cc6_disable; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_12__ {int num_display; int num_path_including_non_display; int min_core_set_clock; int min_core_set_clock_in_sr; int min_mem_set_clock; int min_dcef_deep_sleep_set_clk; int min_dcef_set_clk; int display_clk; int crossfire_display_index; TYPE_1__* displays; scalar_t__ min_bus_bandwidth; int vrefresh; int line_time_in_us; int crtc_index; int dce_tolerable_mclk_in_active_latency; int min_vblank_time; int multi_monitor_in_sync; int nb_pstate_switch_disable; int cpu_pstate_separation_time; int cpu_pstate_disable; int cpu_cc6_disable; } ;
struct TYPE_11__ {TYPE_5__ pm_display_cfg; scalar_t__ dpm_enabled; } ;
struct TYPE_10__ {int pp_handle; TYPE_2__* pp_funcs; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_3__ powerplay; struct smu_context smu; } ;
struct TYPE_9__ {int (* display_configuration_change ) (int ,TYPE_5__*) ;} ;
struct TYPE_8__ {scalar_t__ controller_id; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (struct smu_context*,TYPE_5__*) ;
 int FUNC_3 (int ,TYPE_5__*) ;

bool FUNC_4(
  const struct dc_context *VAR_0,
  const struct dm_pp_display_configuration *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0->driver_context;
 struct smu_context *VAR_3 = &VAR_2->smu;
 int VAR_4;

 if (VAR_2->pm.dpm_enabled) {

  FUNC_1(&VAR_2->pm.pm_display_cfg, 0,
    sizeof(VAR_2->pm.pm_display_cfg));

  VAR_2->pm.pm_display_cfg.cpu_cc6_disable =
   VAR_1->cpu_cc6_disable;

  VAR_2->pm.pm_display_cfg.cpu_pstate_disable =
   VAR_1->cpu_pstate_disable;

  VAR_2->pm.pm_display_cfg.cpu_pstate_separation_time =
   VAR_1->cpu_pstate_separation_time;

  VAR_2->pm.pm_display_cfg.nb_pstate_switch_disable =
   VAR_1->nb_pstate_switch_disable;

  VAR_2->pm.pm_display_cfg.num_display =
    VAR_1->display_count;
  VAR_2->pm.pm_display_cfg.num_path_including_non_display =
    VAR_1->display_count;

  VAR_2->pm.pm_display_cfg.min_core_set_clock =
    VAR_1->min_engine_clock_khz/10;
  VAR_2->pm.pm_display_cfg.min_core_set_clock_in_sr =
    VAR_1->min_engine_clock_deep_sleep_khz/10;
  VAR_2->pm.pm_display_cfg.min_mem_set_clock =
    VAR_1->min_memory_clock_khz/10;

  VAR_2->pm.pm_display_cfg.min_dcef_deep_sleep_set_clk =
    VAR_1->min_engine_clock_deep_sleep_khz/10;
  VAR_2->pm.pm_display_cfg.min_dcef_set_clk =
    VAR_1->min_dcfclock_khz/10;

  VAR_2->pm.pm_display_cfg.multi_monitor_in_sync =
    VAR_1->all_displays_in_sync;
  VAR_2->pm.pm_display_cfg.min_vblank_time =
    VAR_1->avail_mclk_switch_time_us;

  VAR_2->pm.pm_display_cfg.display_clk =
    VAR_1->disp_clk_khz/10;

  VAR_2->pm.pm_display_cfg.dce_tolerable_mclk_in_active_latency =
    VAR_1->avail_mclk_switch_time_in_disp_active_us;

  VAR_2->pm.pm_display_cfg.crtc_index = VAR_1->crtc_index;
  VAR_2->pm.pm_display_cfg.line_time_in_us =
    VAR_1->line_time_in_us;

  VAR_2->pm.pm_display_cfg.vrefresh = VAR_1->disp_configs[0].v_refresh;
  VAR_2->pm.pm_display_cfg.crossfire_display_index = -1;
  VAR_2->pm.pm_display_cfg.min_bus_bandwidth = 0;

  for (VAR_4 = 0; VAR_4 < VAR_1->display_count; VAR_4++) {
   const struct dm_pp_single_disp_config *VAR_5 =
      &VAR_1->disp_configs[VAR_4];
   VAR_2->pm.pm_display_cfg.displays[VAR_4].controller_id = VAR_5->pipe_idx + 1;
  }

  if (VAR_2->powerplay.pp_funcs && VAR_2->powerplay.pp_funcs->display_configuration_change)
   VAR_2->powerplay.pp_funcs->display_configuration_change(
    VAR_2->powerplay.pp_handle,
    &VAR_2->pm.pm_display_cfg);
  else
   FUNC_2(VAR_3,
        &VAR_2->pm.pm_display_cfg);

  FUNC_0(VAR_2);
 }

 return 1;
}
