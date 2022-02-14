
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint32_t ;
struct dm_pp_display_configuration {int nb_pstate_switch_disable; int cpu_cc6_disable; int cpu_pstate_disable; int min_memory_clock_khz; int display_count; int line_time_in_us; TYPE_10__* disp_configs; int crtc_index; int disp_clk_khz; scalar_t__ avail_mclk_switch_time_in_disp_active_us; int avail_mclk_switch_time_us; int min_engine_clock_deep_sleep_khz; int min_engine_clock_khz; int min_dcfclock_khz; int cpu_pstate_separation_time; int all_displays_in_sync; } ;
struct TYPE_19__ {int nbp_state_change_enable; int cpuc_state_change_enable; int cpup_state_change_enable; int yclk_khz; int sclk_deep_sleep_khz; int sclk_khz; int blackout_recovery_time_us; int all_displays_in_sync; } ;
struct TYPE_20__ {TYPE_4__ dce; } ;
struct TYPE_21__ {TYPE_5__ bw; } ;
struct dc_state {int stream_count; TYPE_9__** streams; TYPE_6__ bw_ctx; struct dm_pp_display_configuration pp_display_cfg; } ;
struct dc_crtc_timing {int h_total; int pix_clk_100hz; } ;
struct dc {TYPE_12__* ctx; TYPE_11__* current_state; TYPE_8__* clk_mgr; TYPE_3__* bw_vbios; } ;
struct TYPE_24__ {struct dc_crtc_timing timing; } ;
struct TYPE_22__ {int dispclk_khz; } ;
struct TYPE_23__ {TYPE_7__ clks; } ;
struct TYPE_17__ {scalar_t__ value; } ;
struct TYPE_18__ {scalar_t__ memory_type; TYPE_2__ high_yclk; } ;
struct TYPE_16__ {int hw_internal_rev; } ;
struct TYPE_15__ {TYPE_1__ asic_id; } ;
struct TYPE_14__ {int pp_display_cfg; } ;
struct TYPE_13__ {int pipe_idx; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct dc_state*,struct dm_pp_display_configuration*) ;
 int FUNC_2 (struct dc_state*) ;
 int FUNC_3 (struct dc*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (TYPE_12__*,struct dm_pp_display_configuration*) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int *,struct dm_pp_display_configuration*,int) ;

void FUNC_8(
 struct dc *VAR_3,
 struct dc_state *VAR_4)
{
 struct dm_pp_display_configuration *VAR_5 = &VAR_4->pp_display_cfg;
 int VAR_6 = VAR_1;

 if (VAR_3->bw_vbios && VAR_3->bw_vbios->memory_type == VAR_2)
  VAR_6 = VAR_0;

 VAR_5->all_displays_in_sync =
  VAR_4->bw_ctx.bw.dce.all_displays_in_sync;
 VAR_5->nb_pstate_switch_disable =
   VAR_4->bw_ctx.bw.dce.nbp_state_change_enable == 0;
 VAR_5->cpu_cc6_disable =
   VAR_4->bw_ctx.bw.dce.cpuc_state_change_enable == 0;
 VAR_5->cpu_pstate_disable =
   VAR_4->bw_ctx.bw.dce.cpup_state_change_enable == 0;
 VAR_5->cpu_pstate_separation_time =
   VAR_4->bw_ctx.bw.dce.blackout_recovery_time_us;






 if (FUNC_0(VAR_3->ctx->asic_id.hw_internal_rev) && (VAR_4->stream_count >= 2)) {
  VAR_5->min_memory_clock_khz = FUNC_6(VAR_5->min_memory_clock_khz,
          (uint32_t) FUNC_4(
           FUNC_4(VAR_3->bw_vbios->high_yclk.value,
              VAR_6), 10000));
 } else {
  VAR_5->min_memory_clock_khz = VAR_4->bw_ctx.bw.dce.yclk_khz
   / VAR_6;
 }

 VAR_5->min_engine_clock_khz = FUNC_3(
   VAR_3,
   VAR_4->bw_ctx.bw.dce.sclk_khz);
 VAR_5->min_dcfclock_khz = (VAR_4->stream_count > 4) ?
   VAR_5->min_engine_clock_khz : 0;

 VAR_5->min_engine_clock_deep_sleep_khz
   = VAR_4->bw_ctx.bw.dce.sclk_deep_sleep_khz;

 VAR_5->avail_mclk_switch_time_us =
      FUNC_2(VAR_4);

 VAR_5->avail_mclk_switch_time_in_disp_active_us = 0;

 VAR_5->disp_clk_khz = VAR_3->clk_mgr->clks.dispclk_khz;

 FUNC_1(VAR_4, VAR_5);


 if (VAR_5->display_count == 1) {
  const struct dc_crtc_timing *VAR_7 =
   &VAR_4->streams[0]->timing;

  VAR_5->crtc_index =
   VAR_5->disp_configs[0].pipe_idx;
  VAR_5->line_time_in_us = VAR_7->h_total * 10000 / VAR_7->pix_clk_100hz;
 }

 if (FUNC_7(&VAR_3->current_state->pp_display_cfg, VAR_5, sizeof(*VAR_5)) != 0)
  FUNC_5(VAR_3->ctx, VAR_5);
}
