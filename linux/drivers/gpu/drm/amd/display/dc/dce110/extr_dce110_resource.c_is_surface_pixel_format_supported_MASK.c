
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_ctx {unsigned int pipe_idx; TYPE_1__* plane_state; } ;
struct TYPE_2__ {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct pipe_ctx *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->pipe_idx != VAR_2)
  return 1;
 if (!VAR_1->plane_state)
  return 0;
 if (VAR_1->plane_state->format < VAR_0)
  return 0;
 return 1;
}
