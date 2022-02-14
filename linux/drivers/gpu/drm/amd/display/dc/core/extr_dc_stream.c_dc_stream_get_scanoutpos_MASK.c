
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
struct timing_generator {TYPE_4__* funcs; } ;
struct resource_context {TYPE_3__* pipe_ctx; } ;
struct dc_stream_state {TYPE_5__* ctx; } ;
struct dc {TYPE_1__* current_state; } ;
struct TYPE_10__ {struct dc* dc; } ;
struct TYPE_9__ {int (* get_scanoutpos ) (struct timing_generator*,int *,int *,int *,int *) ;} ;
struct TYPE_7__ {struct timing_generator* tg; } ;
struct TYPE_8__ {struct dc_stream_state const* stream; TYPE_2__ stream_res; } ;
struct TYPE_6__ {struct resource_context res_ctx; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct timing_generator*,int *,int *,int *,int *) ;

bool FUNC_1(const struct dc_stream_state *VAR_1,
      uint32_t *VAR_2,
      uint32_t *VAR_3,
      uint32_t *VAR_4,
      uint32_t *VAR_5)
{
 uint8_t VAR_6;
 bool VAR_7 = 0;
 struct dc *VAR_8 = VAR_1->ctx->dc;
 struct resource_context *VAR_9 =
  &VAR_8->current_state->res_ctx;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct timing_generator *VAR_10 = VAR_9->pipe_ctx[VAR_6].stream_res.tg;

  if (VAR_9->pipe_ctx[VAR_6].stream != VAR_1)
   continue;

  VAR_10->funcs->get_scanoutpos(VAR_10,
       VAR_2,
       VAR_3,
       VAR_4,
       VAR_5);

  VAR_7 = 1;
  break;
 }

 return VAR_7;
}
