
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dpu_hw_scaler3_cfg {size_t* phase_step_x; size_t* phase_step_y; size_t* src_width; size_t* src_height; size_t* num_ext_pxls_top; size_t* num_ext_pxls_left; size_t dst_width; size_t dst_height; int blend_cfg; int enable; scalar_t__ lut_flag; int alpha_filter_cfg; void* uv_filter_cfg; void* y_rgb_filter_cfg; int * preload_y; int * preload_x; } ;
struct dpu_plane_state {struct dpu_hw_scaler3_cfg pixel_ext; } ;
struct dpu_plane {int dummy; } ;
struct dpu_hw_pixel_ext {int dummy; } ;
struct dpu_format {int dummy; } ;


 int FUNC_0 (struct dpu_format const*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct dpu_hw_scaler3_cfg*,int ,int) ;
 void* FUNC_2 (int,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(struct dpu_plane *VAR_10,
  struct dpu_plane_state *VAR_11,
  uint32_t VAR_12, uint32_t VAR_13, uint32_t VAR_14, uint32_t VAR_15,
  struct dpu_hw_scaler3_cfg *VAR_16,
  const struct dpu_format *VAR_17,
  uint32_t VAR_18, uint32_t VAR_19)
{
 uint32_t VAR_20;

 FUNC_1(VAR_16, 0, sizeof(*VAR_16));
 FUNC_1(&VAR_11->pixel_ext, 0, sizeof(struct dpu_hw_pixel_ext));

 VAR_16->phase_step_x[VAR_5] =
  FUNC_2((1 << VAR_9), VAR_12, VAR_14);
 VAR_16->phase_step_y[VAR_5] =
  FUNC_2((1 << VAR_9), VAR_13, VAR_15);


 VAR_16->phase_step_y[VAR_6] =
  VAR_16->phase_step_y[VAR_5] / VAR_19;
 VAR_16->phase_step_x[VAR_6] =
  VAR_16->phase_step_x[VAR_5] / VAR_18;

 VAR_16->phase_step_x[VAR_7] =
  VAR_16->phase_step_x[VAR_6];
 VAR_16->phase_step_y[VAR_7] =
  VAR_16->phase_step_y[VAR_6];

 VAR_16->phase_step_x[VAR_8] =
  VAR_16->phase_step_x[VAR_5];
 VAR_16->phase_step_y[VAR_8] =
  VAR_16->phase_step_y[VAR_5];

 for (VAR_20 = 0; VAR_20 < VAR_0; VAR_20++) {
  VAR_16->src_width[VAR_20] = VAR_12;
  VAR_16->src_height[VAR_20] = VAR_13;
  if (VAR_20 == VAR_6 || VAR_20 == VAR_7) {
   VAR_16->src_width[VAR_20] /= VAR_18;
   VAR_16->src_height[VAR_20] /= VAR_19;
  }
  VAR_16->preload_x[VAR_20] = VAR_1;
  VAR_16->preload_y[VAR_20] = VAR_2;
  VAR_11->pixel_ext.num_ext_pxls_top[VAR_20] =
   VAR_16->src_height[VAR_20];
  VAR_11->pixel_ext.num_ext_pxls_left[VAR_20] =
   VAR_16->src_width[VAR_20];
 }
 if (!(FUNC_0(VAR_17)) && (VAR_13 == VAR_15)
  && (VAR_12 == VAR_14))
  return;

 VAR_16->dst_width = VAR_14;
 VAR_16->dst_height = VAR_15;
 VAR_16->y_rgb_filter_cfg = VAR_4;
 VAR_16->uv_filter_cfg = VAR_4;
 VAR_16->alpha_filter_cfg = VAR_3;
 VAR_16->lut_flag = 0;
 VAR_16->blend_cfg = 1;
 VAR_16->enable = 1;
}
