
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* pipe_ctx; } ;
struct dc_state {TYPE_2__ res_ctx; } ;
struct TYPE_7__ {int (* optimize_bandwidth ) (struct dc*,struct dc_state*) ;int (* disable_plane ) (struct dc*,TYPE_4__*) ;} ;
struct dc {int optimized_required; TYPE_3__ hwss; TYPE_1__* res_pool; scalar_t__ optimize_seamless_boot; struct dc_state* current_state; } ;
struct TYPE_8__ {int pipe_idx; int * plane_state; int * stream; } ;
struct TYPE_5__ {int pipe_count; } ;


 int FUNC_0 (struct dc*) ;
 int FUNC_1 (struct dc*,TYPE_4__*) ;
 int FUNC_2 (struct dc*,struct dc_state*) ;

bool FUNC_3(struct dc *VAR_0)
{
 int VAR_1;
 struct dc_state *VAR_2 = VAR_0->current_state;

 if (!VAR_0->optimized_required || VAR_0->optimize_seamless_boot)
  return 1;

 FUNC_0(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->res_pool->pipe_count; VAR_1++)
  if (VAR_2->res_ctx.pipe_ctx[VAR_1].stream == ((void*)0) ||
      VAR_2->res_ctx.pipe_ctx[VAR_1].plane_state == ((void*)0)) {
   VAR_2->res_ctx.pipe_ctx[VAR_1].pipe_idx = VAR_1;
   VAR_0->hwss.disable_plane(VAR_0, &VAR_2->res_ctx.pipe_ctx[VAR_1]);
  }

 VAR_0->optimized_required = 0;

 VAR_0->hwss.optimize_bandwidth(VAR_0, VAR_2);
 return 1;
}
