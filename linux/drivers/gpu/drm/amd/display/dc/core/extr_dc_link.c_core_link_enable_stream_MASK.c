
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_23__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_26__ {TYPE_13__* tg; TYPE_14__* stream_enc; int * audio; } ;
struct pipe_ctx {struct dc_stream_state* stream; TYPE_12__ stream_res; } ;
struct TYPE_30__ {scalar_t__ DSC; } ;
struct TYPE_29__ {scalar_t__ timing_3d_format; TYPE_1__ flags; } ;
struct dc_stream_state {scalar_t__ signal; int apply_edp_fast_boot_optimization; int dpms_off; TYPE_9__* link; TYPE_15__ timing; scalar_t__ apply_seamless_boot_optimization; int phy_pix_clk; int output_color_space; TYPE_2__* ctx; } ;
struct dc_state {int dummy; } ;
struct TYPE_24__ {int (* unblank_stream ) (struct pipe_ctx*,int *) ;int (* enable_stream ) (struct pipe_ctx*) ;int (* enable_audio_stream ) (struct pipe_ctx*) ;int (* update_info_frame ) (struct pipe_ctx*) ;} ;
struct dc {TYPE_10__ hwss; TYPE_8__* ctx; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_34__ {int SST_SPLIT_SDP_CAP; } ;
struct TYPE_35__ {TYPE_4__ bits; } ;
struct TYPE_36__ {TYPE_5__ dprx_feature; } ;
struct TYPE_39__ {int link_state_valid; int cur_link_settings; int link_index; TYPE_6__ dpcd_caps; TYPE_23__* link_enc; } ;
struct TYPE_38__ {int dce_environment; } ;
struct TYPE_37__ {int (* lvds_set_stream_attribute ) (TYPE_14__*,TYPE_15__*) ;int (* dvi_set_stream_attribute ) (TYPE_14__*,TYPE_15__*,int) ;int (* hdmi_set_stream_attribute ) (TYPE_14__*,TYPE_15__*,int ,int ) ;int (* dp_set_stream_attribute ) (TYPE_14__*,TYPE_15__*,int ,int ) ;int (* setup_stereo_sync ) (TYPE_14__*,int ,int) ;} ;
struct TYPE_33__ {int (* setup ) (TYPE_23__*,scalar_t__) ;} ;
struct TYPE_32__ {int logger; struct dc* dc; } ;
struct TYPE_31__ {TYPE_3__* funcs; } ;
struct TYPE_28__ {TYPE_7__* funcs; } ;
struct TYPE_27__ {TYPE_11__* funcs; int inst; } ;
struct TYPE_25__ {int (* set_test_pattern ) (TYPE_13__*,int ,int ) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct pipe_ctx*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct pipe_ctx*,int) ;
 int FUNC_11 (struct pipe_ctx*,int) ;
 int FUNC_12 (struct dc_state*,struct pipe_ctx*) ;
 int FUNC_13 (struct pipe_ctx*) ;
 int FUNC_14 (struct pipe_ctx*) ;
 int FUNC_15 (TYPE_23__*,scalar_t__) ;
 int FUNC_16 (struct pipe_ctx*) ;
 int FUNC_17 (struct pipe_ctx*,int *) ;
 int FUNC_18 (TYPE_14__*,int ,int) ;
 int FUNC_19 (TYPE_14__*,TYPE_15__*,int ,int ) ;
 int FUNC_20 (TYPE_14__*,TYPE_15__*,int ,int ) ;
 int FUNC_21 (TYPE_14__*,TYPE_15__*,int) ;
 int FUNC_22 (TYPE_14__*,TYPE_15__*) ;
 int FUNC_23 (struct pipe_ctx*) ;
 int FUNC_24 (struct pipe_ctx*) ;
 int FUNC_25 (TYPE_13__*,int ,int ) ;

void FUNC_26(
  struct dc_state *VAR_8,
  struct pipe_ctx *VAR_9)
{
 struct dc *VAR_10 = VAR_9->stream->ctx->dc;
 struct dc_stream_state *VAR_11 = VAR_9->stream;
 enum dc_status VAR_12;
 FUNC_1(VAR_9->stream->ctx->logger);

 if (!FUNC_9(VAR_9->stream->signal)) {
  VAR_11->link->link_enc->funcs->setup(
   VAR_11->link->link_enc,
   VAR_9->stream->signal);
  VAR_9->stream_res.stream_enc->funcs->setup_stereo_sync(
   VAR_9->stream_res.stream_enc,
   VAR_9->stream_res.tg->inst,
   VAR_11->timing.timing_3d_format != VAR_7);
 }

 if (FUNC_5(VAR_9->stream->signal))
  VAR_9->stream_res.stream_enc->funcs->dp_set_stream_attribute(
   VAR_9->stream_res.stream_enc,
   &VAR_11->timing,
   VAR_11->output_color_space,
   VAR_11->link->dpcd_caps.dprx_feature.bits.SST_SPLIT_SDP_CAP);

 if (FUNC_7(VAR_9->stream->signal))
  VAR_9->stream_res.stream_enc->funcs->hdmi_set_stream_attribute(
   VAR_9->stream_res.stream_enc,
   &VAR_11->timing,
   VAR_11->phy_pix_clk,
   VAR_9->stream_res.audio != ((void*)0));

 VAR_9->stream->link->link_state_valid = 1;

 if (FUNC_6(VAR_9->stream->signal))
  VAR_9->stream_res.stream_enc->funcs->dvi_set_stream_attribute(
   VAR_9->stream_res.stream_enc,
   &VAR_11->timing,
   (VAR_9->stream->signal == VAR_5) ?
   1 : 0);

 if (FUNC_8(VAR_9->stream->signal))
  VAR_9->stream_res.stream_enc->funcs->lvds_set_stream_attribute(
   VAR_9->stream_res.stream_enc,
   &VAR_11->timing);

 if (!FUNC_3(VAR_10->ctx->dce_environment)) {
  bool VAR_13 =
   VAR_9->stream->apply_edp_fast_boot_optimization;

  VAR_9->stream->apply_edp_fast_boot_optimization = 0;

  FUNC_14(VAR_9);
  VAR_10->hwss.update_info_frame(VAR_9);


  if (VAR_9->stream->apply_seamless_boot_optimization) {
   VAR_9->stream->dpms_off = 0;
   return;
  }


  if (VAR_9->stream->signal == VAR_6 &&
     VAR_13) {
   VAR_9->stream->dpms_off = 0;
   return;
  }

  if (VAR_9->stream->dpms_off)
   return;

  VAR_12 = FUNC_12(VAR_8, VAR_9);

  if (VAR_12 != VAR_3) {
   FUNC_2("enabling link %u failed: %d\n",
   VAR_9->stream->link->link_index,
   VAR_12);






   if (VAR_12 != VAR_2 ||
     VAR_9->stream->signal == VAR_4) {
    FUNC_0();
    return;
   }
  }

  VAR_10->hwss.enable_audio_stream(VAR_9);


  if (VAR_9->stream_res.tg->funcs->set_test_pattern)
   VAR_9->stream_res.tg->funcs->set_test_pattern(VAR_9->stream_res.tg,
     VAR_1,
     VAR_0);
  VAR_10->hwss.enable_stream(VAR_9);
  if (VAR_9->stream->signal == VAR_4)
   FUNC_4(VAR_9);

  VAR_10->hwss.unblank_stream(VAR_9,
   &VAR_9->stream->link->cur_link_settings);

  if (FUNC_5(VAR_9->stream->signal))
   FUNC_13(VAR_9);
 }
}
