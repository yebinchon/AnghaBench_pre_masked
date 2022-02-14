
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_83__ TYPE_9__ ;
typedef struct TYPE_82__ TYPE_8__ ;
typedef struct TYPE_81__ TYPE_7__ ;
typedef struct TYPE_80__ TYPE_6__ ;
typedef struct TYPE_79__ TYPE_5__ ;
typedef struct TYPE_78__ TYPE_4__ ;
typedef struct TYPE_77__ TYPE_43__ ;
typedef struct TYPE_76__ TYPE_40__ ;
typedef struct TYPE_75__ TYPE_3__ ;
typedef struct TYPE_74__ TYPE_38__ ;
typedef struct TYPE_73__ TYPE_37__ ;
typedef struct TYPE_72__ TYPE_36__ ;
typedef struct TYPE_71__ TYPE_35__ ;
typedef struct TYPE_70__ TYPE_34__ ;
typedef struct TYPE_69__ TYPE_33__ ;
typedef struct TYPE_68__ TYPE_32__ ;
typedef struct TYPE_67__ TYPE_31__ ;
typedef struct TYPE_66__ TYPE_30__ ;
typedef struct TYPE_65__ TYPE_2__ ;
typedef struct TYPE_64__ TYPE_29__ ;
typedef struct TYPE_63__ TYPE_28__ ;
typedef struct TYPE_62__ TYPE_27__ ;
typedef struct TYPE_61__ TYPE_26__ ;
typedef struct TYPE_60__ TYPE_25__ ;
typedef struct TYPE_59__ TYPE_24__ ;
typedef struct TYPE_58__ TYPE_23__ ;
typedef struct TYPE_57__ TYPE_22__ ;
typedef struct TYPE_56__ TYPE_21__ ;
typedef struct TYPE_55__ TYPE_20__ ;
typedef struct TYPE_54__ TYPE_1__ ;
typedef struct TYPE_53__ TYPE_19__ ;
typedef struct TYPE_52__ TYPE_18__ ;
typedef struct TYPE_51__ TYPE_17__ ;
typedef struct TYPE_50__ TYPE_16__ ;
typedef struct TYPE_49__ TYPE_15__ ;
typedef struct TYPE_48__ TYPE_14__ ;
typedef struct TYPE_47__ TYPE_13__ ;
typedef struct TYPE_46__ TYPE_12__ ;
typedef struct TYPE_45__ TYPE_11__ ;
typedef struct TYPE_44__ TYPE_10__ ;


