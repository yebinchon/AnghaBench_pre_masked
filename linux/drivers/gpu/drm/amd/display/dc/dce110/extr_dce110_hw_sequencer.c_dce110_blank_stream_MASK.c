
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* stream_enc; } ;
struct pipe_ctx {TYPE_4__ stream_res; struct dc_stream_state* stream; } ;
struct dc_stream_state {int signal; struct dc_link* link; } ;
struct dc_link {TYPE_2__* dc; TYPE_5__* local_sink; } ;
struct TYPE_12__ {TYPE_3__* funcs; } ;
struct TYPE_11__ {scalar_t__ sink_signal; } ;
struct TYPE_9__ {int (* dp_blank ) (TYPE_6__*) ;} ;
struct TYPE_7__ {int (* edp_backlight_control ) (struct dc_link*,int) ;} ;
struct TYPE_8__ {TYPE_1__ hwss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dc_link*) ;
 int FUNC_2 (struct dc_link*,int) ;
 int FUNC_3 (TYPE_6__*) ;

void FUNC_4(struct pipe_ctx *VAR_1)
{
 struct dc_stream_state *VAR_2 = VAR_1->stream;
 struct dc_link *VAR_3 = VAR_2->link;

 if (VAR_3->local_sink && VAR_3->local_sink->sink_signal == VAR_0) {
  VAR_3->dc->hwss.edp_backlight_control(VAR_3, 0);
  FUNC_1(VAR_3);
 }

 if (FUNC_0(VAR_1->stream->signal))
  VAR_1->stream_res.stream_enc->funcs->dp_blank(VAR_1->stream_res.stream_enc);
}
