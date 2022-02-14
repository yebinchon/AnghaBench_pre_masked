
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct tg_color {int member_0; } ;
struct TYPE_15__ {TYPE_6__* tg; int pix_clk_params; } ;
struct pipe_ctx {size_t pipe_idx; TYPE_5__ stream_res; struct dc_stream_state* stream; int pll_settings; TYPE_8__* clock_source; } ;
struct dc_stream_state {int signal; int timing; int output_color_space; } ;
struct dc_state {int dummy; } ;
struct dc {TYPE_2__* current_state; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
struct TYPE_17__ {TYPE_3__* funcs; } ;
struct TYPE_16__ {TYPE_4__* funcs; } ;
struct TYPE_14__ {int (* enable_crtc ) (TYPE_6__*) ;int (* program_timing ) (TYPE_6__*,int *,int ,int ,int ,int ,int ,int) ;int (* set_blank ) (TYPE_6__*,int) ;int (* set_blank_color ) (TYPE_6__*,struct tg_color*) ;} ;
struct TYPE_13__ {int (* program_pix_clk ) (TYPE_8__*,int *,int *) ;} ;
struct TYPE_11__ {struct pipe_ctx* pipe_ctx; } ;
struct TYPE_12__ {TYPE_1__ res_ctx; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dc*,int ,struct tg_color*) ;
 int FUNC_2 (TYPE_6__*,struct tg_color*) ;
 int FUNC_3 (TYPE_6__*,int) ;
 int FUNC_4 (TYPE_8__*,int *,int *) ;
 int FUNC_5 (TYPE_6__*,int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static enum dc_status FUNC_7(
  struct pipe_ctx *VAR_2,
  struct dc_state *VAR_3,
  struct dc *VAR_4)
{
 struct dc_stream_state *VAR_5 = VAR_2->stream;
 struct pipe_ctx *VAR_6 = &VAR_4->current_state->res_ctx.
   pipe_ctx[VAR_2->pipe_idx];
 struct tg_color VAR_7 = {0};

 if (!VAR_6->stream) {


  FUNC_1(VAR_4,
    VAR_5->output_color_space, &VAR_7);
  VAR_2->stream_res.tg->funcs->set_blank_color(
    VAR_2->stream_res.tg,
    &VAR_7);





  VAR_2->stream_res.tg->funcs->set_blank(VAR_2->stream_res.tg, 1);

  if (0 == VAR_2->clock_source->funcs->program_pix_clk(
    VAR_2->clock_source,
    &VAR_2->stream_res.pix_clk_params,
    &VAR_2->pll_settings)) {
   FUNC_0();
   return VAR_0;
  }

  VAR_2->stream_res.tg->funcs->program_timing(
    VAR_2->stream_res.tg,
    &VAR_5->timing,
    0,
    0,
    0,
    0,
    VAR_2->stream->signal,
    1);
 }

 if (!VAR_6->stream) {
  if (0 == VAR_2->stream_res.tg->funcs->enable_crtc(
    VAR_2->stream_res.tg)) {
   FUNC_0();
   return VAR_0;
  }
 }

 return VAR_1;
}
