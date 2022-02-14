
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {TYPE_8__* stream_enc; } ;
struct pipe_ctx {TYPE_4__ stream_res; struct dc_stream_state* stream; struct pipe_ctx* next_odm_pipe; } ;
struct TYPE_11__ {int pix_clk_100hz; } ;
struct TYPE_13__ {int link_rate; } ;
struct TYPE_12__ {int member_0; } ;
struct encoder_unblank_param {int opp_cnt; TYPE_10__ timing; TYPE_2__ link_settings; TYPE_1__ member_0; } ;
struct dc_stream_state {TYPE_10__ timing; int signal; struct dc_link* link; } ;
struct dc_link_settings {int link_rate; } ;
struct dc_link {TYPE_7__* dc; TYPE_5__* local_sink; } ;
struct TYPE_19__ {TYPE_3__* funcs; } ;
struct TYPE_17__ {int (* edp_backlight_control ) (struct dc_link*,int) ;} ;
struct TYPE_18__ {TYPE_6__ hwss; } ;
struct TYPE_16__ {scalar_t__ sink_signal; } ;
struct TYPE_14__ {int (* dp_unblank ) (TYPE_8__*,struct encoder_unblank_param*) ;int (* dp_set_odm_combine ) (TYPE_8__*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_8__*,int) ;
 int FUNC_3 (TYPE_8__*,struct encoder_unblank_param*) ;
 int FUNC_4 (struct dc_link*,int) ;

void FUNC_5(struct pipe_ctx *VAR_1,
  struct dc_link_settings *VAR_2)
{
 struct encoder_unblank_param VAR_3 = { 0 };
 struct dc_stream_state *VAR_4 = VAR_1->stream;
 struct dc_link *VAR_5 = VAR_4->link;
 struct pipe_ctx *VAR_6;

 VAR_3.opp_cnt = 1;
 for (VAR_6 = VAR_1->next_odm_pipe; VAR_6; VAR_6 = VAR_6->next_odm_pipe) {
  VAR_3.opp_cnt++;
 }

 VAR_3.timing = VAR_1->stream->timing;

 VAR_3.link_settings.link_rate = VAR_2->link_rate;

 if (FUNC_0(VAR_1->stream->signal)) {
  if (FUNC_1(&VAR_4->timing) || VAR_3.opp_cnt > 1)
   VAR_3.timing.pix_clk_100hz /= 2;
  VAR_1->stream_res.stream_enc->funcs->dp_set_odm_combine(
    VAR_1->stream_res.stream_enc, VAR_3.opp_cnt > 1);
  VAR_1->stream_res.stream_enc->funcs->dp_unblank(VAR_1->stream_res.stream_enc, &VAR_3);
 }

 if (VAR_5->local_sink && VAR_5->local_sink->sink_signal == VAR_0) {
  VAR_5->dc->hwss.edp_backlight_control(VAR_5, 1);
 }
}
