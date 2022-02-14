
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_68__ TYPE_9__ ;
typedef struct TYPE_67__ TYPE_8__ ;
typedef struct TYPE_66__ TYPE_7__ ;
typedef struct TYPE_65__ TYPE_6__ ;
typedef struct TYPE_64__ TYPE_5__ ;
typedef struct TYPE_63__ TYPE_4__ ;
typedef struct TYPE_62__ TYPE_3__ ;
typedef struct TYPE_61__ TYPE_34__ ;
typedef struct TYPE_60__ TYPE_33__ ;
typedef struct TYPE_59__ TYPE_32__ ;
typedef struct TYPE_58__ TYPE_31__ ;
typedef struct TYPE_57__ TYPE_30__ ;
typedef struct TYPE_56__ TYPE_2__ ;
typedef struct TYPE_55__ TYPE_29__ ;
typedef struct TYPE_54__ TYPE_28__ ;
typedef struct TYPE_53__ TYPE_27__ ;
typedef struct TYPE_52__ TYPE_26__ ;
typedef struct TYPE_51__ TYPE_25__ ;
typedef struct TYPE_50__ TYPE_24__ ;
typedef struct TYPE_49__ TYPE_23__ ;
typedef struct TYPE_48__ TYPE_22__ ;
typedef struct TYPE_47__ TYPE_21__ ;
typedef struct TYPE_46__ TYPE_20__ ;
typedef struct TYPE_45__ TYPE_1__ ;
typedef struct TYPE_44__ TYPE_19__ ;
typedef struct TYPE_43__ TYPE_18__ ;
typedef struct TYPE_42__ TYPE_17__ ;
typedef struct TYPE_41__ TYPE_16__ ;
typedef struct TYPE_40__ TYPE_15__ ;
typedef struct TYPE_39__ TYPE_14__ ;
typedef struct TYPE_38__ TYPE_13__ ;
typedef struct TYPE_37__ TYPE_12__ ;
typedef struct TYPE_36__ TYPE_11__ ;
typedef struct TYPE_35__ TYPE_10__ ;


