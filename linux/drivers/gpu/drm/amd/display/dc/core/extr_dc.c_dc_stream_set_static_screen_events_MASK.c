
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_ctx {struct dc_stream_state* stream; } ;
struct dc_stream_state {int dummy; } ;
struct dc_static_screen_events {int dummy; } ;
struct TYPE_6__ {int (* set_static_screen_control ) (struct pipe_ctx**,int,struct dc_static_screen_events const*) ;} ;
struct dc {TYPE_3__ hwss; TYPE_2__* current_state; } ;
struct TYPE_4__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_5__ {TYPE_1__ res_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct pipe_ctx**,int,struct dc_static_screen_events const*) ;

void FUNC_1(struct dc *VAR_1,
  struct dc_stream_state **VAR_2,
  int VAR_3,
  const struct dc_static_screen_events *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 struct pipe_ctx *VAR_7[VAR_0];
 int VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct dc_stream_state *VAR_9 = VAR_2[VAR_5];

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_1->current_state->res_ctx.pipe_ctx[VAR_6].stream
     == VAR_9) {
    VAR_7[VAR_8++] =
      &VAR_1->current_state->res_ctx.pipe_ctx[VAR_6];
   }
  }
 }

 VAR_1->hwss.set_static_screen_control(VAR_7, VAR_8, VAR_4);
}
