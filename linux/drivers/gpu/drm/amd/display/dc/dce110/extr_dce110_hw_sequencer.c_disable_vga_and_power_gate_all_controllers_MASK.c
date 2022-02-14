
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timing_generator {TYPE_1__* funcs; } ;
struct dc_context {int dummy; } ;
struct TYPE_9__ {int (* disable_plane ) (struct dc*,TYPE_6__*) ;} ;
struct dc {TYPE_5__* current_state; TYPE_3__ hwss; TYPE_2__* res_pool; struct dc_context* ctx; } ;
struct TYPE_12__ {int pipe_idx; } ;
struct TYPE_10__ {TYPE_6__* pipe_ctx; } ;
struct TYPE_11__ {TYPE_4__ res_ctx; } ;
struct TYPE_8__ {int timing_generator_count; int pipe_count; struct timing_generator** timing_generators; } ;
struct TYPE_7__ {int (* disable_vga ) (struct timing_generator*) ;} ;


 int FUNC_0 (struct dc_context*,int) ;
 int FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (struct dc*,TYPE_6__*) ;

__attribute__((used)) static void FUNC_3(
  struct dc *VAR_0)
{
 int VAR_1;
 struct timing_generator *VAR_2;
 struct dc_context *VAR_3 = VAR_0->ctx;

 for (VAR_1 = 0; VAR_1 < VAR_0->res_pool->timing_generator_count; VAR_1++) {
  VAR_2 = VAR_0->res_pool->timing_generators[VAR_1];

  if (VAR_2->funcs->disable_vga)
   VAR_2->funcs->disable_vga(VAR_2);
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->res_pool->pipe_count; VAR_1++) {


  FUNC_0(VAR_3,
    1);

  VAR_0->current_state->res_ctx.pipe_ctx[VAR_1].pipe_idx = VAR_1;
  VAR_0->hwss.disable_plane(VAR_0,
   &VAR_0->current_state->res_ctx.pipe_ctx[VAR_1]);
 }
}
