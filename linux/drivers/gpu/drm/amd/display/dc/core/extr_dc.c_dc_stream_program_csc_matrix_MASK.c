
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


struct TYPE_12__ {TYPE_5__* opp; } ;
struct pipe_ctx {TYPE_6__ stream_res; struct dc_stream_state* stream; } ;
struct TYPE_10__ {int matrix; } ;
struct dc_stream_state {TYPE_4__ csc_color_matrix; int output_color_space; } ;
struct TYPE_9__ {int (* program_output_csc ) (struct dc*,struct pipe_ctx*,int ,int ,int ) ;} ;
struct dc {TYPE_3__ hwss; TYPE_2__* current_state; } ;
struct TYPE_11__ {int inst; } ;
struct TYPE_7__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_8__ {TYPE_1__ res_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc*,struct pipe_ctx*,int ,int ,int ) ;

bool FUNC_1(struct dc *VAR_1, struct dc_stream_state *VAR_2)
{
 int VAR_3 = 0;
 bool VAR_4 = 0;
 struct pipe_ctx *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->current_state->res_ctx.pipe_ctx[VAR_3].stream
    == VAR_2) {

   VAR_5 = &VAR_1->current_state->res_ctx.pipe_ctx[VAR_3];
   VAR_1->hwss.program_output_csc(VAR_1,
     VAR_5,
     VAR_2->output_color_space,
     VAR_2->csc_color_matrix.matrix,
     VAR_5->stream_res.opp->inst);
   VAR_4 = 1;
  }
 }

 return VAR_4;
}
