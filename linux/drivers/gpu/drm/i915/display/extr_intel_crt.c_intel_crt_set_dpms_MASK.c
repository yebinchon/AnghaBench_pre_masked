
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct intel_crt {int adpa_reg; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;




 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct drm_i915_private*) ;
 struct intel_crt* FUNC_8 (struct intel_encoder*) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 struct intel_crtc* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct intel_encoder *VAR_8,
          const struct intel_crtc_state *VAR_9,
          int VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_9(VAR_8->base.dev);
 struct intel_crt *VAR_12 = FUNC_8(VAR_8);
 struct intel_crtc *VAR_13 = FUNC_10(VAR_9->base.crtc);
 const struct drm_display_mode *VAR_14 = &VAR_9->base.adjusted_mode;
 u32 VAR_15;

 if (FUNC_7(VAR_11) >= 5)
  VAR_15 = VAR_1;
 else
  VAR_15 = 0;

 if (VAR_14->flags & VAR_6)
  VAR_15 |= VAR_2;
 if (VAR_14->flags & VAR_7)
  VAR_15 |= VAR_4;


 if (FUNC_4(VAR_11))
  ;
 else if (FUNC_3(VAR_11))
  VAR_15 |= FUNC_1(VAR_13->pipe);
 else
  VAR_15 |= FUNC_0(VAR_13->pipe);

 if (!FUNC_5(VAR_11))
  FUNC_6(FUNC_2(VAR_13->pipe), 0);

 switch (VAR_10) {
 case 130:
  VAR_15 |= VAR_0;
  break;
 case 129:
  VAR_15 |= VAR_0 | VAR_3;
  break;
 case 128:
  VAR_15 |= VAR_0 | VAR_5;
  break;
 case 131:
  VAR_15 |= VAR_3 | VAR_5;
  break;
 }

 FUNC_6(VAR_12->adpa_reg, VAR_15);
}
