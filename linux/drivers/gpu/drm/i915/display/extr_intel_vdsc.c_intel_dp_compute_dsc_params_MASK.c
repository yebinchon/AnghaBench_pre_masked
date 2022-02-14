
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


typedef scalar_t__ u8 ;
typedef int u16 ;
struct intel_dp {int* dsc_dpcd; } ;
struct TYPE_9__ {int compressed_bpp; int slice_count; } ;
struct TYPE_7__ {int crtc_vdisplay; int crtc_hdisplay; } ;
struct TYPE_8__ {TYPE_1__ adjusted_mode; } ;
struct drm_dsc_config {int pic_height; int slice_height; int dsc_version_major; int dsc_version_minor; int convert_rgb; int simple_422; int vbr_enable; int block_pred_enable; int bits_per_pixel; int bits_per_component; int* rc_buf_thresh; int initial_offset; int rc_model_size; int initial_scale_value; int mux_word_size; TYPE_4__* rc_range_params; int rc_quant_incr_limit1; int rc_quant_incr_limit0; int flatness_max_qp; int flatness_min_qp; int initial_xmit_delay; int first_line_bpg_offset; scalar_t__ line_buf_depth; int pic_width; int slice_width; } ;
struct intel_crtc_state {int pipe_bpp; TYPE_3__ dsc_params; TYPE_2__ base; struct drm_dsc_config dp_dsc_cfg; } ;
struct TYPE_12__ {int initial_offset; TYPE_5__* rc_range_params; int rc_quant_incr_limit1; int rc_quant_incr_limit0; int flatness_max_qp; int flatness_min_qp; int initial_xmit_delay; int first_line_bpg_offset; } ;
struct TYPE_11__ {int range_bpg_offset; int range_max_qp; int range_min_qp; } ;
struct TYPE_10__ {int range_bpg_offset; int range_max_qp; int range_min_qp; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (struct drm_dsc_config*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int) ;
 int* VAR_20 ;
 TYPE_6__** VAR_21 ;

int FUNC_7(struct intel_dp *VAR_22,
    struct intel_crtc_state *VAR_23)
{
 struct drm_dsc_config *VAR_24 = &VAR_23->dp_dsc_cfg;
 u16 VAR_25 = VAR_23->dsc_params.compressed_bpp;
 u8 VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 u8 VAR_29 = 0;

 VAR_24->pic_width = VAR_23->base.adjusted_mode.crtc_hdisplay;
 VAR_24->pic_height = VAR_23->base.adjusted_mode.crtc_vdisplay;
 VAR_24->slice_width = FUNC_0(VAR_24->pic_width,
          VAR_23->dsc_params.slice_count);





 if (VAR_24->pic_height % 8 == 0)
  VAR_24->slice_height = 8;
 else if (VAR_24->pic_height % 4 == 0)
  VAR_24->slice_height = 4;
 else
  VAR_24->slice_height = 2;


 VAR_24->dsc_version_major =
  (VAR_22->dsc_dpcd[VAR_7 - VAR_9] &
   VAR_3) >> VAR_4;
 VAR_24->dsc_version_minor =
  FUNC_6(VAR_18,
      (VAR_22->dsc_dpcd[VAR_7 - VAR_9] &
       VAR_5) >> VAR_6);

 VAR_24->convert_rgb = VAR_22->dsc_dpcd[VAR_2 - VAR_9] &
  VAR_8;

 VAR_29 = FUNC_2(VAR_22->dsc_dpcd);
 if (!VAR_29) {
  FUNC_1("DSC Sink Line Buffer Depth invalid\n");
  return -VAR_19;
 }
 if (VAR_24->dsc_version_minor == 2)
  VAR_24->line_buf_depth = (VAR_29 == VAR_11) ?
   VAR_12 : VAR_29;
 else
  VAR_24->line_buf_depth = (VAR_29 > VAR_10) ?
   VAR_10 : VAR_29;


 VAR_24->simple_422 = 0;

 VAR_24->vbr_enable = 0;
 VAR_24->block_pred_enable =
   VAR_22->dsc_dpcd[VAR_1 - VAR_9] &
  VAR_0;


 VAR_24->bits_per_pixel = VAR_25 << 4;
 VAR_24->bits_per_component = VAR_23->pipe_bpp / 3;

 for (VAR_26 = 0; VAR_26 < VAR_15 - 1; VAR_26++) {





  VAR_24->rc_buf_thresh[VAR_26] = VAR_20[VAR_26] >> 6;
 }





 if (VAR_25 == 6) {
  VAR_24->rc_buf_thresh[12] = 0x7C;
  VAR_24->rc_buf_thresh[13] = 0x7D;
 }

 VAR_27 = FUNC_5(VAR_25);
 VAR_28 =
  FUNC_4(VAR_24->bits_per_component);

 if (VAR_27 < 0 || VAR_28 < 0)
  return -VAR_19;

 VAR_24->first_line_bpg_offset =
  VAR_21[VAR_27][VAR_28].first_line_bpg_offset;
 VAR_24->initial_xmit_delay =
  VAR_21[VAR_27][VAR_28].initial_xmit_delay;
 VAR_24->initial_offset =
  VAR_21[VAR_27][VAR_28].initial_offset;
 VAR_24->flatness_min_qp =
  VAR_21[VAR_27][VAR_28].flatness_min_qp;
 VAR_24->flatness_max_qp =
  VAR_21[VAR_27][VAR_28].flatness_max_qp;
 VAR_24->rc_quant_incr_limit0 =
  VAR_21[VAR_27][VAR_28].rc_quant_incr_limit0;
 VAR_24->rc_quant_incr_limit1 =
  VAR_21[VAR_27][VAR_28].rc_quant_incr_limit1;

 for (VAR_26 = 0; VAR_26 < VAR_15; VAR_26++) {
  VAR_24->rc_range_params[VAR_26].range_min_qp =
   VAR_21[VAR_27][VAR_28].rc_range_params[VAR_26].range_min_qp;
  VAR_24->rc_range_params[VAR_26].range_max_qp =
   VAR_21[VAR_27][VAR_28].rc_range_params[VAR_26].range_max_qp;




  VAR_24->rc_range_params[VAR_26].range_bpg_offset =
   VAR_21[VAR_27][VAR_28].rc_range_params[VAR_26].range_bpg_offset &
   VAR_16;
 }







 if (VAR_24->bits_per_component == 8 ||
     VAR_24->bits_per_component == 10)
  VAR_24->mux_word_size = VAR_14;
 else if (VAR_24->bits_per_component == 12)
  VAR_24->mux_word_size = VAR_13;


 VAR_24->rc_model_size = VAR_17;

 VAR_24->initial_scale_value = (VAR_24->rc_model_size << 3) /
  (VAR_24->rc_model_size - VAR_24->initial_offset);

 return FUNC_3(VAR_24);
}
