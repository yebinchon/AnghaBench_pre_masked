
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timing_generator {TYPE_4__* funcs; } ;
struct TYPE_7__ {struct timing_generator* tg; } ;
struct pipe_ctx {int plane_state; int stream; scalar_t__ top_pipe; TYPE_3__ stream_res; } ;
struct TYPE_6__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_2__ res_ctx; } ;
struct dc {TYPE_1__* res_pool; } ;
struct TYPE_8__ {int (* unlock ) (struct timing_generator*) ;int (* lock ) (struct timing_generator*) ;int (* is_tg_enabled ) (struct timing_generator*) ;} ;
struct TYPE_5__ {int pipe_count; } ;


 int FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (struct timing_generator*) ;

void FUNC_3(struct dc *VAR_0,
 struct dc_state *VAR_1,
 bool VAR_2)
{
 struct pipe_ctx *VAR_3;
 struct timing_generator *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->res_pool->pipe_count; VAR_5++) {
  VAR_3 = &VAR_1->res_ctx.pipe_ctx[VAR_5];
  VAR_4 = VAR_3->stream_res.tg;




  if (VAR_3->top_pipe ||
      !VAR_3->stream || !VAR_3->plane_state ||
      !VAR_4->funcs->is_tg_enabled(VAR_4))
   continue;

  if (VAR_2)
   VAR_4->funcs->lock(VAR_4);
  else
   VAR_4->funcs->unlock(VAR_4);
 }
}
