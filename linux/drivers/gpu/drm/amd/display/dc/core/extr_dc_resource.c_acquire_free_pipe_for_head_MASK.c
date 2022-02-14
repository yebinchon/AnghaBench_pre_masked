
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource_pool {int pipe_count; TYPE_1__* funcs; } ;
struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct pipe_ctx {scalar_t__ stream; int plane_state; } ;
struct dc_state {struct resource_context res_ctx; } ;
struct TYPE_2__ {struct pipe_ctx* (* acquire_idle_pipe_for_layer ) (struct dc_state*,struct resource_pool const*,scalar_t__) ;} ;


 struct pipe_ctx* FUNC_0 (struct dc_state*,struct resource_pool const*,scalar_t__) ;

__attribute__((used)) static struct pipe_ctx *FUNC_1(
  struct dc_state *VAR_0,
  const struct resource_pool *VAR_1,
  struct pipe_ctx *VAR_2)
{
 int VAR_3;
 struct resource_context *VAR_4 = &VAR_0->res_ctx;

 if (!VAR_2->plane_state)
  return VAR_2;


 for (VAR_3 = VAR_1->pipe_count - 1; VAR_3 >= 0; VAR_3--) {
  if (VAR_4->pipe_ctx[VAR_3].stream == VAR_2->stream &&
    !VAR_4->pipe_ctx[VAR_3].plane_state) {
   return &VAR_4->pipe_ctx[VAR_3];
  }
 }






 if (!VAR_1->funcs->acquire_idle_pipe_for_layer)
  return ((void*)0);

 return VAR_1->funcs->acquire_idle_pipe_for_layer(VAR_0, VAR_1, VAR_2->stream);
}
