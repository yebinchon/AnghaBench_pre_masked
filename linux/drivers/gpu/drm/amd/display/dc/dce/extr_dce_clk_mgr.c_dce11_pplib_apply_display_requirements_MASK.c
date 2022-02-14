
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct dm_pp_display_configuration {int nb_pstate_switch_disable; int cpu_cc6_disable; int cpu_pstate_disable; int min_memory_clock_khz; int display_count; int line_time_in_us; TYPE_8__* disp_configs; int crtc_index; int disp_clk_khz; scalar_t__ avail_mclk_switch_time_in_disp_active_us; int avail_mclk_switch_time_us; int min_engine_clock_deep_sleep_khz; int min_engine_clock_khz; int min_dcfclock_khz; int cpu_pstate_separation_time; int all_displays_in_sync; } ;
struct TYPE_10__ {int nbp_state_change_enable; int cpuc_state_change_enable; int cpup_state_change_enable; int yclk_khz; int sclk_deep_sleep_khz; int sclk_khz; int blackout_recovery_time_us; int all_displays_in_sync; } ;
struct TYPE_11__ {TYPE_1__ dce; } ;
struct TYPE_12__ {TYPE_2__ bw; } ;
struct dc_state {int stream_count; TYPE_7__** streams; TYPE_3__ bw_ctx; struct dm_pp_display_configuration pp_display_cfg; } ;
struct dc_crtc_timing {int h_total; int pix_clk_100hz; } ;
struct dc {int ctx; TYPE_9__* current_state; TYPE_6__* res_pool; } ;
struct TYPE_18__ {int pp_display_cfg; } ;
struct TYPE_17__ {int pipe_idx; } ;
struct TYPE_16__ {struct dc_crtc_timing timing; } ;
struct TYPE_15__ {TYPE_5__* clk_mgr; } ;
struct TYPE_13__ {int dispclk_khz; } ;
struct TYPE_14__ {TYPE_4__ clks; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_state*,struct dm_pp_display_configuration*) ;
 int FUNC_1 (struct dc_state*) ;
 int FUNC_2 (struct dc*,int ) ;
 int FUNC_3 (int ,struct dm_pp_display_configuration*) ;
 scalar_t__ FUNC_4 (int *,struct dm_pp_display_configuration*,int) ;

__attribute__((used)) static void FUNC_5(
 struct dc *VAR_1,
 struct dc_state *VAR_2)
{
 struct dm_pp_display_configuration *VAR_3 = &VAR_2->pp_display_cfg;

 VAR_3->all_displays_in_sync =
  VAR_2->bw_ctx.bw.dce.all_displays_in_sync;
 VAR_3->nb_pstate_switch_disable =
   VAR_2->bw_ctx.bw.dce.nbp_state_change_enable == 0;
 VAR_3->cpu_cc6_disable =
   VAR_2->bw_ctx.bw.dce.cpuc_state_change_enable == 0;
 VAR_3->cpu_pstate_disable =
   VAR_2->bw_ctx.bw.dce.cpup_state_change_enable == 0;
 VAR_3->cpu_pstate_separation_time =
   VAR_2->bw_ctx.bw.dce.blackout_recovery_time_us;

 VAR_3->min_memory_clock_khz = VAR_2->bw_ctx.bw.dce.yclk_khz
  / VAR_0;

 VAR_3->min_engine_clock_khz = FUNC_2(
   VAR_1,
   VAR_2->bw_ctx.bw.dce.sclk_khz);
 VAR_3->min_dcfclock_khz = (VAR_2->stream_count > 4)?
   VAR_3->min_engine_clock_khz : 0;

 VAR_3->min_engine_clock_deep_sleep_khz
   = VAR_2->bw_ctx.bw.dce.sclk_deep_sleep_khz;

 VAR_3->avail_mclk_switch_time_us =
      FUNC_1(VAR_2);

 VAR_3->avail_mclk_switch_time_in_disp_active_us = 0;

 VAR_3->disp_clk_khz = VAR_1->res_pool->clk_mgr->clks.dispclk_khz;

 FUNC_0(VAR_2, VAR_3);


 if (VAR_3->display_count == 1) {
  const struct dc_crtc_timing *VAR_4 =
   &VAR_2->streams[0]->timing;

  VAR_3->crtc_index =
   VAR_3->disp_configs[0].pipe_idx;
  VAR_3->line_time_in_us = VAR_4->h_total * 10000 / VAR_4->pix_clk_100hz;
 }

 if (FUNC_4(&VAR_1->current_state->pp_display_cfg, VAR_3, sizeof(*VAR_3)) != 0)
  FUNC_3(VAR_1->ctx, VAR_3);
}
