
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_ctx {scalar_t__ bottom_pipe; scalar_t__ top_pipe; TYPE_1__* plane_state; } ;
struct TYPE_2__ {scalar_t__ visible; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

bool FUNC_2(struct pipe_ctx *VAR_0)
{
 if (VAR_0->plane_state && VAR_0->plane_state->visible)
  return 1;
 if (VAR_0->top_pipe && FUNC_1(VAR_0->top_pipe))
  return 1;
 if (VAR_0->bottom_pipe && FUNC_0(VAR_0->bottom_pipe))
  return 1;
 return 0;
}
