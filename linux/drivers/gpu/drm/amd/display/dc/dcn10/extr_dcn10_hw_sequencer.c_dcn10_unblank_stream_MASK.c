
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


struct TYPE_14__ {TYPE_9__* stream_enc; } ;
struct pipe_ctx {TYPE_5__ stream_res; struct dc_stream_state* stream; } ;
struct TYPE_12__ {scalar_t__ pixel_encoding; int pix_clk_100hz; } ;
struct TYPE_11__ {int link_rate; } ;
struct TYPE_10__ {int member_0; } ;
struct encoder_unblank_param {TYPE_3__ timing; TYPE_2__ link_settings; TYPE_1__ member_0; } ;
struct dc_stream_state {int signal; TYPE_3__ timing; struct dc_link* link; } ;
struct dc_link_settings {int link_rate; } ;
struct dc_link {TYPE_8__* dc; TYPE_6__* local_sink; } ;
struct TYPE_18__ {TYPE_4__* funcs; } ;
struct TYPE_16__ {int (* edp_backlight_control ) (struct dc_link*,int) ;} ;
struct TYPE_17__ {TYPE_7__ hwss; } ;
struct TYPE_15__ {scalar_t__ sink_signal; } ;
struct TYPE_13__ {int (* dp_unblank ) (TYPE_9__*,struct encoder_unblank_param*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__*,struct encoder_unblank_param*) ;
 int FUNC_2 (struct dc_link*,int) ;

__attribute__((used)) static void FUNC_3(struct pipe_ctx *VAR_2,
  struct dc_link_settings *VAR_3)
{
 struct encoder_unblank_param VAR_4 = { { 0 } };
 struct dc_stream_state *VAR_5 = VAR_2->stream;
 struct dc_link *VAR_6 = VAR_5->link;


 VAR_4.timing = VAR_2->stream->timing;

 VAR_4.link_settings.link_rate = VAR_3->link_rate;

 if (FUNC_0(VAR_2->stream->signal)) {
  if (VAR_4.timing.pixel_encoding == VAR_0)
   VAR_4.timing.pix_clk_100hz /= 2;
  VAR_2->stream_res.stream_enc->funcs->dp_unblank(VAR_2->stream_res.stream_enc, &VAR_4);
 }

 if (VAR_6->local_sink && VAR_6->local_sink->sink_signal == VAR_1) {
  VAR_6->dc->hwss.edp_backlight_control(VAR_6, 1);
 }
}
