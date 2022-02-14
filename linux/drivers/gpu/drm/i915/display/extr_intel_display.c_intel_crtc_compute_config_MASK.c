
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int crtc_clock; scalar_t__ crtc_hsync_start; scalar_t__ crtc_hdisplay; } ;
struct TYPE_4__ {scalar_t__ ctm; struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int double_wide; scalar_t__ output_format; int pipe_src_w; scalar_t__ has_pch_encoder; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int max_dotclk_freq; int max_cdclk_freq; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*,int ) ;
 scalar_t__ FUNC_5 (struct intel_crtc*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct intel_crtc*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct intel_crtc *VAR_4,
         struct intel_crtc_state *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_8(VAR_4->base.dev);
 const struct drm_display_mode *VAR_7 = &VAR_5->base.adjusted_mode;
 int VAR_8 = VAR_6->max_dotclk_freq;

 if (FUNC_1(VAR_6) < 4) {
  VAR_8 = VAR_6->max_cdclk_freq * 9 / 10;





  if (FUNC_5(VAR_4) &&
      VAR_7->crtc_clock > VAR_8) {
   VAR_8 = VAR_6->max_dotclk_freq;
   VAR_5->double_wide = 1;
  }
 }

 if (VAR_7->crtc_clock > VAR_8) {
  FUNC_0("requested pixel clock (%d kHz) too high (max: %d kHz, double wide: %s)\n",
         VAR_7->crtc_clock, VAR_8,
         FUNC_9(VAR_5->double_wide));
  return -VAR_0;
 }

 if ((VAR_5->output_format == VAR_1 ||
      VAR_5->output_format == VAR_2) &&
      VAR_5->base.ctm) {





  FUNC_0("YCBCR420 and CTM together are not possible\n");
  return -VAR_0;
 }







 if (VAR_5->pipe_src_w & 1) {
  if (VAR_5->double_wide) {
   FUNC_0("Odd pipe source width not supported with double wide pipe\n");
   return -VAR_0;
  }

  if (FUNC_4(VAR_5, VAR_3) &&
      FUNC_6(VAR_6)) {
   FUNC_0("Odd pipe source width not supported with dual link LVDS\n");
   return -VAR_0;
  }
 }




 if ((FUNC_1(VAR_6) > 4 || FUNC_2(VAR_6)) &&
  VAR_7->crtc_hsync_start == VAR_7->crtc_hdisplay)
  return -VAR_0;

 FUNC_3(VAR_5);

 if (VAR_5->has_pch_encoder)
  return FUNC_7(VAR_4, VAR_5);

 return 0;
}
