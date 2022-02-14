
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_24__ ;
typedef struct TYPE_37__ TYPE_21__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_19__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_29__ {int xtalin_clock_inKhz; int dchub_ref_clock_inKhz; int dccg_ref_clock_inKhz; } ;
struct resource_pool {int audio_count; struct audio** audios; TYPE_1__** dscs; TYPE_17__* res_cap; TYPE_14__ ref_clocks; TYPE_20__* hubbub; TYPE_21__* dccg; struct dmcu* dmcu; struct abm* abm; } ;
struct dmcu {TYPE_5__* funcs; } ;
struct dce_hwseq {int dummy; } ;
struct TYPE_31__ {int link_active; } ;
struct dc_link {TYPE_16__ link_status; TYPE_19__* link_enc; } ;
struct TYPE_25__ {int crystal_frequency; } ;
struct TYPE_26__ {TYPE_10__ pll_info; } ;
struct dc_bios {TYPE_8__* funcs; TYPE_11__ fw_info; scalar_t__ fw_info_valid; } ;
struct TYPE_33__ {int (* enable_power_gating_plane ) (struct dce_hwseq*,int) ;int (* init_pipes ) (struct dc*,int ) ;int (* dsc_pg_control ) (struct dce_hwseq*,int ,int) ;int (* bios_golden_init ) (struct dc*) ;int (* disable_vga ) (struct dce_hwseq*) ;} ;
struct TYPE_44__ {int disable_clock_gate; } ;
struct TYPE_39__ {scalar_t__ power_down_display_on_boot; } ;
struct dc {int link_count; struct dce_hwseq* hwseq; TYPE_18__ hwss; TYPE_7__ debug; int current_state; TYPE_2__ config; struct dc_link** links; TYPE_12__* ctx; struct resource_pool* res_pool; TYPE_24__* clk_mgr; } ;
struct audio {TYPE_3__* funcs; } ;
struct abm {int dmcu_is_running; TYPE_4__* funcs; } ;
struct TYPE_46__ {int (* get_dccg_ref_freq ) (TYPE_21__*,int ,int *) ;int (* dccg_init ) (TYPE_21__*) ;} ;
struct TYPE_45__ {scalar_t__ (* is_accelerated_mode ) (struct dc_bios*) ;} ;
struct TYPE_43__ {int (* init_clocks ) (TYPE_24__*) ;} ;
struct TYPE_42__ {int (* is_dmcu_initialized ) (struct dmcu*) ;int (* dmcu_init ) (struct dmcu*) ;} ;
struct TYPE_41__ {int (* abm_init ) (struct abm*) ;int (* init_backlight ) (struct abm*) ;} ;
struct TYPE_40__ {int (* hw_init ) (struct audio*) ;} ;
struct TYPE_38__ {TYPE_6__* funcs; } ;
struct TYPE_37__ {TYPE_9__* funcs; } ;
struct TYPE_36__ {TYPE_13__* funcs; } ;
struct TYPE_35__ {int inst; } ;
struct TYPE_34__ {TYPE_15__* funcs; } ;
struct TYPE_32__ {int num_dsc; } ;
struct TYPE_30__ {scalar_t__ (* is_dig_enabled ) (TYPE_19__*) ;int (* hw_init ) (TYPE_19__*) ;} ;
struct TYPE_28__ {int (* get_dchub_ref_freq ) (TYPE_20__*,int ,int *) ;} ;
struct TYPE_27__ {struct dc_bios* dc_bios; int dce_environment; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_24__*) ;
 scalar_t__ FUNC_5 (TYPE_19__*) ;
 int FUNC_6 (struct dce_hwseq*,int ,int) ;
 scalar_t__ FUNC_7 (struct dc_bios*) ;
 int FUNC_8 (struct dc*,int ) ;
 int FUNC_9 (struct audio*) ;
 int FUNC_10 (struct abm*) ;
 int FUNC_11 (struct abm*) ;
 int FUNC_12 (struct dmcu*) ;
 int FUNC_13 (struct dmcu*) ;
 int FUNC_14 (struct dce_hwseq*,int) ;
 int FUNC_15 (TYPE_21__*) ;
 int FUNC_16 (struct dce_hwseq*,int) ;
 scalar_t__ FUNC_17 (struct dc_bios*) ;
 int FUNC_18 (struct dce_hwseq*) ;
 int FUNC_19 (struct dc*) ;
 int FUNC_20 (TYPE_21__*,int ,int *) ;
 int FUNC_21 (TYPE_20__*,int ,int *) ;
 int FUNC_22 (TYPE_19__*) ;

