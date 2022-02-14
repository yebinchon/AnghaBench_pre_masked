
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_19__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_30__ {int alpha_en; } ;
struct TYPE_31__ {TYPE_1__ lb_params; } ;
struct TYPE_32__ {TYPE_2__ scl_data; } ;
struct TYPE_25__ {TYPE_19__* opp; TYPE_14__* tg; TYPE_13__* stream_enc; TYPE_16__* audio; } ;
struct pipe_ctx {scalar_t__ bottom_pipe; struct dc_stream_state* stream; TYPE_3__ plane_res; struct pipe_ctx* next_odm_pipe; TYPE_12__ stream_res; } ;
struct drr_params {scalar_t__ vertical_total_min; scalar_t__ vertical_total_max; int member_0; } ;
struct TYPE_23__ {int display_color_depth; } ;
struct TYPE_36__ {scalar_t__ v_total_min; scalar_t__ v_total_max; } ;
struct dc_stream_state {TYPE_4__* link; int dpms_off; int clamping; int bit_depth_params; int signal; TYPE_10__ timing; TYPE_7__ adjust; int apply_seamless_boot_optimization; int audio_info; } ;
struct dc_state {int dummy; } ;
struct TYPE_35__ {int (* setup_vupdate_interrupt ) (struct pipe_ctx*) ;int (* enable_stream_timing ) (struct pipe_ctx*,struct dc_state*,struct dc*) ;int (* disable_stream_gating ) (struct dc*,struct pipe_ctx*) ;} ;
struct dc {TYPE_6__ hwss; } ;
struct audio_output {int crtc_info; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_38__ {int (* dig_connect_to_otg ) (TYPE_13__*,int ) ;int (* hdmi_audio_setup ) (TYPE_13__*,int ,int *,int *) ;int (* dp_audio_setup ) (TYPE_13__*,int ,int *) ;} ;
struct TYPE_37__ {int (* set_static_screen_control ) (TYPE_14__*,unsigned int) ;int (* set_drr ) (TYPE_14__*,struct drr_params*) ;} ;
struct TYPE_34__ {int (* az_configure ) (TYPE_16__*,int ,int *,int *) ;} ;
struct TYPE_33__ {int psr_enabled; } ;
struct TYPE_29__ {TYPE_11__* funcs; } ;
struct TYPE_28__ {TYPE_5__* funcs; int inst; } ;
struct TYPE_27__ {int inst; TYPE_8__* funcs; } ;
struct TYPE_26__ {TYPE_9__* funcs; } ;
struct TYPE_24__ {int (* opp_program_fmt ) (TYPE_19__*,int *,int *) ;int (* opp_set_dyn_expansion ) (TYPE_19__*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_state*,struct pipe_ctx*,struct audio_output*) ;
 int FUNC_1 (struct dc_state*,struct pipe_ctx*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dc*,struct pipe_ctx*) ;
 int FUNC_5 (TYPE_19__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_19__*,int *,int *) ;
 int FUNC_7 (TYPE_19__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_19__*,int *,int *) ;
 int FUNC_9 (TYPE_13__*,int ,int *) ;
 int FUNC_10 (TYPE_13__*,int ,int *,int *) ;
 int FUNC_11 (TYPE_16__*,int ,int *,int *) ;
 int FUNC_12 (struct pipe_ctx*,struct dc_state*,struct dc*) ;
 int FUNC_13 (struct pipe_ctx*) ;
 int FUNC_14 (TYPE_14__*,struct drr_params*) ;
 int FUNC_15 (TYPE_14__*,unsigned int) ;
 int FUNC_16 (TYPE_13__*,int ) ;

__attribute__((used)) static enum dc_status FUNC_17(
  struct pipe_ctx *VAR_2,
  struct dc_state *VAR_3,
  struct dc *VAR_4)
{
 struct dc_stream_state *VAR_5 = VAR_2->stream;
 struct drr_params VAR_6 = {0};
 unsigned int VAR_7 = 0;




 if (VAR_4->hwss.disable_stream_gating) {
  VAR_4->hwss.disable_stream_gating(VAR_4, VAR_2);
 }

 if (VAR_2->stream_res.audio != ((void*)0)) {
  struct audio_output VAR_8;

  FUNC_0(VAR_3, VAR_2, &VAR_8);

  if (FUNC_2(VAR_2->stream->signal))
   VAR_2->stream_res.stream_enc->funcs->dp_audio_setup(
     VAR_2->stream_res.stream_enc,
     VAR_2->stream_res.audio->inst,
     &VAR_2->stream->audio_info);
  else
   VAR_2->stream_res.stream_enc->funcs->hdmi_audio_setup(
     VAR_2->stream_res.stream_enc,
     VAR_2->stream_res.audio->inst,
     &VAR_2->stream->audio_info,
     &VAR_8.crtc_info);

  VAR_2->stream_res.audio->funcs->az_configure(
    VAR_2->stream_res.audio,
    VAR_2->stream->signal,
    &VAR_8.crtc_info,
    &VAR_2->stream->audio_info);
 }



 if (!VAR_2->stream->apply_seamless_boot_optimization)
  VAR_4->hwss.enable_stream_timing(VAR_2, VAR_3, VAR_4);

 if (VAR_4->hwss.setup_vupdate_interrupt)
  VAR_4->hwss.setup_vupdate_interrupt(VAR_2);

 VAR_6.vertical_total_min = VAR_5->adjust.v_total_min;
 VAR_6.vertical_total_max = VAR_5->adjust.v_total_max;
 if (VAR_2->stream_res.tg->funcs->set_drr)
  VAR_2->stream_res.tg->funcs->set_drr(
   VAR_2->stream_res.tg, &VAR_6);


 if (VAR_5->adjust.v_total_min != 0 && VAR_5->adjust.v_total_max != 0)
  VAR_7 = 0x80;
 if (VAR_2->stream_res.tg->funcs->set_static_screen_control)
  VAR_2->stream_res.tg->funcs->set_static_screen_control(
    VAR_2->stream_res.tg, VAR_7);

 if (!FUNC_3(VAR_2->stream->signal))
  VAR_2->stream_res.stream_enc->funcs->dig_connect_to_otg(
   VAR_2->stream_res.stream_enc,
   VAR_2->stream_res.tg->inst);

 VAR_2->stream_res.opp->funcs->opp_set_dyn_expansion(
   VAR_2->stream_res.opp,
   VAR_0,
   VAR_5->timing.display_color_depth,
   VAR_5->signal);

 VAR_2->stream_res.opp->funcs->opp_program_fmt(
  VAR_2->stream_res.opp,
  &VAR_5->bit_depth_params,
  &VAR_5->clamping);
 if (!VAR_5->dpms_off)
  FUNC_1(VAR_3, VAR_2);

 VAR_2->plane_res.scl_data.lb_params.alpha_en = VAR_2->bottom_pipe != 0;

 VAR_2->stream->link->psr_enabled = 0;

 return VAR_1;
}
