
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_ctx {TYPE_1__* plane_state; struct pipe_ctx* top_pipe; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_2__ {scalar_t__ layer_index; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct pipe_ctx *VAR_0, enum dc_color_space VAR_1)
{
 if (VAR_0->plane_state && VAR_0->plane_state->layer_index > 0 && FUNC_0(VAR_1)) {
  if (VAR_0->top_pipe) {
   struct pipe_ctx *VAR_2 = VAR_0->top_pipe;

   while (VAR_2->top_pipe)
    VAR_2 = VAR_2->top_pipe;
   if (VAR_2->plane_state && VAR_2->plane_state->layer_index == 0)
    return 1;
  }
 }
 return 0;
}