__attribute__((used)) static void FUNC_23(struct dc *VAR_8)
{
 int VAR_9;
 struct abm *VAR_10 = VAR_8->res_pool->abm;
 struct dmcu *VAR_11 = VAR_8->res_pool->dmcu;
 struct dce_hwseq *VAR_12 = VAR_8->hwseq;
 struct dc_bios *VAR_13 = VAR_8->ctx->dc_bios;
 struct resource_pool *VAR_14 = VAR_8->res_pool;

 if (VAR_8->clk_mgr && VAR_8->clk_mgr->funcs->init_clocks)
  VAR_8->clk_mgr->funcs->init_clocks(VAR_8->clk_mgr);


 if (VAR_8->res_pool->dccg && VAR_8->res_pool->dccg->funcs->dccg_init)
  VAR_8->res_pool->dccg->funcs->dccg_init(VAR_14->dccg);

 if (FUNC_1(VAR_8->ctx->dce_environment)) {

  FUNC_3(VAR_7, 0);
  FUNC_2(VAR_4, VAR_5, 1);
  FUNC_3(VAR_6, 0);

  if (!VAR_8->debug.disable_clock_gate) {

   FUNC_3(VAR_0, 0);

   FUNC_3(VAR_1, 0);

   FUNC_2(VAR_2, VAR_3, 0);
  }


  VAR_8->hwss.enable_power_gating_plane(VAR_12, 1);

  return;
 }

 if (!VAR_13->funcs->is_accelerated_mode(VAR_13))
  VAR_8->hwss.disable_vga(VAR_8->hwseq);

 VAR_8->hwss.bios_golden_init(VAR_8);
 if (VAR_8->ctx->dc_bios->fw_info_valid) {
  VAR_14->ref_clocks.xtalin_clock_inKhz =
    VAR_8->ctx->dc_bios->fw_info.pll_info.crystal_frequency;

  if (!FUNC_1(VAR_8->ctx->dce_environment)) {
   if (VAR_14->dccg && VAR_14->hubbub) {

    (VAR_14->dccg->funcs->get_dccg_ref_freq)(VAR_14->dccg,
      VAR_8->ctx->dc_bios->fw_info.pll_info.crystal_frequency,
      &VAR_14->ref_clocks.dccg_ref_clock_inKhz);

    (VAR_14->hubbub->funcs->get_dchub_ref_freq)(VAR_14->hubbub,
      VAR_14->ref_clocks.dccg_ref_clock_inKhz,
      &VAR_14->ref_clocks.dchub_ref_clock_inKhz);
   } else {

    VAR_14->ref_clocks.dccg_ref_clock_inKhz =
      VAR_14->ref_clocks.xtalin_clock_inKhz;
    VAR_14->ref_clocks.dchub_ref_clock_inKhz =
      VAR_14->ref_clocks.xtalin_clock_inKhz;
   }
  }
 } else
  FUNC_0(0);

 for (VAR_9 = 0; VAR_9 < VAR_8->link_count; VAR_9++) {




  struct dc_link *VAR_15 = VAR_8->links[VAR_9];

  VAR_15->link_enc->funcs->hw_init(VAR_15->link_enc);


  if (VAR_15->link_enc->funcs->is_dig_enabled &&
   VAR_15->link_enc->funcs->is_dig_enabled(VAR_15->link_enc))
   VAR_15->link_status.link_active = 1;
 }
 if (VAR_13->funcs->is_accelerated_mode(VAR_13) || VAR_8->config.power_down_display_on_boot) {
  VAR_8->hwss.init_pipes(VAR_8, VAR_8->current_state);
 }

 for (VAR_9 = 0; VAR_9 < VAR_14->audio_count; VAR_9++) {
  struct audio *VAR_16 = VAR_14->audios[VAR_9];

  VAR_16->funcs->hw_init(VAR_16);
 }

 if (VAR_10 != ((void*)0)) {
  VAR_10->funcs->init_backlight(VAR_10);
  VAR_10->funcs->abm_init(VAR_10);
 }

 if (VAR_11 != ((void*)0))
  VAR_11->funcs->dmcu_init(VAR_11);

 if (VAR_10 != ((void*)0) && VAR_11 != ((void*)0))
  VAR_10->dmcu_is_running = VAR_11->funcs->is_dmcu_initialized(VAR_11);


 FUNC_3(VAR_6, 0);

 if (!VAR_8->debug.disable_clock_gate) {

  FUNC_3(VAR_0, 0);

  FUNC_3(VAR_1, 0);

  FUNC_2(VAR_2, VAR_3, 0);
 }

 VAR_8->hwss.enable_power_gating_plane(VAR_8->hwseq, 1);
}
