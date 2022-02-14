
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource_context {TYPE_1__* pipe_ctx; } ;
struct pipe_ctx {int dummy; } ;
struct clock_source {int dummy; } ;
struct TYPE_2__ {struct clock_source* clock_source; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct pipe_ctx*) ;

struct clock_source *FUNC_1(
     struct resource_context *VAR_1,
     struct pipe_ctx *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(&VAR_1->pipe_ctx[VAR_3], VAR_2))
   return VAR_1->pipe_ctx[VAR_3].clock_source;
 }

 return ((void*)0);
}
