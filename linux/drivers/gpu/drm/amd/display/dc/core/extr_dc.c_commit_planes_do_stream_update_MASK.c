
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_28__ {TYPE_13__* abm; TYPE_15__* tg; TYPE_10__* audio; TYPE_11__* opp; } ;
struct pipe_ctx {TYPE_9__ stream_res; struct pipe_ctx* next_odm_pipe; struct dc_stream_state* stream; int prev_odm_pipe; int top_pipe; } ;
struct dc_stream_update {scalar_t__ abm_level; scalar_t__* dpms_off; scalar_t__ dsc_config; scalar_t__ dither_option; scalar_t__ output_csc_transform; scalar_t__ gamut_remap; scalar_t__ vsp_infopacket; scalar_t__ vsc_infopacket; scalar_t__ vrr_infopacket; scalar_t__ hdr_static_metadata; scalar_t__ periodic_interrupt1; scalar_t__ periodic_interrupt0; } ;
struct dc_stream_state {int abm_level; int clamping; int bit_depth_params; int use_dynamic_meta; } ;
struct TYPE_21__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_2__ res_ctx; } ;
struct TYPE_25__ {int (* pipe_control_lock ) (struct dc*,struct pipe_ctx*,int) ;int (* prepare_bandwidth ) (struct dc*,int ) ;int (* optimize_bandwidth ) (struct dc*,int ) ;int (* pipe_control_lock_global ) (struct dc*,struct pipe_ctx*,int) ;int (* update_info_frame ) (struct pipe_ctx*) ;int (* setup_periodic_interrupt ) (struct pipe_ctx*,int ) ;} ;
struct TYPE_23__ {int az_endpoint_mute_only; } ;
struct dc {TYPE_6__ hwss; int current_state; int optimize_seamless_boot; TYPE_4__ debug; TYPE_1__* res_pool; } ;
typedef enum surface_update_type { ____Placeholder_surface_update_type } surface_update_type ;
struct TYPE_27__ {int (* set_abm_level ) (TYPE_13__*,int ) ;} ;
struct TYPE_26__ {int (* is_blanked ) (TYPE_15__*) ;} ;
struct TYPE_24__ {int (* az_disable ) (TYPE_10__*) ;} ;
struct TYPE_22__ {int (* opp_program_fmt ) (TYPE_11__*,int *,int *) ;} ;
struct TYPE_20__ {int pipe_count; } ;
struct TYPE_19__ {TYPE_7__* funcs; } ;
struct TYPE_18__ {TYPE_8__* funcs; } ;
struct TYPE_17__ {TYPE_3__* funcs; } ;
struct TYPE_16__ {TYPE_5__* funcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pipe_ctx*) ;
 int FUNC_1 (int ,struct pipe_ctx*) ;
 int FUNC_2 (struct dc*,struct dc_stream_state*) ;
 int FUNC_3 (struct dc*,struct dc_stream_state*) ;
 int FUNC_4 (struct pipe_ctx*) ;
 int FUNC_5 (struct dc_stream_state*,int *) ;
 int FUNC_6 (struct pipe_ctx*) ;
 int FUNC_7 (struct pipe_ctx*,int ) ;
 int FUNC_8 (struct dc*,int ) ;
 int FUNC_9 (struct dc*,int ) ;
 int FUNC_10 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_11 (TYPE_15__*) ;
 int FUNC_12 (TYPE_13__*,int ) ;
 int FUNC_13 (TYPE_13__*,int ) ;
 int FUNC_14 (struct pipe_ctx*,int ) ;
 int FUNC_15 (struct pipe_ctx*) ;
 int FUNC_16 (TYPE_11__*,int *,int *) ;
 int FUNC_17 (TYPE_11__*,int *,int *) ;
 int FUNC_18 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_19 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_20 (struct dc*,struct pipe_ctx*,int) ;
 int FUNC_21 (TYPE_10__*) ;

__attribute__((used)) static void FUNC_22(struct dc *VAR_3,
  struct dc_stream_state *VAR_4,
  struct dc_stream_update *VAR_5,
  enum surface_update_type VAR_6,
  struct dc_state *VAR_7)
{
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_3->res_pool->pipe_count; VAR_8++) {
  struct pipe_ctx *VAR_9 = &VAR_7->res_ctx.pipe_ctx[VAR_8];

  if (!VAR_9->top_pipe && !VAR_9->prev_odm_pipe && VAR_9->stream == VAR_4) {

   if (VAR_5->periodic_interrupt0 &&
     VAR_3->hwss.setup_periodic_interrupt)
    VAR_3->hwss.setup_periodic_interrupt(VAR_9, VAR_1);

   if (VAR_5->periodic_interrupt1 &&
     VAR_3->hwss.setup_periodic_interrupt)
    VAR_3->hwss.setup_periodic_interrupt(VAR_9, VAR_2);

   if ((VAR_5->hdr_static_metadata && !VAR_4->use_dynamic_meta) ||
     VAR_5->vrr_infopacket ||
     VAR_5->vsc_infopacket ||
     VAR_5->vsp_infopacket) {
    FUNC_6(VAR_9);
    VAR_3->hwss.update_info_frame(VAR_9);
   }

   if (VAR_5->gamut_remap)
    FUNC_3(VAR_3, VAR_4);

   if (VAR_5->output_csc_transform)
    FUNC_2(VAR_3, VAR_4);

   if (VAR_5->dither_option) {



    FUNC_5(VAR_9->stream,
         &VAR_9->stream->bit_depth_params);
    VAR_9->stream_res.opp->funcs->opp_program_fmt(VAR_9->stream_res.opp,
      &VAR_4->bit_depth_params,
      &VAR_4->clamping);
   }
   if (VAR_6 == VAR_0)
    continue;

   if (VAR_5->dpms_off) {
    VAR_3->hwss.pipe_control_lock(VAR_3, VAR_9, 1);

    if (*VAR_5->dpms_off) {
     FUNC_0(VAR_9);

     if (VAR_9->stream_res.audio && !VAR_3->debug.az_endpoint_mute_only)
      VAR_9->stream_res.audio->funcs->az_disable(VAR_9->stream_res.audio);

     VAR_3->hwss.optimize_bandwidth(VAR_3, VAR_3->current_state);
    } else {
     if (!VAR_3->optimize_seamless_boot)
      VAR_3->hwss.prepare_bandwidth(VAR_3, VAR_3->current_state);

     FUNC_1(VAR_3->current_state, VAR_9);
    }

    VAR_3->hwss.pipe_control_lock(VAR_3, VAR_9, 0);
   }

   if (VAR_5->abm_level && VAR_9->stream_res.abm) {
    if (VAR_9->stream_res.tg->funcs->is_blanked) {

     if (!VAR_9->stream_res.tg->funcs->is_blanked(VAR_9->stream_res.tg))
      VAR_9->stream_res.abm->funcs->set_abm_level(
       VAR_9->stream_res.abm, VAR_4->abm_level);
    } else
     VAR_9->stream_res.abm->funcs->set_abm_level(
      VAR_9->stream_res.abm, VAR_4->abm_level);
   }
  }
 }
}
