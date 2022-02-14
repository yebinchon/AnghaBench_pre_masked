
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct timing_generator {TYPE_3__* funcs; } ;
struct resource_context {TYPE_2__* pipe_ctx; } ;
struct dc_stream_state {TYPE_4__* ctx; } ;
struct dc {TYPE_5__* current_state; } ;
struct TYPE_10__ {struct resource_context res_ctx; } ;
struct TYPE_9__ {struct dc* dc; } ;
struct TYPE_8__ {int (* get_frame_count ) (struct timing_generator*) ;} ;
struct TYPE_6__ {struct timing_generator* tg; } ;
struct TYPE_7__ {struct dc_stream_state const* stream; TYPE_1__ stream_res; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct timing_generator*) ;

uint32_t FUNC_1(const struct dc_stream_state *VAR_1)
{
 uint8_t VAR_2;
 struct dc *VAR_3 = VAR_1->ctx->dc;
 struct resource_context *VAR_4 =
  &VAR_3->current_state->res_ctx;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct timing_generator *VAR_5 = VAR_4->pipe_ctx[VAR_2].stream_res.tg;

  if (VAR_4->pipe_ctx[VAR_2].stream != VAR_1)
   continue;

  return VAR_5->funcs->get_frame_count(VAR_5);
 }

 return 0;
}
