
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_ctx {struct pipe_ctx* top_pipe; TYPE_1__* plane_state; } ;
struct TYPE_2__ {scalar_t__ visible; } ;



bool FUNC_0(struct pipe_ctx *VAR_0)
{
 if (VAR_0->plane_state && VAR_0->plane_state->visible)
  return 1;
 if (VAR_0->top_pipe && FUNC_0(VAR_0->top_pipe))
  return 1;
 return 0;
}
