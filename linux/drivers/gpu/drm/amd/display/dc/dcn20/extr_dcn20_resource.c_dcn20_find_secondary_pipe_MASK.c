
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


struct resource_pool {int dummy; } ;
struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct pipe_ctx {size_t pipe_idx; int * stream; } ;
struct dc {TYPE_6__* res_pool; TYPE_5__* current_state; } ;
struct TYPE_12__ {int pipe_count; } ;
struct TYPE_10__ {TYPE_3__* pipe_ctx; } ;
struct TYPE_11__ {TYPE_4__ res_ctx; } ;
struct TYPE_9__ {int * top_pipe; TYPE_2__* next_odm_pipe; TYPE_1__* bottom_pipe; } ;
struct TYPE_8__ {int pipe_idx; } ;
struct TYPE_7__ {int pipe_idx; } ;


 int FUNC_0 (struct pipe_ctx*) ;

__attribute__((used)) static struct pipe_ctx *FUNC_1(struct dc *VAR_0,
  struct resource_context *VAR_1,
  const struct resource_pool *VAR_2,
  const struct pipe_ctx *VAR_3)
{
 struct pipe_ctx *VAR_4 = ((void*)0);

 if (VAR_0 && VAR_3) {
  int VAR_5;
  int VAR_6 = 0;
  if (VAR_0->current_state->res_ctx.pipe_ctx[VAR_3->pipe_idx].bottom_pipe) {
   VAR_6 = VAR_0->current_state->res_ctx.pipe_ctx[VAR_3->pipe_idx].bottom_pipe->pipe_idx;
   if (VAR_1->pipe_ctx[VAR_6].stream == ((void*)0)) {
    VAR_4 = &VAR_1->pipe_ctx[VAR_6];
    VAR_4->pipe_idx = VAR_6;
   }
  } else if (VAR_0->current_state->res_ctx.pipe_ctx[VAR_3->pipe_idx].next_odm_pipe) {
   VAR_6 = VAR_0->current_state->res_ctx.pipe_ctx[VAR_3->pipe_idx].next_odm_pipe->pipe_idx;
   if (VAR_1->pipe_ctx[VAR_6].stream == ((void*)0)) {
    VAR_4 = &VAR_1->pipe_ctx[VAR_6];
    VAR_4->pipe_idx = VAR_6;
   }
  }







  if (VAR_4 == ((void*)0)) {
   for (VAR_5 = VAR_0->res_pool->pipe_count - 1; VAR_5 >= 0; VAR_5--) {
    if (VAR_0->current_state->res_ctx.pipe_ctx[VAR_5].top_pipe == ((void*)0)) {
     VAR_6 = VAR_5;

     if (VAR_1->pipe_ctx[VAR_6].stream == ((void*)0)) {
      VAR_4 = &VAR_1->pipe_ctx[VAR_6];
      VAR_4->pipe_idx = VAR_6;
      break;
     }
    }
   }
  }




  FUNC_0(VAR_4);




  if (VAR_4 == ((void*)0)) {
   for (VAR_5 = VAR_0->res_pool->pipe_count - 1; VAR_5 >= 0; VAR_5--) {
    VAR_6 = VAR_5;

    if (VAR_1->pipe_ctx[VAR_6].stream == ((void*)0)) {
     VAR_4 = &VAR_1->pipe_ctx[VAR_6];
     VAR_4->pipe_idx = VAR_6;
     break;
    }
   }
  }
 }

 return VAR_4;
}
