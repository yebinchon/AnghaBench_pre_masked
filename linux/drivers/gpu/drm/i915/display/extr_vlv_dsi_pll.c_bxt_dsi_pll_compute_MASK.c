
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct intel_dsi {int lane_count; int pixel_format; int pclk; } ;
struct TYPE_3__ {int ctrl; } ;
struct intel_crtc_state {TYPE_1__ dsi_pll; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct intel_dsi* FUNC_5 (TYPE_2__*) ;
 struct drm_i915_private* FUNC_6 (int ) ;

int FUNC_7(struct intel_encoder *VAR_9,
   struct intel_crtc_state *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_6(VAR_9->base.dev);
 struct intel_dsi *VAR_12 = FUNC_5(&VAR_9->base);
 u8 VAR_13, VAR_14, VAR_15;
 u32 VAR_16;

 VAR_16 = FUNC_4(VAR_12->pclk, VAR_12->pixel_format,
        VAR_12->lane_count);






 VAR_13 = FUNC_0(VAR_16 * 2, VAR_5);

 if (FUNC_3(VAR_11)) {
  VAR_14 = VAR_4;
  VAR_15 = VAR_3;
 } else {
  VAR_14 = VAR_8;
  VAR_15 = VAR_7;
 }

 if (VAR_13 < VAR_14 || VAR_13 > VAR_15) {
  FUNC_2("Cant get a suitable ratio from DSI PLL ratios\n");
  return -VAR_6;
 } else
  FUNC_1("DSI PLL calculation is Done!!\n");






 VAR_10->dsi_pll.ctrl = VAR_13 | VAR_0 | VAR_1;




 if (FUNC_3(VAR_11) && VAR_13 <= 50)
  VAR_10->dsi_pll.ctrl |= VAR_2;

 return 0;
}
