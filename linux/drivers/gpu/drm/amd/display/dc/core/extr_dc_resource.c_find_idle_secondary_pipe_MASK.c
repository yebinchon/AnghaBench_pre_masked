
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {int pipe_count; } ;
struct resource_context {struct pipe_ctx* pipe_ctx; } ;
struct pipe_ctx {int pipe_idx; int * stream; } ;



struct pipe_ctx *FUNC_0(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  const struct pipe_ctx *VAR_2)
{
 int VAR_3;
 struct pipe_ctx *VAR_4 = ((void*)0);
 if (VAR_2) {
  int VAR_5 = (VAR_1->pipe_count - 1) - VAR_2->pipe_idx;
  if (VAR_0->pipe_ctx[VAR_5].stream == ((void*)0)) {
   VAR_4 = &VAR_0->pipe_ctx[VAR_5];
   VAR_4->pipe_idx = VAR_5;
  }
 }





 if (!VAR_4)
  for (VAR_3 = VAR_1->pipe_count - 1; VAR_3 >= 0; VAR_3--) {
   if (VAR_0->pipe_ctx[VAR_3].stream == ((void*)0)) {
    VAR_4 = &VAR_0->pipe_ctx[VAR_3];
    VAR_4->pipe_idx = VAR_3;
    break;
   }
  }

 return VAR_4;
}
