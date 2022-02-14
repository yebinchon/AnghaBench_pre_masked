
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_24__ {int width; int x; int height; } ;
struct TYPE_34__ {int vert; int horz; } ;
struct TYPE_23__ {TYPE_16__ viewport; TYPE_9__ ratios; } ;
struct TYPE_25__ {TYPE_15__ scl_data; struct dpp* dpp; struct hubp* hubp; } ;
struct pipe_ctx {TYPE_17__ plane_res; TYPE_14__* plane_state; TYPE_8__* stream; } ;
struct TYPE_20__ {int height; scalar_t__ width; } ;
struct hubp {TYPE_12__ curs_attr; TYPE_1__* funcs; } ;
struct dpp {TYPE_2__* funcs; } ;
struct dc_cursor_position {int x; int y; int enable; int y_hotspot; int x_hotspot; } ;
struct dc_cursor_mi_param {int pixel_clk_khz; scalar_t__ rotation; int mirror; int v_scale_ratio; int h_scale_ratio; TYPE_16__ viewport; int ref_clk_khz; } ;
struct TYPE_28__ {int pix_clk_100hz; } ;
struct TYPE_33__ {TYPE_7__* ctx; TYPE_3__ timing; struct dc_cursor_position cursor_position; } ;
struct TYPE_32__ {TYPE_6__* dc; } ;
struct TYPE_31__ {TYPE_5__* res_pool; } ;
struct TYPE_29__ {int dchub_ref_clock_inKhz; } ;
struct TYPE_30__ {TYPE_4__ ref_clocks; } ;
struct TYPE_27__ {int (* set_cursor_position ) (struct dpp*,struct dc_cursor_position*,struct dc_cursor_mi_param*,scalar_t__,int ) ;} ;
struct TYPE_26__ {int (* set_cursor_position ) (struct hubp*,struct dc_cursor_position*,struct dc_cursor_mi_param*) ;} ;
struct TYPE_21__ {scalar_t__ x; } ;
struct TYPE_19__ {scalar_t__ type; } ;
struct TYPE_18__ {int x; int y; } ;
struct TYPE_22__ {scalar_t__ rotation; TYPE_13__ src_rect; TYPE_11__ address; TYPE_10__ dst_rect; int horizontal_mirror; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct hubp*,struct dc_cursor_position*,struct dc_cursor_mi_param*) ;
 int FUNC_2 (struct dpp*,struct dc_cursor_position*,struct dc_cursor_mi_param*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct pipe_ctx *VAR_4)
{
 struct dc_cursor_position VAR_5 = VAR_4->stream->cursor_position;
 struct hubp *VAR_6 = VAR_4->plane_res.hubp;
 struct dpp *VAR_7 = VAR_4->plane_res.dpp;
 struct dc_cursor_mi_param VAR_8 = {
  .pixel_clk_khz = VAR_4->stream->timing.pix_clk_100hz / 10,
  .ref_clk_khz = VAR_4->stream->ctx->dc->res_pool->ref_clocks.dchub_ref_clock_inKhz,
  .viewport = VAR_4->plane_res.scl_data.viewport,
  .h_scale_ratio = VAR_4->plane_res.scl_data.ratios.horz,
  .v_scale_ratio = VAR_4->plane_res.scl_data.ratios.vert,
  .rotation = VAR_4->plane_state->rotation,
  .mirror = VAR_4->plane_state->horizontal_mirror
 };
 uint32_t VAR_9 = VAR_4->plane_state->dst_rect.x;
 uint32_t VAR_10 = VAR_4->plane_state->dst_rect.y;
 uint32_t VAR_11 = FUNC_0(VAR_9, VAR_5.x);
 uint32_t VAR_12 = FUNC_0(VAR_10, VAR_5.y);

 VAR_5.x -= VAR_11;
 VAR_5.y -= VAR_12;
 VAR_5.x_hotspot += (VAR_9 - VAR_11);
 VAR_5.y_hotspot += (VAR_10 - VAR_12);

 if (VAR_4->plane_state->address.type
   == VAR_0)
  VAR_5.enable = 0;


 if (VAR_8.rotation == VAR_3) {
  uint32_t VAR_13 = VAR_5.x;
  VAR_5.x = VAR_4->plane_res.scl_data.viewport.width -
    (VAR_5.y - VAR_4->plane_res.scl_data.viewport.x) + VAR_4->plane_res.scl_data.viewport.x;
  VAR_5.y = VAR_13;
 }

 else if (VAR_8.rotation == VAR_2) {
  uint32_t VAR_14 = VAR_5.y;
  if (VAR_5.x > VAR_4->plane_res.scl_data.viewport.height) {
   VAR_5.x = VAR_5.x - VAR_4->plane_res.scl_data.viewport.height;
   VAR_5.y = VAR_4->plane_res.scl_data.viewport.height - VAR_5.x;
  } else {
   VAR_5.y = 2 * VAR_4->plane_res.scl_data.viewport.height - VAR_5.x;
  }
  VAR_5.x = VAR_14;
 }

 else if (VAR_8.rotation == VAR_1) {
  if (VAR_5.x >= VAR_4->plane_res.scl_data.viewport.width + VAR_4->plane_res.scl_data.viewport.x) {
   VAR_5.x = 2 * VAR_4->plane_res.scl_data.viewport.width
     - VAR_5.x + 2 * VAR_4->plane_res.scl_data.viewport.x;
  } else {
   uint32_t VAR_15 = VAR_5.x;
   VAR_5.x = 2 * VAR_4->plane_res.scl_data.viewport.x - VAR_5.x;
   if (VAR_15 >= VAR_4->plane_res.scl_data.viewport.x + (int)VAR_6->curs_attr.width
     || VAR_5.x <= (int)VAR_6->curs_attr.width + VAR_4->plane_state->src_rect.x) {
    VAR_5.x = VAR_15 + VAR_4->plane_res.scl_data.viewport.width;
   }
  }
  VAR_5.y = VAR_4->plane_res.scl_data.viewport.height - VAR_5.y;
 }

 VAR_6->funcs->set_cursor_position(VAR_6, &VAR_5, &VAR_8);
 VAR_7->funcs->set_cursor_position(VAR_7, &VAR_5, &VAR_8, VAR_6->curs_attr.width, VAR_6->curs_attr.height);
}
