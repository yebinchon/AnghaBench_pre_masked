
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


struct pipe_ctx {struct clock_source* clock_source; int stream; scalar_t__ top_pipe; } ;
struct TYPE_9__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_3__ res_ctx; } ;
struct TYPE_10__ {int (* enable_stream_gating ) (struct dc*,struct pipe_ctx*) ;} ;
struct dc {TYPE_4__ hwss; TYPE_6__* current_state; TYPE_1__* res_pool; } ;
struct clock_source {TYPE_5__* funcs; } ;
struct TYPE_8__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_12__ {TYPE_2__ res_ctx; } ;
struct TYPE_11__ {int (* cs_power_down ) (struct clock_source*) ;} ;
struct TYPE_7__ {int pipe_count; } ;


 int FUNC_0 (struct dc*,struct pipe_ctx*,TYPE_6__*) ;
 scalar_t__ FUNC_1 (struct pipe_ctx*,struct pipe_ctx*) ;
 int FUNC_2 (struct dc*,struct pipe_ctx*) ;
 int FUNC_3 (struct clock_source*) ;

__attribute__((used)) static void FUNC_4(
  struct dc *VAR_0,
  struct dc_state *VAR_1)
{
 int VAR_2;


 for (VAR_2 = VAR_0->res_pool->pipe_count - 1; VAR_2 >= 0 ; VAR_2--) {
  struct pipe_ctx *VAR_3 =
   &VAR_0->current_state->res_ctx.pipe_ctx[VAR_2];
  struct pipe_ctx *VAR_4 = &VAR_1->res_ctx.pipe_ctx[VAR_2];

  if (!VAR_3->stream)
   continue;

  if (VAR_3->top_pipe)
   continue;

  if (!VAR_4->stream ||
    FUNC_1(VAR_3, VAR_4)) {
   struct clock_source *VAR_5 = VAR_3->clock_source;

   FUNC_0(VAR_0, VAR_3, VAR_0->current_state);
   if (VAR_0->hwss.enable_stream_gating)
    VAR_0->hwss.enable_stream_gating(VAR_0, VAR_4);
   if (VAR_5)
    VAR_5->funcs->cs_power_down(VAR_5);
  }
 }
}