struct TYPE_61__ {int vupdate_width; int vupdate_offset; int vstartup_start; } ;
struct TYPE_54__ {int height; int width; } ;
struct TYPE_52__ {int depth; } ;
struct TYPE_50__ {double value; } ;
struct TYPE_43__ {double value; } ;
struct TYPE_51__ {TYPE_24__ v_c; TYPE_18__ v; } ;
struct TYPE_48__ {double value; } ;
struct TYPE_47__ {double value; } ;
struct TYPE_42__ {double value; } ;
struct TYPE_41__ {double value; } ;
struct TYPE_49__ {TYPE_22__ vert_c; TYPE_21__ horz_c; TYPE_17__ vert; TYPE_16__ horz; } ;
struct TYPE_46__ {int h_taps_c; int v_taps_c; int v_taps; int h_taps; } ;
struct TYPE_36__ {int width; int height; } ;
struct TYPE_55__ {TYPE_28__ recout; TYPE_26__ lb_params; TYPE_25__ inits; TYPE_23__ ratios; TYPE_20__ taps; TYPE_11__ viewport; } ;
struct TYPE_57__ {TYPE_29__ scl_data; TYPE_9__* dpp; } ;
struct pipe_ctx {TYPE_34__ pipe_dlg_param; TYPE_32__* stream; TYPE_30__ plane_res; TYPE_14__* plane_state; TYPE_2__* bottom_pipe; TYPE_1__* top_pipe; } ;
struct TYPE_60__ {double pixel_rate_mhz; int vupdate_width; int vupdate_offset; int vstartup_start; scalar_t__ vblank_start; scalar_t__ vblank_end; scalar_t__ vtotal; scalar_t__ hblank_start; scalar_t__ hblank_end; scalar_t__ htotal; int full_recout_height; int full_recout_width; int recout_height; int recout_width; scalar_t__ vactive; } ;
struct TYPE_53__ {double hscl_ratio; double vscl_ratio; double vinit; double hscl_ratio_c; double vscl_ratio_c; double vinit_c; int lb_depth; } ;
struct TYPE_44__ {int htaps_c; int vtaps_c; int vtaps; int htaps; } ;
struct TYPE_40__ {int is_hsplit; int dcc; int dcc_rate; int viewport_width; int viewport_height; int data_pitch; int data_pitch_c; int cur0_src_width; int cur0_bpp; int viewport_width_c; int viewport_height_c; int source_format; void* source_scan; int macro_tile_size; int sw_mode; int meta_pitch; } ;
struct _vcs_dpi_display_pipe_params_st {TYPE_33__ dest; TYPE_27__ scale_ratio_depth; TYPE_19__ scale_taps; TYPE_15__ src; } ;
struct TYPE_68__ {TYPE_8__* ctx; } ;
struct TYPE_67__ {TYPE_7__* dc; } ;
struct TYPE_62__ {scalar_t__ optimized_watermark; } ;
struct TYPE_66__ {TYPE_6__* res_pool; TYPE_3__ debug; } ;
struct TYPE_65__ {TYPE_5__* hubbub; } ;
struct TYPE_64__ {TYPE_4__* funcs; } ;
struct TYPE_63__ {scalar_t__ (* dcc_support_pixel_format ) (int,unsigned int*) ;} ;
struct TYPE_58__ {double pix_clk_100hz; scalar_t__ v_border_top; scalar_t__ v_border_bottom; scalar_t__ v_addressable; scalar_t__ v_front_porch; scalar_t__ v_total; scalar_t__ h_border_right; scalar_t__ h_border_left; scalar_t__ h_addressable; scalar_t__ h_front_porch; scalar_t__ h_total; } ;
struct TYPE_59__ {TYPE_31__ timing; } ;
struct TYPE_56__ {TYPE_14__* plane_state; } ;
struct TYPE_45__ {TYPE_14__* plane_state; } ;
struct TYPE_37__ {int swizzle; } ;
struct TYPE_38__ {TYPE_12__ gfx9; } ;
struct TYPE_35__ {int meta_pitch; scalar_t__ enable; } ;
struct TYPE_39__ {int format; int rotation; TYPE_13__ tiling_info; TYPE_10__ dcc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_1 (int,unsigned int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 (
  const struct pipe_ctx *VAR_6,
  struct _vcs_dpi_display_pipe_params_st *VAR_7)
{
 VAR_7->src.is_hsplit = 0;
 if (VAR_6->top_pipe != ((void*)0) && VAR_6->top_pipe->plane_state == VAR_6->plane_state)
  VAR_7->src.is_hsplit = 1;
 else if (VAR_6->bottom_pipe != ((void*)0) && VAR_6->bottom_pipe->plane_state == VAR_6->plane_state)
  VAR_7->src.is_hsplit = 1;

 if (VAR_6->plane_res.dpp->ctx->dc->debug.optimized_watermark) {




  VAR_7->src.dcc = VAR_6->plane_state->dcc.enable ? 1 : 0;
 } else {






  unsigned int VAR_8;

  VAR_7->src.dcc = VAR_6->plane_res.dpp->ctx->dc->res_pool->hubbub->funcs->
   dcc_support_pixel_format(VAR_6->plane_state->format, &VAR_8) ? 1 : 0;
 }
 VAR_7->src.dcc_rate = 1;
 VAR_7->src.meta_pitch = VAR_6->plane_state->dcc.meta_pitch;
 VAR_7->src.source_scan = VAR_4;
 VAR_7->src.sw_mode = VAR_6->plane_state->tiling_info.gfx9.swizzle;

 VAR_7->src.viewport_width = VAR_6->plane_res.scl_data.viewport.width;
 VAR_7->src.viewport_height = VAR_6->plane_res.scl_data.viewport.height;
 VAR_7->src.data_pitch = VAR_6->plane_res.scl_data.viewport.width;
 VAR_7->src.data_pitch_c = VAR_6->plane_res.scl_data.viewport.width;
 VAR_7->src.cur0_src_width = 128;
 VAR_7->src.cur0_bpp = 32;

 VAR_7->src.macro_tile_size = FUNC_2(VAR_6->plane_state->tiling_info.gfx9.swizzle);

 switch (VAR_6->plane_state->rotation) {
 case 138:
 case 137:
  VAR_7->src.source_scan = VAR_4;
  break;
 case 135:
 case 136:
  VAR_7->src.source_scan = VAR_5;
  break;
 default:
  FUNC_0(0);
  break;
 }


 switch (VAR_6->plane_state->format) {
 case 129:
 case 128:
  VAR_7->src.source_format = VAR_1;
  VAR_7->src.viewport_width_c = VAR_7->src.viewport_width / 2;
  VAR_7->src.viewport_height_c = VAR_7->src.viewport_height / 2;
  break;
 case 131:
 case 130:
  VAR_7->src.source_format = VAR_0;
  VAR_7->src.viewport_width_c = VAR_7->src.viewport_width / 2;
  VAR_7->src.viewport_height_c = VAR_7->src.viewport_height / 2;
  break;
 case 133:
 case 132:
 case 134:
  VAR_7->src.source_format = VAR_3;
  VAR_7->src.viewport_width_c = VAR_7->src.viewport_width;
  VAR_7->src.viewport_height_c = VAR_7->src.viewport_height;
  break;
 default:
  VAR_7->src.source_format = VAR_2;
  VAR_7->src.viewport_width_c = VAR_7->src.viewport_width;
  VAR_7->src.viewport_height_c = VAR_7->src.viewport_height;
  break;
 }

 VAR_7->scale_taps.htaps = VAR_6->plane_res.scl_data.taps.h_taps;
 VAR_7->scale_ratio_depth.hscl_ratio = VAR_6->plane_res.scl_data.ratios.horz.value/4294967296.0;
 VAR_7->scale_ratio_depth.vscl_ratio = VAR_6->plane_res.scl_data.ratios.vert.value/4294967296.0;
 VAR_7->scale_ratio_depth.vinit = VAR_6->plane_res.scl_data.inits.v.value/4294967296.0;
 if (VAR_7->scale_ratio_depth.vinit < 1.0)
   VAR_7->scale_ratio_depth.vinit = 1;
 VAR_7->scale_taps.vtaps = VAR_6->plane_res.scl_data.taps.v_taps;
 VAR_7->scale_taps.vtaps_c = VAR_6->plane_res.scl_data.taps.v_taps_c;
 VAR_7->scale_taps.htaps_c = VAR_6->plane_res.scl_data.taps.h_taps_c;
 VAR_7->scale_ratio_depth.hscl_ratio_c = VAR_6->plane_res.scl_data.ratios.horz_c.value/4294967296.0;
 VAR_7->scale_ratio_depth.vscl_ratio_c = VAR_6->plane_res.scl_data.ratios.vert_c.value/4294967296.0;
 VAR_7->scale_ratio_depth.vinit_c = VAR_6->plane_res.scl_data.inits.v_c.value/4294967296.0;
 if (VAR_7->scale_ratio_depth.vinit_c < 1.0)
   VAR_7->scale_ratio_depth.vinit_c = 1;
 switch (VAR_6->plane_res.scl_data.lb_params.depth) {
 case 140:
  VAR_7->scale_ratio_depth.lb_depth = 30; break;
 case 139:
  VAR_7->scale_ratio_depth.lb_depth = 36; break;
 default:
  VAR_7->scale_ratio_depth.lb_depth = 24; break;
 }


 VAR_7->dest.vactive = VAR_6->stream->timing.v_addressable + VAR_6->stream->timing.v_border_top
   + VAR_6->stream->timing.v_border_bottom;

 VAR_7->dest.recout_width = VAR_6->plane_res.scl_data.recout.width;
 VAR_7->dest.recout_height = VAR_6->plane_res.scl_data.recout.height;

 VAR_7->dest.full_recout_width = VAR_6->plane_res.scl_data.recout.width;
 VAR_7->dest.full_recout_height = VAR_6->plane_res.scl_data.recout.height;

 VAR_7->dest.htotal = VAR_6->stream->timing.h_total;
 VAR_7->dest.hblank_start = VAR_7->dest.htotal - VAR_6->stream->timing.h_front_porch;
 VAR_7->dest.hblank_end = VAR_7->dest.hblank_start
   - VAR_6->stream->timing.h_addressable
   - VAR_6->stream->timing.h_border_left
   - VAR_6->stream->timing.h_border_right;

 VAR_7->dest.vtotal = VAR_6->stream->timing.v_total;
 VAR_7->dest.vblank_start = VAR_7->dest.vtotal - VAR_6->stream->timing.v_front_porch;
 VAR_7->dest.vblank_end = VAR_7->dest.vblank_start
   - VAR_6->stream->timing.v_addressable
   - VAR_6->stream->timing.v_border_bottom
   - VAR_6->stream->timing.v_border_top;
 VAR_7->dest.pixel_rate_mhz = VAR_6->stream->timing.pix_clk_100hz/10000.0;
 VAR_7->dest.vstartup_start = VAR_6->pipe_dlg_param.vstartup_start;
 VAR_7->dest.vupdate_offset = VAR_6->pipe_dlg_param.vupdate_offset;
 VAR_7->dest.vupdate_offset = VAR_6->pipe_dlg_param.vupdate_offset;
 VAR_7->dest.vupdate_width = VAR_6->pipe_dlg_param.vupdate_width;

}
