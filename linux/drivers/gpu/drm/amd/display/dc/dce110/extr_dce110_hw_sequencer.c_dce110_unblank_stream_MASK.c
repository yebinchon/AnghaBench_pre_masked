
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_8__* stream_enc; } ;
struct pipe_ctx {TYPE_4__ stream_res; struct dc_stream_state* stream; } ;
struct TYPE_10__ {int link_rate; } ;
struct TYPE_9__ {int member_0; } ;
struct encoder_unblank_param {TYPE_2__ link_settings; int timing; TYPE_1__ member_0; } ;
struct dc_stream_state {int signal; int timing; struct dc_link* link; } ;
struct dc_link_settings {int link_rate; } ;
struct dc_link {TYPE_7__* dc; TYPE_5__* local_sink; } ;
struct TYPE_16__ {TYPE_3__* funcs; } ;
struct TYPE_14__ {int (* edp_backlight_control ) (struct dc_link*,int) ;} ;
struct TYPE_15__ {TYPE_6__ hwss; } ;
struct TYPE_13__ {scalar_t__ sink_signal; } ;
struct TYPE_11__ {int (* dp_unblank ) (TYPE_8__*,struct encoder_unblank_param*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*,struct encoder_unblank_param*) ;
 int FUNC_2 (struct dc_link*,int) ;

void FUNC_3(struct pipe_ctx *VAR_1,
  struct dc_link_settings *VAR_2)
{
 struct encoder_unblank_param VAR_3 = { { 0 } };
 struct dc_stream_state *VAR_4 = VAR_1->stream;
 struct dc_link *VAR_5 = VAR_4->link;


 VAR_3.timing = VAR_1->stream->timing;
 VAR_3.link_settings.link_rate = VAR_2->link_rate;

 if (FUNC_0(VAR_1->stream->signal))
  VAR_1->stream_res.stream_enc->funcs->dp_unblank(VAR_1->stream_res.stream_enc, &VAR_3);

 if (VAR_5->local_sink && VAR_5->local_sink->sink_signal == VAR_0) {
  VAR_5->dc->hwss.edp_backlight_control(VAR_5, 1);
 }
}
