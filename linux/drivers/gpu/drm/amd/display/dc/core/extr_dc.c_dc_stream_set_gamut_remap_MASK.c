
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pipe_ctx {struct dc_stream_state const* stream; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_4__ {int (* program_gamut_remap ) (struct pipe_ctx*) ;} ;
struct dc {TYPE_1__ hwss; TYPE_3__* current_state; } ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_6__ {TYPE_2__ res_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct pipe_ctx*) ;

bool FUNC_1(struct dc *VAR_1, const struct dc_stream_state *VAR_2)
{
 int VAR_3 = 0;
 bool VAR_4 = 0;
 struct pipe_ctx *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->current_state->res_ctx.pipe_ctx[VAR_3].stream == VAR_2) {
   VAR_5 = &VAR_1->current_state->res_ctx.pipe_ctx[VAR_3];
   VAR_1->hwss.program_gamut_remap(VAR_5);
   VAR_4 = 1;
  }
 }

 return VAR_4;
}
