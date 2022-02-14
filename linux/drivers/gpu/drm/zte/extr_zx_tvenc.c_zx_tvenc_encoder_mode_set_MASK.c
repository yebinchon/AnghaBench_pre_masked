
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tvenc_mode {int phase_line_incr_cvbs; int sub_carrier_phase1; int control_param; int burst_level; int blank_black_level; int weight_value; int line_timing_param; int burst_line_even2; int burst_line_odd2; int burst_line_even1; int burst_line_odd1; int field2_param; int field1_param; int video_res; int video_info; } ;
struct zx_tvenc {scalar_t__ mmio; int dev; } ;
struct vou_div_config {int member_1; int member_0; } ;
struct drm_encoder {int crtc; } ;
struct drm_display_mode {int dummy; } ;


 int FUNC_0 (struct vou_div_config*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct zx_tvenc* FUNC_2 (struct drm_encoder*) ;
 struct zx_tvenc_mode* FUNC_3 (struct drm_display_mode*) ;
 int FUNC_4 (int ,struct vou_div_config*,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_21,
          struct drm_display_mode *VAR_22,
          struct drm_display_mode *VAR_23)
{
 struct zx_tvenc *VAR_24 = FUNC_2(VAR_21);
 const struct zx_tvenc_mode *VAR_25;
 struct vou_div_config VAR_26[] = {
  { VAR_18, VAR_17 },
  { VAR_20, VAR_15 },
  { VAR_19, VAR_16 },
 };

 FUNC_4(VAR_21->crtc, VAR_26, FUNC_0(VAR_26));

 VAR_25 = FUNC_3(VAR_22);
 if (!VAR_25) {
  FUNC_1(VAR_24->dev, "failed to find zmode\n");
  return;
 }

 FUNC_5(VAR_24->mmio + VAR_12, VAR_25->video_info);
 FUNC_5(VAR_24->mmio + VAR_13, VAR_25->video_res);
 FUNC_5(VAR_24->mmio + VAR_3, VAR_25->field1_param);
 FUNC_5(VAR_24->mmio + VAR_4, VAR_25->field2_param);
 FUNC_5(VAR_24->mmio + VAR_7, VAR_25->burst_line_odd1);
 FUNC_5(VAR_24->mmio + VAR_5, VAR_25->burst_line_even1);
 FUNC_5(VAR_24->mmio + VAR_8, VAR_25->burst_line_odd2);
 FUNC_5(VAR_24->mmio + VAR_6, VAR_25->burst_line_even2);
 FUNC_5(VAR_24->mmio + VAR_9,
    VAR_25->line_timing_param);
 FUNC_5(VAR_24->mmio + VAR_14, VAR_25->weight_value);
 FUNC_5(VAR_24->mmio + VAR_0,
    VAR_25->blank_black_level);
 FUNC_5(VAR_24->mmio + VAR_1, VAR_25->burst_level);
 FUNC_5(VAR_24->mmio + VAR_2, VAR_25->control_param);
 FUNC_5(VAR_24->mmio + VAR_11,
    VAR_25->sub_carrier_phase1);
 FUNC_5(VAR_24->mmio + VAR_10,
    VAR_25->phase_line_incr_cvbs);
}
