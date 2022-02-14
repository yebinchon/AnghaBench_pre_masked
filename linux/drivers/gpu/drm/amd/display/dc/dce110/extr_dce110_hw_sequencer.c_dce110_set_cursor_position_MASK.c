
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_26__ {int vert; int horz; } ;
struct TYPE_27__ {TYPE_7__ ratios; int viewport; } ;
struct TYPE_28__ {TYPE_8__ scl_data; struct mem_input* mi; struct input_pixel_processor* ipp; } ;
struct pipe_ctx {TYPE_12__* top_pipe; TYPE_11__* plane_state; TYPE_9__ plane_res; TYPE_6__* stream; } ;
struct mem_input {TYPE_14__* funcs; } ;
struct input_pixel_processor {TYPE_13__* funcs; } ;
struct dc_cursor_position {int enable; } ;
struct dc_cursor_mi_param {int pixel_clk_khz; int mirror; int rotation; int v_scale_ratio; int h_scale_ratio; int viewport; int ref_clk_khz; } ;
struct TYPE_20__ {int pix_clk_100hz; } ;
struct TYPE_25__ {TYPE_5__* ctx; TYPE_1__ timing; struct dc_cursor_position cursor_position; } ;
struct TYPE_24__ {TYPE_4__* dc; } ;
struct TYPE_23__ {TYPE_3__* res_pool; } ;
struct TYPE_21__ {int xtalin_clock_inKhz; } ;
struct TYPE_22__ {TYPE_2__ ref_clocks; } ;
struct TYPE_19__ {int (* set_cursor_position ) (struct mem_input*,struct dc_cursor_position*,struct dc_cursor_mi_param*) ;} ;
struct TYPE_18__ {int (* ipp_cursor_set_position ) (struct input_pixel_processor*,struct dc_cursor_position*,struct dc_cursor_mi_param*) ;} ;
struct TYPE_17__ {TYPE_11__* plane_state; } ;
struct TYPE_15__ {scalar_t__ type; } ;
struct TYPE_16__ {TYPE_10__ address; int horizontal_mirror; int rotation; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct input_pixel_processor*,struct dc_cursor_position*,struct dc_cursor_mi_param*) ;
 int FUNC_1 (struct mem_input*,struct dc_cursor_position*,struct dc_cursor_mi_param*) ;

void FUNC_2(struct pipe_ctx *VAR_1)
{
 struct dc_cursor_position VAR_2 = VAR_1->stream->cursor_position;
 struct input_pixel_processor *VAR_3 = VAR_1->plane_res.ipp;
 struct mem_input *VAR_4 = VAR_1->plane_res.mi;
 struct dc_cursor_mi_param VAR_5 = {
  .pixel_clk_khz = VAR_1->stream->timing.pix_clk_100hz / 10,
  .ref_clk_khz = VAR_1->stream->ctx->dc->res_pool->ref_clocks.xtalin_clock_inKhz,
  .viewport = VAR_1->plane_res.scl_data.viewport,
  .h_scale_ratio = VAR_1->plane_res.scl_data.ratios.horz,
  .v_scale_ratio = VAR_1->plane_res.scl_data.ratios.vert,
  .rotation = VAR_1->plane_state->rotation,
  .mirror = VAR_1->plane_state->horizontal_mirror
 };

 if (VAR_1->plane_state->address.type
   == VAR_0)
  VAR_2.enable = 0;

 if (VAR_1->top_pipe && VAR_1->plane_state != VAR_1->top_pipe->plane_state)
  VAR_2.enable = 0;

 if (VAR_3->funcs->ipp_cursor_set_position)
  VAR_3->funcs->ipp_cursor_set_position(VAR_3, &VAR_2, &VAR_5);
 if (VAR_4->funcs->set_cursor_position)
  VAR_4->funcs->set_cursor_position(VAR_4, &VAR_2, &VAR_5);
}
