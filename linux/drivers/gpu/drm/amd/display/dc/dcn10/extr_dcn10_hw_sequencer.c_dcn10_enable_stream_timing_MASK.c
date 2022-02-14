
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct tg_color {int member_0; } ;
struct TYPE_24__ {TYPE_6__* tg; TYPE_10__* opp; int pix_clk_params; } ;
struct TYPE_21__ {int vupdate_width; int vupdate_offset; int vstartup_start; int vready_offset; } ;
struct pipe_ctx {TYPE_5__ stream_res; struct dc_stream_state* stream; TYPE_2__ pipe_dlg_param; int pll_settings; TYPE_12__* clock_source; int * top_pipe; } ;
struct dc_stream_state {int output_color_space; int clamping; int bit_depth_params; int signal; int timing; } ;
struct dc_state {int dummy; } ;
struct dc {int dummy; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_25__ {size_t inst; TYPE_4__* funcs; } ;
struct TYPE_23__ {int (* enable_crtc ) (TYPE_6__*) ;int (* set_blank ) (TYPE_6__*,int) ;int (* is_blanked ) (TYPE_6__*) ;int (* set_blank_color ) (TYPE_6__*,struct tg_color*) ;int (* program_timing ) (TYPE_6__*,int *,int ,int ,int ,int ,int ,int) ;int (* enable_optc_clock ) (TYPE_6__*,int) ;} ;
struct TYPE_22__ {int (* opp_program_fmt ) (TYPE_10__*,int *,int *) ;} ;
struct TYPE_20__ {int (* program_pix_clk ) (TYPE_12__*,int *,int *) ;} ;
struct TYPE_19__ {int fmt; } ;
struct TYPE_18__ {TYPE_1__* funcs; } ;
struct TYPE_17__ {TYPE_3__* funcs; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dc*,int,struct tg_color*) ;
 int FUNC_2 (struct dc*,struct dc_stream_state*,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_2 ;
 TYPE_14__* VAR_3 ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (TYPE_12__*,int *,int *) ;
 int FUNC_6 (TYPE_6__*,int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_7 (TYPE_10__*,int *,int *) ;
 int FUNC_8 (TYPE_6__*,struct tg_color*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*,int) ;
 int FUNC_11 (TYPE_6__*) ;

__attribute__((used)) static enum dc_status FUNC_12(
  struct pipe_ctx *VAR_4,
  struct dc_state *VAR_5,
  struct dc *VAR_6)
{
 struct dc_stream_state *VAR_7 = VAR_4->stream;
 enum dc_color_space VAR_8;
 struct tg_color VAR_9 = {0};





 if (VAR_4->top_pipe != ((void*)0))
  return VAR_1;






 VAR_4->stream_res.tg->funcs->enable_optc_clock(VAR_4->stream_res.tg, 1);

 if (0 == VAR_4->clock_source->funcs->program_pix_clk(
   VAR_4->clock_source,
   &VAR_4->stream_res.pix_clk_params,
   &VAR_4->pll_settings)) {
  FUNC_0();
  return VAR_0;
 }

 VAR_4->stream_res.tg->funcs->program_timing(
   VAR_4->stream_res.tg,
   &VAR_7->timing,
   VAR_4->pipe_dlg_param.vready_offset,
   VAR_4->pipe_dlg_param.vstartup_start,
   VAR_4->pipe_dlg_param.vupdate_offset,
   VAR_4->pipe_dlg_param.vupdate_width,
   VAR_4->stream->signal,
   1);
 VAR_8 = VAR_7->output_color_space;
 FUNC_1(VAR_6, VAR_8, &VAR_9);

 if (VAR_4->stream_res.tg->funcs->set_blank_color)
  VAR_4->stream_res.tg->funcs->set_blank_color(
    VAR_4->stream_res.tg,
    &VAR_9);

 if (VAR_4->stream_res.tg->funcs->is_blanked &&
   !VAR_4->stream_res.tg->funcs->is_blanked(VAR_4->stream_res.tg)) {
  VAR_4->stream_res.tg->funcs->set_blank(VAR_4->stream_res.tg, 1);
  FUNC_3(VAR_4->stream_res.tg);
  FUNC_2(VAR_6, VAR_4->stream, VAR_4->stream_res.tg);
 }


 if (0 == VAR_4->stream_res.tg->funcs->enable_crtc(VAR_4->stream_res.tg)) {
  FUNC_0();
  return VAR_0;
 }
 return VAR_1;
}
