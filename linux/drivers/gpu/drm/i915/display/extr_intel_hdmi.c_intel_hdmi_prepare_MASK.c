
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int hdmi_reg; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {int pipe_bpp; scalar_t__ has_hdmi_sink; scalar_t__ limited_color_range; TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 struct intel_hdmi* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct intel_hdmi*,int) ;
 struct drm_i915_private* FUNC_10 (struct drm_device*) ;
 struct intel_crtc* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_9,
          const struct intel_crtc_state *VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->base.dev;
 struct drm_i915_private *VAR_12 = FUNC_10(VAR_11);
 struct intel_crtc *VAR_13 = FUNC_11(VAR_10->base.crtc);
 struct intel_hdmi *VAR_14 = FUNC_8(&VAR_9->base);
 const struct drm_display_mode *VAR_15 = &VAR_10->base.adjusted_mode;
 u32 VAR_16;

 FUNC_9(VAR_14, 1);

 VAR_16 = VAR_6;
 if (!FUNC_1(VAR_12) && VAR_10->limited_color_range)
  VAR_16 |= VAR_3;
 if (VAR_15->flags & VAR_1)
  VAR_16 |= VAR_8;
 if (VAR_15->flags & VAR_0)
  VAR_16 |= VAR_7;

 if (VAR_10->pipe_bpp > 24)
  VAR_16 |= VAR_2;
 else
  VAR_16 |= VAR_5;

 if (VAR_10->has_hdmi_sink)
  VAR_16 |= VAR_4;

 if (FUNC_0(VAR_12))
  VAR_16 |= FUNC_7(VAR_13->pipe);
 else if (FUNC_3(VAR_12))
  VAR_16 |= FUNC_6(VAR_13->pipe);
 else
  VAR_16 |= FUNC_5(VAR_13->pipe);

 FUNC_2(VAR_14->hdmi_reg, VAR_16);
 FUNC_4(VAR_14->hdmi_reg);
}