struct TYPE_67__ {int h_taps; int v_taps; int v_taps_c; int h_taps_c; } ;
struct TYPE_62__ {scalar_t__ value; } ;
struct TYPE_61__ {scalar_t__ value; } ;
struct TYPE_60__ {scalar_t__ value; } ;
struct TYPE_59__ {scalar_t__ value; } ;
struct TYPE_63__ {TYPE_27__ horz_c; TYPE_26__ vert_c; TYPE_25__ horz; TYPE_24__ vert; } ;
struct TYPE_46__ {int width; int height; } ;
struct TYPE_83__ {int height; int width; int y; } ;
struct TYPE_82__ {int width; int height; int y; } ;
struct scaler_data {TYPE_31__ taps; TYPE_28__ ratios; TYPE_12__ recout; TYPE_9__ viewport_c; TYPE_8__ viewport; } ;
struct resource_context {TYPE_22__* pipe_ctx; } ;
struct pipe_ctx {int pipe_idx; struct pipe_ctx* prev_odm_pipe; } ;
struct TYPE_68__ {int swizzle; } ;
struct TYPE_69__ {TYPE_32__ gfx9; } ;
struct TYPE_45__ {int enable; int meta_pitch; int meta_pitch_c; } ;
struct TYPE_44__ {int surface_pitch; int chroma_pitch; } ;
struct dc_plane_state {scalar_t__ rotation; int format; TYPE_33__ tiling_info; TYPE_11__ dcc; TYPE_10__ plane_size; int flip_immediate; } ;
struct TYPE_65__ {int INTERLACE; int DSC; } ;
struct TYPE_54__ {int num_slices_h; } ;
struct dc_crtc_timing {int v_total; int v_addressable; int v_border_top; int v_border_bottom; int h_total; int h_front_porch; int h_addressable; int h_border_left; int h_border_right; int v_front_porch; double pix_clk_100hz; scalar_t__ timing_3d_format; int display_color_depth; int pixel_encoding; TYPE_2__ flags; TYPE_1__ dsc_cfg; } ;
struct TYPE_64__ {scalar_t__ always_scale; } ;
struct dc {TYPE_37__* res_pool; TYPE_29__ debug; } ;
struct TYPE_70__ {int dynamic_metadata_enable; int dynamic_metadata_lines_before_active; int dynamic_metadata_xmit_bytes; int dcc; int dcc_rate; int num_cursors; int cur0_src_width; int cur1_src_width; int viewport_width; int viewport_height; int data_pitch; int is_hsplit; void* source_format; int sw_mode; int macro_tile_size; int meta_pitch; int meta_pitch_c; int data_pitch_c; int viewport_height_c; int viewport_width_c; int viewport_y_c; int viewport_y_y; void* source_scan; int immediate_flip; void* cur1_bpp; void* cur0_bpp; int hsplit_grp; } ;
struct TYPE_66__ {int htaps; int vtaps; int vtaps_c; int htaps_c; } ;
struct TYPE_58__ {double hscl_ratio; double vscl_ratio; int scl_enable; double hscl_ratio_c; double vscl_ratio_c; void* lb_depth; } ;
struct TYPE_51__ {int synchronized_vblank_all_planes; int hblank_start; int hblank_end; int vblank_start; int vblank_end; int htotal; int vtotal; int hactive; int vactive; double pixel_rate_mhz; int vtotal_min; int vtotal_max; int odm_combine; int recout_width; int recout_height; int full_recout_width; int full_recout_height; int otg_inst; int interlaced; } ;
struct TYPE_71__ {TYPE_34__ src; TYPE_30__ scale_taps; TYPE_23__ scale_ratio_depth; TYPE_17__ dest; } ;
struct TYPE_80__ {int dp_lanes; int output_bpp; int output_bpc; void* output_format; void* output_type; int dsc_slices; int dsc_enable; } ;
struct TYPE_74__ {TYPE_35__ pipe; TYPE_6__ dout; } ;
typedef TYPE_38__ display_e2e_pipe_params_st ;
struct TYPE_81__ {struct scaler_data scl_data; } ;
struct TYPE_79__ {int v_total_min; int v_total_max; } ;
struct TYPE_78__ {TYPE_3__* tg; } ;
struct TYPE_77__ {scalar_t__ value; } ;
struct TYPE_76__ {int signal; struct dc_crtc_timing timing; TYPE_5__ adjust; scalar_t__ use_dynamic_meta; } ;
struct TYPE_75__ {int inst; } ;
struct TYPE_73__ {int pipe_count; TYPE_36__* funcs; } ;
struct TYPE_72__ {int (* populate_dml_writeback_from_context ) (struct dc*,struct resource_context*,TYPE_38__*) ;} ;
struct TYPE_57__ {TYPE_21__* top_pipe; TYPE_16__* bottom_pipe; TYPE_7__ plane_res; struct dc_plane_state* plane_state; TYPE_40__* stream; struct pipe_ctx* prev_odm_pipe; int pipe_idx; scalar_t__ next_odm_pipe; TYPE_4__ stream_res; } ;
struct TYPE_52__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_53__ {TYPE_18__ recout; } ;
struct TYPE_55__ {TYPE_19__ scl_data; } ;
struct TYPE_56__ {TYPE_20__ plane_res; struct dc_plane_state* plane_state; int pipe_idx; } ;
struct TYPE_47__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_48__ {TYPE_13__ recout; } ;
struct TYPE_49__ {TYPE_14__ scl_data; } ;
struct TYPE_50__ {TYPE_15__ plane_res; struct dc_plane_state* plane_state; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_43__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int FUNC_1 (TYPE_40__*,TYPE_40__*) ;
 int FUNC_2 (struct dc*,struct resource_context*,TYPE_38__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(
  struct dc *VAR_24, struct resource_context *VAR_25, display_e2e_pipe_params_st *VAR_26)
{
 int VAR_27, VAR_28;
 bool VAR_29 = 1;

 for (VAR_28 = 0, VAR_27 = -1; VAR_28 < VAR_24->res_pool->pipe_count; VAR_28++) {
  if (!VAR_25->pipe_ctx[VAR_28].stream)
   continue;

  if (VAR_27 < 0) {
   VAR_27 = VAR_28;
   continue;
  }
  if (!FUNC_1(
    VAR_25->pipe_ctx[VAR_27].stream,
    VAR_25->pipe_ctx[VAR_28].stream)) {
   VAR_29 = 0;
   break;
  }
 }

 for (VAR_28 = 0, VAR_27 = 0; VAR_28 < VAR_24->res_pool->pipe_count; VAR_28++) {
  struct dc_crtc_timing *VAR_30 = &VAR_25->pipe_ctx[VAR_28].stream->timing;
  int VAR_31;

  if (!VAR_25->pipe_ctx[VAR_28].stream)
   continue;
  if (VAR_25->pipe_ctx[VAR_28].stream->use_dynamic_meta) {
   VAR_26[VAR_27].pipe.src.dynamic_metadata_enable = 1;

   VAR_26[VAR_27].pipe.src.dynamic_metadata_lines_before_active =
    (VAR_30->v_total - VAR_30->v_addressable
     - VAR_30->v_border_top - VAR_30->v_border_bottom) / 2;

   VAR_26[VAR_27].pipe.src.dynamic_metadata_xmit_bytes =
    FUNC_0(VAR_25->pipe_ctx[VAR_28].stream->signal) ? 36 : 32;
  }
  VAR_26[VAR_27].pipe.src.dcc = 0;
  VAR_26[VAR_27].pipe.src.dcc_rate = 1;
  VAR_26[VAR_27].pipe.dest.synchronized_vblank_all_planes = VAR_29;
  VAR_26[VAR_27].pipe.dest.hblank_start = VAR_30->h_total - VAR_30->h_front_porch;
  VAR_26[VAR_27].pipe.dest.hblank_end = VAR_26[VAR_27].pipe.dest.hblank_start
    - VAR_30->h_addressable
    - VAR_30->h_border_left
    - VAR_30->h_border_right;
  VAR_26[VAR_27].pipe.dest.vblank_start = VAR_30->v_total - VAR_30->v_front_porch;
  VAR_26[VAR_27].pipe.dest.vblank_end = VAR_26[VAR_27].pipe.dest.vblank_start
    - VAR_30->v_addressable
    - VAR_30->v_border_top
    - VAR_30->v_border_bottom;
  VAR_26[VAR_27].pipe.dest.htotal = VAR_30->h_total;
  VAR_26[VAR_27].pipe.dest.vtotal = VAR_30->v_total;
  VAR_26[VAR_27].pipe.dest.hactive = VAR_30->h_addressable;
  VAR_26[VAR_27].pipe.dest.vactive = VAR_30->v_addressable;
  VAR_26[VAR_27].pipe.dest.interlaced = VAR_30->flags.INTERLACE;
  VAR_26[VAR_27].pipe.dest.pixel_rate_mhz = VAR_30->pix_clk_100hz/10000.0;
  if (VAR_30->timing_3d_format == VAR_3)
   VAR_26[VAR_27].pipe.dest.pixel_rate_mhz *= 2;
  VAR_26[VAR_27].pipe.dest.otg_inst = VAR_25->pipe_ctx[VAR_28].stream_res.tg->inst;
  VAR_26[VAR_27].dout.dp_lanes = 4;
  VAR_26[VAR_27].pipe.dest.vtotal_min = VAR_25->pipe_ctx[VAR_28].stream->adjust.v_total_min;
  VAR_26[VAR_27].pipe.dest.vtotal_max = VAR_25->pipe_ctx[VAR_28].stream->adjust.v_total_max;
  VAR_26[VAR_27].pipe.dest.odm_combine = VAR_25->pipe_ctx[VAR_28].prev_odm_pipe
       || VAR_25->pipe_ctx[VAR_28].next_odm_pipe;
  VAR_26[VAR_27].pipe.src.hsplit_grp = VAR_25->pipe_ctx[VAR_28].pipe_idx;
  if (VAR_25->pipe_ctx[VAR_28].top_pipe && VAR_25->pipe_ctx[VAR_28].top_pipe->plane_state
    == VAR_25->pipe_ctx[VAR_28].plane_state)
   VAR_26[VAR_27].pipe.src.hsplit_grp = VAR_25->pipe_ctx[VAR_28].top_pipe->pipe_idx;
  else if (VAR_25->pipe_ctx[VAR_28].prev_odm_pipe) {
   struct pipe_ctx *VAR_32 = VAR_25->pipe_ctx[VAR_28].prev_odm_pipe;

   while (VAR_32->prev_odm_pipe)
    VAR_32 = VAR_32->prev_odm_pipe;
   VAR_26[VAR_27].pipe.src.hsplit_grp = VAR_32->pipe_idx;
  }

  switch (VAR_25->pipe_ctx[VAR_28].stream->signal) {
  case 142:
  case 143:
   VAR_26[VAR_27].dout.output_type = VAR_15;
   break;
  case 139:
   VAR_26[VAR_27].dout.output_type = VAR_16;
   break;
  case 138:
  case 140:
  case 141:
   VAR_26[VAR_27].dout.output_type = VAR_17;
   break;
  default:

   VAR_26[VAR_27].dout.output_type = VAR_15;
   VAR_26[VAR_27].dout.dp_lanes = 4;
  }

  switch (VAR_25->pipe_ctx[VAR_28].stream->timing.display_color_depth) {
  case 150:
   VAR_31 = 6;
   break;
  case 149:
   VAR_31 = 8;
   break;
  case 155:
   VAR_31 = 10;
   break;
  case 153:
   VAR_31 = 12;
   break;
  case 152:
   VAR_31 = 14;
   break;
  case 151:
   VAR_31 = 16;
   break;
  default:
   VAR_31 = 8;
   break;
  }

  switch (VAR_25->pipe_ctx[VAR_28].stream->timing.pixel_encoding) {
  case 147:
  case 144:
   VAR_26[VAR_27].dout.output_format = VAR_8;
   VAR_26[VAR_27].dout.output_bpp = VAR_31 * 3;
   break;
  case 146:
   VAR_26[VAR_27].dout.output_format = VAR_5;
   VAR_26[VAR_27].dout.output_bpp = (VAR_31 * 3) / 2;
   break;
  case 145:
   if (1)
    VAR_26[VAR_27].dout.output_format = VAR_21;
   else
    VAR_26[VAR_27].dout.output_format = VAR_20;
   VAR_26[VAR_27].dout.output_bpp = VAR_31 * 2;
   break;
  default:
   VAR_26[VAR_27].dout.output_format = VAR_8;
   VAR_26[VAR_27].dout.output_bpp = VAR_31 * 3;
  }


  VAR_26[VAR_27].dout.output_bpc = 12;




  VAR_26[VAR_27].pipe.src.num_cursors = 2;
  VAR_26[VAR_27].pipe.src.cur0_src_width = 256;
  VAR_26[VAR_27].pipe.src.cur0_bpp = VAR_14;
  VAR_26[VAR_27].pipe.src.cur1_src_width = 256;
  VAR_26[VAR_27].pipe.src.cur1_bpp = VAR_14;

  if (!VAR_25->pipe_ctx[VAR_28].plane_state) {
   VAR_26[VAR_27].pipe.src.source_scan = VAR_18;
   VAR_26[VAR_27].pipe.src.sw_mode = VAR_22;
   VAR_26[VAR_27].pipe.src.macro_tile_size = VAR_13;
   VAR_26[VAR_27].pipe.src.viewport_width = VAR_30->h_addressable;
   if (VAR_26[VAR_27].pipe.src.viewport_width > 1920)
    VAR_26[VAR_27].pipe.src.viewport_width = 1920;
   VAR_26[VAR_27].pipe.src.viewport_height = VAR_30->v_addressable;
   if (VAR_26[VAR_27].pipe.src.viewport_height > 1080)
    VAR_26[VAR_27].pipe.src.viewport_height = 1080;
   VAR_26[VAR_27].pipe.src.data_pitch = ((VAR_26[VAR_27].pipe.src.viewport_width + 63) / 64) * 64;
   VAR_26[VAR_27].pipe.src.source_format = VAR_10;
   VAR_26[VAR_27].pipe.dest.recout_width = VAR_26[VAR_27].pipe.src.viewport_width;
   VAR_26[VAR_27].pipe.dest.recout_height = VAR_26[VAR_27].pipe.src.viewport_height;
   VAR_26[VAR_27].pipe.dest.full_recout_width = VAR_26[VAR_27].pipe.dest.recout_width;
   VAR_26[VAR_27].pipe.dest.full_recout_height = VAR_26[VAR_27].pipe.dest.recout_height;
   VAR_26[VAR_27].pipe.scale_ratio_depth.lb_depth = VAR_19;
   VAR_26[VAR_27].pipe.scale_ratio_depth.hscl_ratio = 1.0;
   VAR_26[VAR_27].pipe.scale_ratio_depth.vscl_ratio = 1.0;
   VAR_26[VAR_27].pipe.scale_ratio_depth.scl_enable = 0;
   VAR_26[VAR_27].pipe.scale_taps.htaps = 1;
   VAR_26[VAR_27].pipe.scale_taps.vtaps = 1;
   VAR_26[VAR_27].pipe.src.is_hsplit = 0;
   VAR_26[VAR_27].pipe.dest.odm_combine = 0;
   VAR_26[VAR_27].pipe.dest.vtotal_min = VAR_30->v_total;
   VAR_26[VAR_27].pipe.dest.vtotal_max = VAR_30->v_total;
  } else {
   struct dc_plane_state *VAR_33 = VAR_25->pipe_ctx[VAR_28].plane_state;
   struct scaler_data *VAR_34 = &VAR_25->pipe_ctx[VAR_28].plane_res.scl_data;

   VAR_26[VAR_27].pipe.src.immediate_flip = VAR_33->flip_immediate;
   VAR_26[VAR_27].pipe.src.is_hsplit = (VAR_25->pipe_ctx[VAR_28].bottom_pipe
     && VAR_25->pipe_ctx[VAR_28].bottom_pipe->plane_state == VAR_33)
     || (VAR_25->pipe_ctx[VAR_28].top_pipe
     && VAR_25->pipe_ctx[VAR_28].top_pipe->plane_state == VAR_33);
   VAR_26[VAR_27].pipe.src.source_scan = VAR_33->rotation == VAR_1
     || VAR_33->rotation == VAR_0 ? VAR_23 : VAR_18;
   VAR_26[VAR_27].pipe.src.viewport_y_y = VAR_34->viewport.y;
   VAR_26[VAR_27].pipe.src.viewport_y_c = VAR_34->viewport_c.y;
   VAR_26[VAR_27].pipe.src.viewport_width = VAR_34->viewport.width;
   VAR_26[VAR_27].pipe.src.viewport_width_c = VAR_34->viewport_c.width;
   VAR_26[VAR_27].pipe.src.viewport_height = VAR_34->viewport.height;
   VAR_26[VAR_27].pipe.src.viewport_height_c = VAR_34->viewport_c.height;
   if (VAR_33->format >= VAR_2) {
    VAR_26[VAR_27].pipe.src.data_pitch = VAR_33->plane_size.surface_pitch;
    VAR_26[VAR_27].pipe.src.data_pitch_c = VAR_33->plane_size.chroma_pitch;
    VAR_26[VAR_27].pipe.src.meta_pitch = VAR_33->dcc.meta_pitch;
    VAR_26[VAR_27].pipe.src.meta_pitch_c = VAR_33->dcc.meta_pitch_c;
   } else {
    VAR_26[VAR_27].pipe.src.data_pitch = VAR_33->plane_size.surface_pitch;
    VAR_26[VAR_27].pipe.src.meta_pitch = VAR_33->dcc.meta_pitch;
   }
   VAR_26[VAR_27].pipe.src.dcc = VAR_33->dcc.enable;
   VAR_26[VAR_27].pipe.dest.recout_width = VAR_34->recout.width;
   VAR_26[VAR_27].pipe.dest.recout_height = VAR_34->recout.height;
   VAR_26[VAR_27].pipe.dest.full_recout_width = VAR_34->recout.width;
   VAR_26[VAR_27].pipe.dest.full_recout_height = VAR_34->recout.height;
   if (VAR_25->pipe_ctx[VAR_28].bottom_pipe && VAR_25->pipe_ctx[VAR_28].bottom_pipe->plane_state == VAR_33) {
    VAR_26[VAR_27].pipe.dest.full_recout_width +=
      VAR_25->pipe_ctx[VAR_28].bottom_pipe->plane_res.scl_data.recout.width;
    VAR_26[VAR_27].pipe.dest.full_recout_height +=
      VAR_25->pipe_ctx[VAR_28].bottom_pipe->plane_res.scl_data.recout.height;
   } else if (VAR_25->pipe_ctx[VAR_28].top_pipe && VAR_25->pipe_ctx[VAR_28].top_pipe->plane_state == VAR_33) {
    VAR_26[VAR_27].pipe.dest.full_recout_width +=
      VAR_25->pipe_ctx[VAR_28].top_pipe->plane_res.scl_data.recout.width;
    VAR_26[VAR_27].pipe.dest.full_recout_height +=
      VAR_25->pipe_ctx[VAR_28].top_pipe->plane_res.scl_data.recout.height;
   }

   VAR_26[VAR_27].pipe.scale_ratio_depth.lb_depth = VAR_19;
   VAR_26[VAR_27].pipe.scale_ratio_depth.hscl_ratio = (double) VAR_34->ratios.horz.value / (1ULL<<32);
   VAR_26[VAR_27].pipe.scale_ratio_depth.hscl_ratio_c = (double) VAR_34->ratios.horz_c.value / (1ULL<<32);
   VAR_26[VAR_27].pipe.scale_ratio_depth.vscl_ratio = (double) VAR_34->ratios.vert.value / (1ULL<<32);
   VAR_26[VAR_27].pipe.scale_ratio_depth.vscl_ratio_c = (double) VAR_34->ratios.vert_c.value / (1ULL<<32);
   VAR_26[VAR_27].pipe.scale_ratio_depth.scl_enable =
     VAR_34->ratios.vert.value != VAR_4.value
     || VAR_34->ratios.horz.value != VAR_4.value
     || VAR_34->ratios.vert_c.value != VAR_4.value
     || VAR_34->ratios.horz_c.value != VAR_4.value
     || VAR_24->debug.always_scale;
   VAR_26[VAR_27].pipe.scale_taps.htaps = VAR_34->taps.h_taps;
   VAR_26[VAR_27].pipe.scale_taps.htaps_c = VAR_34->taps.h_taps_c;
   VAR_26[VAR_27].pipe.scale_taps.vtaps = VAR_34->taps.v_taps;
   VAR_26[VAR_27].pipe.scale_taps.vtaps_c = VAR_34->taps.v_taps_c;

   VAR_26[VAR_27].pipe.src.macro_tile_size =
     FUNC_3(VAR_33->tiling_info.gfx9.swizzle);
   FUNC_4(VAR_33->tiling_info.gfx9.swizzle,
     &VAR_26[VAR_27].pipe.src.sw_mode);

   switch (VAR_33->format) {
   case 129:
   case 128:
    VAR_26[VAR_27].pipe.src.source_format = VAR_7;
    break;
   case 131:
   case 130:
    VAR_26[VAR_27].pipe.src.source_format = VAR_6;
    break;
   case 135:
   case 134:
   case 137:
    VAR_26[VAR_27].pipe.src.source_format = VAR_11;
    break;
   case 136:
   case 132:
    VAR_26[VAR_27].pipe.src.source_format = VAR_9;
    break;
   case 133:
    VAR_26[VAR_27].pipe.src.source_format = VAR_12;
    break;
   default:
    VAR_26[VAR_27].pipe.src.source_format = VAR_10;
    break;
   }
  }

  VAR_27++;
 }


 VAR_24->res_pool->funcs->populate_dml_writeback_from_context(VAR_24, VAR_25, VAR_26);

 return VAR_27;
}
