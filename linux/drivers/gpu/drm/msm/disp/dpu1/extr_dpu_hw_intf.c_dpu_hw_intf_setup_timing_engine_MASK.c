
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intf_timing_params {int hsync_pulse_width; int h_back_porch; int width; int h_front_porch; int vsync_pulse_width; int v_back_porch; int height; int v_front_porch; int hsync_skew; scalar_t__ xres; int yres; int border_clr; int underflow_clr; } ;
struct dpu_hw_blk_reg_map {int dummy; } ;
struct dpu_hw_intf {TYPE_1__* cap; struct dpu_hw_blk_reg_map hw; } ;
struct dpu_format {int* bits; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dpu_format const*) ;
 int FUNC_2 (struct dpu_hw_blk_reg_map*,int ) ;
 int FUNC_3 (struct dpu_hw_blk_reg_map*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_4(struct dpu_hw_intf *VAR_23,
  const struct intf_timing_params *VAR_24,
  const struct dpu_format *VAR_25)
{
 struct dpu_hw_blk_reg_map *VAR_26 = &VAR_23->hw;
 u32 VAR_27, VAR_28;
 u32 VAR_29, VAR_30;
 u32 VAR_31, VAR_32;
 u32 VAR_33, VAR_34;
 u32 VAR_35, VAR_36;
 u32 VAR_37, VAR_38, VAR_39;
 u32 VAR_40, VAR_41, VAR_42, VAR_43;
 u32 VAR_44;
 u32 VAR_45;


 VAR_45 = FUNC_2(VAR_26, VAR_8);
 VAR_27 = VAR_24->hsync_pulse_width + VAR_24->h_back_porch + VAR_24->width +
 VAR_24->h_front_porch;
 VAR_28 = VAR_24->vsync_pulse_width + VAR_24->v_back_porch + VAR_24->height +
 VAR_24->v_front_porch;

 VAR_29 = ((VAR_24->vsync_pulse_width + VAR_24->v_back_porch) *
 VAR_27) + VAR_24->hsync_skew;
 VAR_30 = ((VAR_28 - VAR_24->v_front_porch) * VAR_27) +
 VAR_24->hsync_skew - 1;

 if (VAR_23->cap->type == VAR_13 || VAR_23->cap->type == VAR_12) {
  VAR_29 += VAR_24->hsync_pulse_width + VAR_24->h_back_porch;
  VAR_30 -= VAR_24->h_front_porch;
 }

 VAR_31 = VAR_24->h_back_porch + VAR_24->hsync_pulse_width;
 VAR_32 = VAR_27 - VAR_24->h_front_porch - 1;

 if (VAR_24->width != VAR_24->xres) {
  VAR_33 = VAR_31;
  VAR_34 = VAR_33 + VAR_24->xres - 1;
 } else {
  VAR_33 = 0;
  VAR_34 = 0;
 }

 if (VAR_24->height != VAR_24->yres) {
  VAR_35 = VAR_29;
  VAR_36 = VAR_35 + (VAR_24->yres * VAR_27) - 1;
 } else {
  VAR_35 = 0;
  VAR_36 = 0;
 }

 if (VAR_34) {
  VAR_37 = (VAR_34 << 16) | VAR_33;
  VAR_45 |= FUNC_0(29);
 } else {
  VAR_37 = 0;
 }

 if (VAR_36)
  VAR_45 |= FUNC_0(30);

 VAR_39 = (VAR_27 << 16) | VAR_24->hsync_pulse_width;
 VAR_38 = (VAR_32 << 16) | VAR_31;

 VAR_41 = 0;
 if (VAR_23->cap->type == VAR_15) {
  VAR_42 = VAR_24->yres >= 720 ? 0 : 1;
  VAR_43 = VAR_24->yres >= 720 ? 0 : 1;
 } else {
  VAR_42 = 0;
  VAR_43 = 0;
 }
 VAR_40 = (VAR_41 << 2) |
  (VAR_43 << 1) |
  (VAR_42 << 0);

 if (!FUNC_1(VAR_25))
  VAR_44 = (VAR_25->bits[VAR_0] |
    (VAR_25->bits[VAR_1] << 2) |
    (VAR_25->bits[VAR_2] << 4) |
    (0x21 << 8));
 else

  VAR_44 = (VAR_3 |
    (VAR_3 << 2) |
    (VAR_3 << 4) |
    (0x21 << 8));

 FUNC_3(VAR_26, VAR_16, VAR_39);
 FUNC_3(VAR_26, VAR_21, VAR_28 * VAR_27);
 FUNC_3(VAR_26, VAR_22,
   VAR_24->vsync_pulse_width * VAR_27);
 FUNC_3(VAR_26, VAR_9, VAR_38);
 FUNC_3(VAR_26, VAR_11, VAR_29);
 FUNC_3(VAR_26, VAR_10, VAR_30);
 FUNC_3(VAR_26, VAR_4, VAR_37);
 FUNC_3(VAR_26, VAR_6, VAR_35);
 FUNC_3(VAR_26, VAR_5, VAR_36);
 FUNC_3(VAR_26, VAR_7, VAR_24->border_clr);
 FUNC_3(VAR_26, VAR_20, VAR_24->underflow_clr);
 FUNC_3(VAR_26, VAR_17, VAR_24->hsync_skew);
 FUNC_3(VAR_26, VAR_19, VAR_40);
 FUNC_3(VAR_26, VAR_14, 0x3);
 FUNC_3(VAR_26, VAR_8, VAR_45);
 FUNC_3(VAR_26, VAR_18, VAR_44);
}
