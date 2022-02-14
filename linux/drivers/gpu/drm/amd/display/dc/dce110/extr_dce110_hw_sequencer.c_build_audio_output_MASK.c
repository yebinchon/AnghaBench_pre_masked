
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int ss_percentage; int feedback_divider; } ;
struct TYPE_18__ {int requested_pix_clk_100hz; scalar_t__ pixel_encoding; } ;
struct TYPE_21__ {TYPE_7__* tg; TYPE_5__ pix_clk_params; TYPE_1__* stream_enc; } ;
struct pipe_ctx {TYPE_10__ pll_settings; TYPE_8__ stream_res; struct dc_stream_state* stream; } ;
struct TYPE_15__ {int INTERLACE; } ;
struct TYPE_16__ {int h_total; int pix_clk_100hz; int v_total; int display_color_depth; TYPE_2__ flags; scalar_t__ v_border_bottom; scalar_t__ v_border_top; scalar_t__ v_addressable; scalar_t__ h_border_right; scalar_t__ h_border_left; scalar_t__ h_addressable; } ;
struct dc_stream_state {scalar_t__ signal; TYPE_3__ timing; } ;
struct dc_state {TYPE_11__* clk_mgr; } ;
struct TYPE_22__ {int ss_enabled; int ss_percentage; int dto_source; int feed_back_divider; int dp_dto_source_clock_in_khz; } ;
struct TYPE_17__ {int h_total; int pixel_repetition; int refresh_rate; int requested_pixel_clock_100Hz; int calculated_pixel_clock_100Hz; int color_depth; int interlaced; scalar_t__ v_active; scalar_t__ h_active; } ;
struct audio_output {scalar_t__ signal; TYPE_9__ pll_info; TYPE_4__ crtc_info; int engine_id; } ;
struct TYPE_20__ {scalar_t__ inst; } ;
struct TYPE_19__ {int (* get_dp_ref_clk_frequency ) (TYPE_11__*) ;} ;
struct TYPE_14__ {int id; } ;
struct TYPE_13__ {TYPE_6__* funcs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(
 struct dc_state *VAR_3,
 const struct pipe_ctx *VAR_4,
 struct audio_output *VAR_5)
{
 const struct dc_stream_state *VAR_6 = VAR_4->stream;
 VAR_5->engine_id = VAR_4->stream_res.stream_enc->id;

 VAR_5->signal = VAR_4->stream->signal;



 VAR_5->crtc_info.h_total =
  VAR_6->timing.h_total;





 VAR_5->crtc_info.h_active =
   VAR_6->timing.h_addressable
   + VAR_6->timing.h_border_left
   + VAR_6->timing.h_border_right;

 VAR_5->crtc_info.v_active =
   VAR_6->timing.v_addressable
   + VAR_6->timing.v_border_top
   + VAR_6->timing.v_border_bottom;

 VAR_5->crtc_info.pixel_repetition = 1;

 VAR_5->crtc_info.interlaced =
   VAR_6->timing.flags.INTERLACE;

 VAR_5->crtc_info.refresh_rate =
  (VAR_6->timing.pix_clk_100hz*100)/
  (VAR_6->timing.h_total*VAR_6->timing.v_total);

 VAR_5->crtc_info.color_depth =
  VAR_6->timing.display_color_depth;

 VAR_5->crtc_info.requested_pixel_clock_100Hz =
   VAR_4->stream_res.pix_clk_params.requested_pix_clk_100hz;

 VAR_5->crtc_info.calculated_pixel_clock_100Hz =
   VAR_4->stream_res.pix_clk_params.requested_pix_clk_100hz;


 if (FUNC_0(VAR_4->stream->signal) &&
  VAR_5->crtc_info.requested_pixel_clock_100Hz ==
    (VAR_6->timing.pix_clk_100hz)) {
  if (VAR_4->stream_res.pix_clk_params.pixel_encoding == VAR_0) {
   VAR_5->crtc_info.requested_pixel_clock_100Hz =
     VAR_5->crtc_info.requested_pixel_clock_100Hz/2;
   VAR_5->crtc_info.calculated_pixel_clock_100Hz =
     VAR_4->stream_res.pix_clk_params.requested_pix_clk_100hz/2;

  }
 }

 if (VAR_4->stream->signal == VAR_1 ||
   VAR_4->stream->signal == VAR_2) {
  VAR_5->pll_info.dp_dto_source_clock_in_khz =
    VAR_3->clk_mgr->funcs->get_dp_ref_clk_frequency(
      VAR_3->clk_mgr);
 }

 VAR_5->pll_info.feed_back_divider =
   VAR_4->pll_settings.feedback_divider;

 VAR_5->pll_info.dto_source =
  FUNC_2(
   VAR_4->stream_res.tg->inst + 1);


 VAR_5->pll_info.ss_enabled = 1;

 VAR_5->pll_info.ss_percentage =
   VAR_4->pll_settings.ss_percentage;
}
