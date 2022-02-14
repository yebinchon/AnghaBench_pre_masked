
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ enable; } ;
struct dpu_hw_scaler3_cfg {int y_rgb_filter_cfg; int uv_filter_cfg; int blend_cfg; int* preload_x; int* preload_y; int* src_width; int* src_height; int dst_width; int dst_height; int* init_phase_x; int* init_phase_y; int* phase_step_x; int* phase_step_y; int alpha_filter_cfg; scalar_t__ lut_flag; TYPE_1__ de; scalar_t__ dir_en; int enable; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_format {scalar_t__ alpha_enable; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dpu_format const*) ;
 scalar_t__ FUNC_2 (struct dpu_format const*) ;
 int FUNC_3 (struct dpu_hw_blk_reg_map*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct dpu_hw_blk_reg_map*,TYPE_1__*,int) ;
 int FUNC_5 (struct dpu_hw_blk_reg_map*,struct dpu_hw_scaler3_cfg*,int) ;

void FUNC_6(struct dpu_hw_blk_reg_map *VAR_14,
  struct dpu_hw_scaler3_cfg *VAR_15,
  u32 VAR_16, u32 VAR_17,
  const struct dpu_format *VAR_18)
{
 u32 VAR_19 = 0;
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

 if (!VAR_15->enable)
  goto end;

 VAR_19 |= FUNC_0(0);
 VAR_19 |= (VAR_15->y_rgb_filter_cfg & 0x3) << 16;

 if (VAR_18 && FUNC_2(VAR_18)) {
  VAR_19 |= FUNC_0(12);
  VAR_19 |= (VAR_15->uv_filter_cfg & 0x3) << 24;
 }

 VAR_19 |= (VAR_15->blend_cfg & 1) << 31;
 VAR_19 |= (VAR_15->dir_en) ? FUNC_0(4) : 0;

 VAR_21 =
  ((VAR_15->preload_x[0] & 0x7F) << 0) |
  ((VAR_15->preload_y[0] & 0x7F) << 8) |
  ((VAR_15->preload_x[1] & 0x7F) << 16) |
  ((VAR_15->preload_y[1] & 0x7F) << 24);

 VAR_22 = (VAR_15->src_width[0] & 0x1FFFF) |
  ((VAR_15->src_height[0] & 0x1FFFF) << 16);

 VAR_23 = (VAR_15->src_width[1] & 0x1FFFF) |
  ((VAR_15->src_height[1] & 0x1FFFF) << 16);

 VAR_24 = (VAR_15->dst_width & 0x1FFFF) |
  ((VAR_15->dst_height & 0x1FFFF) << 16);

 if (VAR_15->de.enable) {
  FUNC_4(VAR_14, &VAR_15->de, VAR_16);
  VAR_19 |= FUNC_0(8);
 }

 if (VAR_15->lut_flag)
  FUNC_5(VAR_14, VAR_15,
        VAR_16);

 if (VAR_17 == 0x1002) {
  VAR_20 =
   ((VAR_15->init_phase_x[0] & 0x3F) << 0) |
   ((VAR_15->init_phase_y[0] & 0x3F) << 8) |
   ((VAR_15->init_phase_x[1] & 0x3F) << 16) |
   ((VAR_15->init_phase_y[1] & 0x3F) << 24);
  FUNC_3(VAR_14, VAR_2 + VAR_16, VAR_20);
 } else {
  FUNC_3(VAR_14, VAR_5 + VAR_16,
   VAR_15->init_phase_x[0] & 0x1FFFFF);
  FUNC_3(VAR_14, VAR_6 + VAR_16,
   VAR_15->init_phase_y[0] & 0x1FFFFF);
  FUNC_3(VAR_14, VAR_3 + VAR_16,
   VAR_15->init_phase_x[1] & 0x1FFFFF);
  FUNC_3(VAR_14, VAR_4 + VAR_16,
   VAR_15->init_phase_y[1] & 0x1FFFFF);
 }

 FUNC_3(VAR_14, VAR_9 + VAR_16,
  VAR_15->phase_step_x[0] & 0xFFFFFF);

 FUNC_3(VAR_14, VAR_10 + VAR_16,
  VAR_15->phase_step_y[0] & 0xFFFFFF);

 FUNC_3(VAR_14, VAR_7 + VAR_16,
  VAR_15->phase_step_x[1] & 0xFFFFFF);

 FUNC_3(VAR_14, VAR_8 + VAR_16,
  VAR_15->phase_step_y[1] & 0xFFFFFF);

 FUNC_3(VAR_14, VAR_11 + VAR_16, VAR_21);

 FUNC_3(VAR_14, VAR_13 + VAR_16, VAR_22);

 FUNC_3(VAR_14, VAR_12 + VAR_16, VAR_23);

 FUNC_3(VAR_14, VAR_0 + VAR_16, VAR_24);

end:
 if (VAR_18 && !FUNC_1(VAR_18))
  VAR_19 |= FUNC_0(14);

 if (VAR_18 && VAR_18->alpha_enable) {
  VAR_19 |= FUNC_0(10);
  if (VAR_17 == 0x1002)
   VAR_19 |= (VAR_15->alpha_filter_cfg & 0x1) << 30;
  else
   VAR_19 |= (VAR_15->alpha_filter_cfg & 0x3) << 29;
 }

 FUNC_3(VAR_14, VAR_1 + VAR_16, VAR_19);
}
