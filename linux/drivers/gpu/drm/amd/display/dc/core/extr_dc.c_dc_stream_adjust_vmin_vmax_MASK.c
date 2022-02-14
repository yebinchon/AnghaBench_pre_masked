
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tg; } ;
struct pipe_ctx {struct dc_stream_state* stream; TYPE_3__ stream_res; } ;
struct dc_crtc_timing_adjust {int v_total_mid_frame_num; int v_total_mid; int v_total_max; int v_total_min; } ;
struct dc_stream_state {struct dc_crtc_timing_adjust adjust; } ;
struct TYPE_8__ {int (* set_drr ) (struct pipe_ctx**,int,int ,int ,int ,int ) ;} ;
struct dc {TYPE_4__ hwss; TYPE_2__* current_state; } ;
struct TYPE_5__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_6__ {TYPE_1__ res_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct pipe_ctx**,int,int ,int ,int ,int ) ;

bool FUNC_1(struct dc *VAR_1,
  struct dc_stream_state *VAR_2,
  struct dc_crtc_timing_adjust *VAR_3)
{
 int VAR_4 = 0;
 bool VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct pipe_ctx *VAR_6 = &VAR_1->current_state->res_ctx.pipe_ctx[VAR_4];

  if (VAR_6->stream == VAR_2 && VAR_6->stream_res.tg) {
   VAR_6->stream->adjust = *VAR_3;
   VAR_1->hwss.set_drr(&VAR_6,
     1,
     VAR_3->v_total_min,
     VAR_3->v_total_max,
     VAR_3->v_total_mid,
     VAR_3->v_total_mid_frame_num);

   VAR_5 = 1;
  }
 }
 return VAR_5;
}
