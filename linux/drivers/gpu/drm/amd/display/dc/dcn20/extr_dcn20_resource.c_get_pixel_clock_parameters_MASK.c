
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


struct TYPE_11__ {int DISPLAY_BLANKED; scalar_t__ ENABLE_SS; } ;
struct pixel_clk_params {int requested_pix_clk_100hz; int requested_sym_clk; scalar_t__ pixel_encoding; int color_depth; TYPE_5__ flags; scalar_t__ controller_id; int signal_type; int encoder_object_id; } ;
struct TYPE_10__ {TYPE_3__* tg; } ;
struct pipe_ctx {TYPE_4__ stream_res; struct dc_stream_state* stream; struct pipe_ctx* next_odm_pipe; } ;
struct TYPE_12__ {int pix_clk_100hz; scalar_t__ pixel_encoding; scalar_t__ timing_3d_format; int display_color_depth; } ;
struct dc_stream_state {TYPE_6__ timing; int signal; TYPE_2__* link; } ;
struct TYPE_9__ {scalar_t__ inst; } ;
struct TYPE_8__ {TYPE_1__* link_enc; } ;
struct TYPE_7__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_1(
 struct pipe_ctx *VAR_5,
 struct pixel_clk_params *VAR_6)
{
 const struct dc_stream_state *VAR_7 = VAR_5->stream;
 struct pipe_ctx *VAR_8;
 int VAR_9 = 1;

 for (VAR_8 = VAR_5->next_odm_pipe; VAR_8; VAR_8 = VAR_8->next_odm_pipe)
  VAR_9++;

 VAR_6->requested_pix_clk_100hz = VAR_7->timing.pix_clk_100hz;
 VAR_6->encoder_object_id = VAR_7->link->link_enc->id;
 VAR_6->signal_type = VAR_5->stream->signal;
 VAR_6->controller_id = VAR_5->stream_res.tg->inst + 1;

 VAR_6->requested_sym_clk = VAR_1 *
  VAR_2;
 VAR_6->flags.ENABLE_SS = 0;
 VAR_6->color_depth =
  VAR_7->timing.display_color_depth;
 VAR_6->flags.DISPLAY_BLANKED = 1;
 VAR_6->pixel_encoding = VAR_7->timing.pixel_encoding;

 if (VAR_7->timing.pixel_encoding == VAR_3)
  VAR_6->color_depth = VAR_0;

 if (VAR_9 == 4)
  VAR_6->requested_pix_clk_100hz /= 4;
 else if (FUNC_0(&VAR_7->timing) || VAR_9 == 2)
  VAR_6->requested_pix_clk_100hz /= 2;

 if (VAR_7->timing.timing_3d_format == VAR_4)
  VAR_6->requested_pix_clk_100hz *= 2;

}
