
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_22__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_19__ ;
typedef struct TYPE_31__ TYPE_18__ ;
typedef struct TYPE_30__ TYPE_17__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_27__ {int value; } ;
struct TYPE_26__ {int value; } ;
struct TYPE_28__ {TYPE_14__ vert; TYPE_13__ horz; } ;
struct TYPE_25__ {int h_taps; int v_taps; } ;
struct TYPE_24__ {int width; int height; } ;
struct TYPE_29__ {TYPE_15__ ratios; TYPE_12__ taps; TYPE_11__ viewport; } ;
struct TYPE_30__ {TYPE_16__ scl_data; } ;
struct pipe_ctx {TYPE_21__* stream; TYPE_22__* plane_state; TYPE_17__ plane_res; TYPE_10__* bottom_pipe; } ;
struct bw_calcs_data {int graphics_lb_bpc; int underlay_lb_bpc; int increase_voltage_to_support_mclk_switch; int* fbc_en; int* lpt_en; int* bytes_per_pixel; int* interlace_mode; int number_of_displays; void** stereo_mode; void** rotation_angle; void** v_scale_ratio; void** h_scale_ratio; void** v_taps; void** h_taps; void** src_height; void** src_width; void** pitch_in_pixels; void** pixel_rate; void** v_total; void** h_total; void* d1_underlay_mode; void* d0_underlay_mode; void* graphics_micro_tile_mode; void* underlay_micro_tile_mode; void* graphics_tiling_mode; void* underlay_tiling_mode; int panning_and_bezel_adjustment; int underlay_surface_type; } ;
struct TYPE_37__ {int surface_pitch; } ;
struct TYPE_44__ {int rotation; TYPE_2__ plane_size; } ;
struct TYPE_40__ {int value; } ;
struct TYPE_39__ {int value; } ;
struct TYPE_41__ {TYPE_5__ vert; TYPE_4__ horz; } ;
struct TYPE_38__ {int h_taps; int v_taps; } ;
struct TYPE_33__ {int height; int width; } ;
struct TYPE_42__ {TYPE_6__ ratios; TYPE_3__ taps; TYPE_1__ viewport; } ;
struct TYPE_43__ {TYPE_7__ scl_data; } ;
struct TYPE_36__ {int rotation; int format; int visible; } ;
struct TYPE_34__ {int h_total; int v_total; unsigned int pix_clk_100hz; scalar_t__ timing_3d_format; int h_addressable; int v_addressable; } ;
struct TYPE_32__ {int width; int height; } ;
struct TYPE_31__ {int width; int height; } ;
struct TYPE_35__ {TYPE_20__ timing; TYPE_19__ dst; TYPE_18__ src; } ;
struct TYPE_23__ {TYPE_9__* plane_state; TYPE_8__ plane_res; } ;


 int FUNC_0 (TYPE_22__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* FUNC_1 (unsigned int,int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(
 const struct pipe_ctx VAR_8[], int VAR_9, struct bw_calcs_data *VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13 = 0;

 VAR_10->underlay_surface_type = VAR_1;
 VAR_10->panning_and_bezel_adjustment = VAR_5;
 VAR_10->graphics_lb_bpc = 10;
 VAR_10->underlay_lb_bpc = 8;
 VAR_10->underlay_tiling_mode = VAR_6;
 VAR_10->graphics_tiling_mode = VAR_6;
 VAR_10->underlay_micro_tile_mode = VAR_3;
 VAR_10->graphics_micro_tile_mode = VAR_3;
 VAR_10->increase_voltage_to_support_mclk_switch = 1;


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  if (!VAR_8[VAR_11].stream || !VAR_8[VAR_11].bottom_pipe)
   continue;

  FUNC_0(VAR_8[VAR_11].plane_state);

  if (VAR_13 == 0) {
   if (!VAR_8[VAR_11].plane_state->visible)
    VAR_10->d0_underlay_mode = VAR_7;
   else
    VAR_10->d0_underlay_mode = VAR_2;
  } else {
   if (!VAR_8[VAR_11].plane_state->visible)
    VAR_10->d1_underlay_mode = VAR_7;
   else
    VAR_10->d1_underlay_mode = VAR_2;
  }

  VAR_10->fbc_en[VAR_13 + 4] = 0;
  VAR_10->lpt_en[VAR_13 + 4] = 0;
  VAR_10->h_total[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].stream->timing.h_total);
  VAR_10->v_total[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].stream->timing.v_total);
  VAR_10->pixel_rate[VAR_13 + 4] = FUNC_1(VAR_8[VAR_11].stream->timing.pix_clk_100hz, 10000);
  VAR_10->src_width[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].plane_res.scl_data.viewport.width);
  VAR_10->pitch_in_pixels[VAR_13 + 4] = VAR_10->src_width[VAR_13 + 4];
  VAR_10->src_height[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].plane_res.scl_data.viewport.height);
  VAR_10->h_taps[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].plane_res.scl_data.taps.h_taps);
  VAR_10->v_taps[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].plane_res.scl_data.taps.v_taps);
  VAR_10->h_scale_ratio[VAR_13 + 4] = FUNC_3(VAR_8[VAR_11].plane_res.scl_data.ratios.horz.value);
  VAR_10->v_scale_ratio[VAR_13 + 4] = FUNC_3(VAR_8[VAR_11].plane_res.scl_data.ratios.vert.value);
  switch (VAR_8[VAR_11].plane_state->rotation) {
  case 144:
   VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(0);
   break;
  case 141:
   VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(90);
   break;
  case 143:
   VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(180);
   break;
  case 142:
   VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(270);
   break;
  default:
   break;
  }
  switch (VAR_8[VAR_11].plane_state->format) {
  case 129:
  case 136:
  case 132:
   VAR_10->bytes_per_pixel[VAR_13 + 4] = 2;
   break;
  case 133:
  case 137:
  case 134:
  case 139:
  case 138:
  case 131:
  case 130:
   VAR_10->bytes_per_pixel[VAR_13 + 4] = 4;
   break;
  case 135:
  case 140:
   VAR_10->bytes_per_pixel[VAR_13 + 4] = 8;
   break;
  default:
   VAR_10->bytes_per_pixel[VAR_13 + 4] = 4;
   break;
  }
  VAR_10->interlace_mode[VAR_13 + 4] = 0;
  VAR_10->stereo_mode[VAR_13 + 4] = VAR_4;


  for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
   VAR_10->fbc_en[VAR_13 * 2 + VAR_12] = 0;
   VAR_10->lpt_en[VAR_13 * 2 + VAR_12] = 0;

   VAR_10->src_height[VAR_13 * 2 + VAR_12] = FUNC_2(VAR_8[VAR_11].bottom_pipe->plane_res.scl_data.viewport.height);
   VAR_10->src_width[VAR_13 * 2 + VAR_12] = FUNC_2(VAR_8[VAR_11].bottom_pipe->plane_res.scl_data.viewport.width);
   VAR_10->pitch_in_pixels[VAR_13 * 2 + VAR_12] = FUNC_2(
     VAR_8[VAR_11].bottom_pipe->plane_state->plane_size.surface_pitch);
   VAR_10->h_taps[VAR_13 * 2 + VAR_12] = FUNC_2(VAR_8[VAR_11].bottom_pipe->plane_res.scl_data.taps.h_taps);
   VAR_10->v_taps[VAR_13 * 2 + VAR_12] = FUNC_2(VAR_8[VAR_11].bottom_pipe->plane_res.scl_data.taps.v_taps);
   VAR_10->h_scale_ratio[VAR_13 * 2 + VAR_12] = FUNC_3(
     VAR_8[VAR_11].bottom_pipe->plane_res.scl_data.ratios.horz.value);
   VAR_10->v_scale_ratio[VAR_13 * 2 + VAR_12] = FUNC_3(
     VAR_8[VAR_11].bottom_pipe->plane_res.scl_data.ratios.vert.value);
   switch (VAR_8[VAR_11].bottom_pipe->plane_state->rotation) {
   case 144:
    VAR_10->rotation_angle[VAR_13 * 2 + VAR_12] = FUNC_2(0);
    break;
   case 141:
    VAR_10->rotation_angle[VAR_13 * 2 + VAR_12] = FUNC_2(90);
    break;
   case 143:
    VAR_10->rotation_angle[VAR_13 * 2 + VAR_12] = FUNC_2(180);
    break;
   case 142:
    VAR_10->rotation_angle[VAR_13 * 2 + VAR_12] = FUNC_2(270);
    break;
   default:
    break;
   }
   VAR_10->stereo_mode[VAR_13 * 2 + VAR_12] = VAR_4;
  }

  VAR_13++;
 }


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  unsigned int VAR_14;
  if (!VAR_8[VAR_11].stream || VAR_8[VAR_11].bottom_pipe)
   continue;


  VAR_10->fbc_en[VAR_13 + 4] = 0;
  VAR_10->lpt_en[VAR_13 + 4] = 0;
  VAR_10->h_total[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].stream->timing.h_total);
  VAR_10->v_total[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].stream->timing.v_total);
  VAR_14 = VAR_8[VAR_11].stream->timing.pix_clk_100hz;
  if (VAR_8[VAR_11].stream->timing.timing_3d_format == VAR_0)
   VAR_14 *= 2;
  VAR_10->pixel_rate[VAR_13 + 4] = FUNC_1(VAR_14, 10000);
  if (VAR_8[VAR_11].plane_state) {
   VAR_10->src_width[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].plane_res.scl_data.viewport.width);
   VAR_10->pitch_in_pixels[VAR_13 + 4] = VAR_10->src_width[VAR_13 + 4];
   VAR_10->src_height[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].plane_res.scl_data.viewport.height);
   VAR_10->h_taps[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].plane_res.scl_data.taps.h_taps);
   VAR_10->v_taps[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].plane_res.scl_data.taps.v_taps);
   VAR_10->h_scale_ratio[VAR_13 + 4] = FUNC_3(VAR_8[VAR_11].plane_res.scl_data.ratios.horz.value);
   VAR_10->v_scale_ratio[VAR_13 + 4] = FUNC_3(VAR_8[VAR_11].plane_res.scl_data.ratios.vert.value);
   switch (VAR_8[VAR_11].plane_state->rotation) {
   case 144:
    VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(0);
    break;
   case 141:
    VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(90);
    break;
   case 143:
    VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(180);
    break;
   case 142:
    VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(270);
    break;
   default:
    break;
   }
   switch (VAR_8[VAR_11].plane_state->format) {
   case 129:
   case 128:
   case 136:
   case 132:
    VAR_10->bytes_per_pixel[VAR_13 + 4] = 2;
    break;
   case 133:
   case 137:
   case 134:
   case 139:
   case 138:
   case 131:
   case 130:
    VAR_10->bytes_per_pixel[VAR_13 + 4] = 4;
    break;
   case 135:
   case 140:
    VAR_10->bytes_per_pixel[VAR_13 + 4] = 8;
    break;
   default:
    VAR_10->bytes_per_pixel[VAR_13 + 4] = 4;
    break;
   }
  } else if (VAR_8[VAR_11].stream->dst.width != 0 &&
     VAR_8[VAR_11].stream->dst.height != 0 &&
     VAR_8[VAR_11].stream->src.width != 0 &&
     VAR_8[VAR_11].stream->src.height != 0) {
   VAR_10->src_width[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].stream->src.width);
   VAR_10->pitch_in_pixels[VAR_13 + 4] = VAR_10->src_width[VAR_13 + 4];
   VAR_10->src_height[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].stream->src.height);
   VAR_10->h_taps[VAR_13 + 4] = VAR_8[VAR_11].stream->src.width == VAR_8[VAR_11].stream->dst.width ? FUNC_2(1) : FUNC_2(2);
   VAR_10->v_taps[VAR_13 + 4] = VAR_8[VAR_11].stream->src.height == VAR_8[VAR_11].stream->dst.height ? FUNC_2(1) : FUNC_2(2);
   VAR_10->h_scale_ratio[VAR_13 + 4] = FUNC_1(VAR_8[VAR_11].stream->src.width, VAR_8[VAR_11].stream->dst.width);
   VAR_10->v_scale_ratio[VAR_13 + 4] = FUNC_1(VAR_8[VAR_11].stream->src.height, VAR_8[VAR_11].stream->dst.height);
   VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(0);
   VAR_10->bytes_per_pixel[VAR_13 + 4] = 4;
  } else {
   VAR_10->src_width[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].stream->timing.h_addressable);
   VAR_10->pitch_in_pixels[VAR_13 + 4] = VAR_10->src_width[VAR_13 + 4];
   VAR_10->src_height[VAR_13 + 4] = FUNC_2(VAR_8[VAR_11].stream->timing.v_addressable);
   VAR_10->h_taps[VAR_13 + 4] = FUNC_2(1);
   VAR_10->v_taps[VAR_13 + 4] = FUNC_2(1);
   VAR_10->h_scale_ratio[VAR_13 + 4] = FUNC_2(1);
   VAR_10->v_scale_ratio[VAR_13 + 4] = FUNC_2(1);
   VAR_10->rotation_angle[VAR_13 + 4] = FUNC_2(0);
   VAR_10->bytes_per_pixel[VAR_13 + 4] = 4;
  }

  VAR_10->interlace_mode[VAR_13 + 4] = 0;
  VAR_10->stereo_mode[VAR_13 + 4] = VAR_4;
  VAR_13++;
 }

 VAR_10->number_of_displays = VAR_13;
}
