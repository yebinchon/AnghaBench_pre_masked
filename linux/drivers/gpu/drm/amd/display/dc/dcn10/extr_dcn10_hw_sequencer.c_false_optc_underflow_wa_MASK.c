
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timing_generator {TYPE_6__* funcs; } ;
struct pipe_ctx {struct dc_stream_state const* stream; } ;
struct dc_stream_state {int dummy; } ;
struct TYPE_12__ {int (* wait_for_mpcc_disconnect ) (struct dc*,TYPE_7__*,struct pipe_ctx*) ;} ;
struct dc {TYPE_7__* res_pool; TYPE_5__ hwss; TYPE_4__* current_state; TYPE_2__* hwseq; } ;
struct TYPE_14__ {int pipe_count; } ;
struct TYPE_13__ {int (* is_optc_underflow_occurred ) (struct timing_generator*) ;int (* clear_optc_underflow ) (struct timing_generator*) ;int (* set_blank_data_double_buffer ) (struct timing_generator*,int) ;} ;
struct TYPE_10__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_11__ {TYPE_3__ res_ctx; } ;
struct TYPE_8__ {int false_optc_underflow; } ;
struct TYPE_9__ {TYPE_1__ wa; } ;


 int FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (struct dc*,TYPE_7__*,struct pipe_ctx*) ;
 int FUNC_2 (struct timing_generator*,int) ;
 int FUNC_3 (struct timing_generator*) ;
 int FUNC_4 (struct timing_generator*) ;

__attribute__((used)) static void FUNC_5(
  struct dc *VAR_0,
  const struct dc_stream_state *VAR_1,
  struct timing_generator *VAR_2)
{
 int VAR_3;
 bool VAR_4;

 if (!VAR_0->hwseq->wa.false_optc_underflow)
  return;

 VAR_4 = VAR_2->funcs->is_optc_underflow_occurred(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0->res_pool->pipe_count; VAR_3++) {
  struct pipe_ctx *VAR_5 = &VAR_0->current_state->res_ctx.pipe_ctx[VAR_3];

  if (VAR_5->stream != VAR_1)
   continue;

  VAR_0->hwss.wait_for_mpcc_disconnect(VAR_0, VAR_0->res_pool, VAR_5);
 }

 if (VAR_2->funcs->set_blank_data_double_buffer)
  VAR_2->funcs->set_blank_data_double_buffer(VAR_2, 1);

 if (VAR_2->funcs->is_optc_underflow_occurred(VAR_2) && !VAR_4)
  VAR_2->funcs->clear_optc_underflow(VAR_2);
}
