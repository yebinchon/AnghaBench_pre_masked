
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_context {int dummy; } ;
struct pipe_ctx {struct pipe_ctx* bottom_pipe; } ;



__attribute__((used)) static struct pipe_ctx *FUNC_0(
  struct resource_context *VAR_0,
  struct pipe_ctx *VAR_1)
{
 struct pipe_ctx *VAR_2;

 VAR_2 = VAR_1->bottom_pipe;

 while (VAR_2) {
  VAR_1 = VAR_2;
  VAR_2 = VAR_2->bottom_pipe;
 }

 return VAR_1;
}
