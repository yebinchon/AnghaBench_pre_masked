
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enable; TYPE_1__* crtc; } ;
struct intel_crtc_state {int port_clock; int lane_count; scalar_t__ has_audio; int pixel_rate; TYPE_2__ base; } ;
struct drm_i915_private {int max_cdclk_freq; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct intel_crtc_state const*) ;
 scalar_t__ FUNC_10 (struct intel_crtc_state const*) ;
 scalar_t__ FUNC_11 (struct intel_crtc_state const*,int ) ;
 int FUNC_12 (struct drm_i915_private*,int ) ;
 int FUNC_13 (int,int) ;
 struct drm_i915_private* FUNC_14 (int ) ;

int FUNC_15(const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 =
  FUNC_14(VAR_2->base.crtc->dev);
 int VAR_4;

 if (!VAR_2->base.enable)
  return 0;

 VAR_4 = FUNC_12(VAR_3, VAR_2->pixel_rate);


 if (FUNC_3(VAR_3) && FUNC_9(VAR_2))
  VAR_4 = FUNC_0(VAR_4 * 100, 95);






 if (FUNC_10(VAR_2) &&
     VAR_2->has_audio &&
     VAR_2->port_clock >= 540000 &&
     VAR_2->lane_count == 4) {
  if (FUNC_4(VAR_3) || FUNC_6(VAR_3)) {

   VAR_4 = FUNC_13(316800, VAR_4);
  } else if (FUNC_7(VAR_3, 9) || FUNC_3(VAR_3)) {

   VAR_4 = FUNC_13(432000, VAR_4);
  }
 }





 if (VAR_2->has_audio && FUNC_2(VAR_3) >= 9)
  VAR_4 = FUNC_13(2 * 96000, VAR_4);
 if ((FUNC_8(VAR_3) || FUNC_5(VAR_3)) &&
     FUNC_10(VAR_2) && VAR_2->has_audio)
  VAR_4 = FUNC_13(VAR_2->port_clock, VAR_4);





 if (FUNC_11(VAR_2, VAR_1) &&
     FUNC_8(VAR_3))
  VAR_4 = FUNC_13(320000, VAR_4);






 if (FUNC_11(VAR_2, VAR_1) &&
     FUNC_6(VAR_3))
  VAR_4 = FUNC_13(158400, VAR_4);

 if (VAR_4 > VAR_3->max_cdclk_freq) {
  FUNC_1("required cdclk (%d kHz) exceeds max (%d kHz)\n",
         VAR_4, VAR_3->max_cdclk_freq);
  return -VAR_0;
 }

 return VAR_4;
}
