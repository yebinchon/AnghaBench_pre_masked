
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_ctx {struct dc_plane_state const* plane_state; } ;
struct TYPE_2__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_1__ res_ctx; } ;
struct dc_plane_state {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(
  const struct dc_state *VAR_1,
  const struct dc_plane_state *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  const struct pipe_ctx *VAR_4 = &VAR_1->res_ctx.pipe_ctx[VAR_3];

  if (VAR_2 == VAR_4->plane_state) {
   return 1;
  }
 }

 return 0;
}
