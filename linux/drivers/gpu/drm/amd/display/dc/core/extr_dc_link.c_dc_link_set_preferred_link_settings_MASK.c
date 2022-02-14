
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pipe_ctx {struct dc_stream_state* stream; } ;
struct dc_stream_state {scalar_t__ dpms_off; struct dc_link* link; } ;
struct dc_link_settings {scalar_t__ lane_count; scalar_t__ link_rate; } ;
struct dc_link {scalar_t__ dongle_max_pix_clk; int connector_signal; struct dc_link_settings preferred_link_setting; } ;
struct dc {TYPE_2__* current_state; } ;
struct TYPE_3__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_4__ {TYPE_1__ res_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dc_stream_state*,struct dc_link_settings*) ;
 int FUNC_2 (struct dc_link*,struct dc_link_settings*,int) ;

void FUNC_3(struct dc *VAR_3,
      struct dc_link_settings *VAR_4,
      struct dc_link *VAR_5)
{
 int VAR_6;
 struct pipe_ctx *VAR_7;
 struct dc_stream_state *VAR_8;
 struct dc_link_settings VAR_9 = *VAR_4;

 VAR_5->preferred_link_setting = VAR_9;





 if (!FUNC_0(VAR_5->connector_signal) ||
  VAR_5->dongle_max_pix_clk > 0)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = &VAR_3->current_state->res_ctx.pipe_ctx[VAR_6];
  if (VAR_7->stream && VAR_7->stream->link) {
   if (VAR_7->stream->link == VAR_5) {
    VAR_8 = VAR_7->stream;
    break;
   }
  }
 }


 if (VAR_6 == VAR_2)
  return;


 if (VAR_8->dpms_off)
  return;

 FUNC_1(VAR_8, &VAR_9);

 if ((VAR_9.lane_count != VAR_0) &&
  (VAR_9.link_rate != VAR_1))
  FUNC_2(VAR_5, &VAR_9, 0);
}
