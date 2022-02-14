
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_5 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_6 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_7 (struct intel_encoder*,struct intel_crtc_state*) ;
 int FUNC_8 (struct intel_encoder*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct intel_encoder *VAR_0,
    struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_9(VAR_0->base.dev);

 if (FUNC_0(VAR_2) >= 11)
  FUNC_7(VAR_0, VAR_1);
 else if (FUNC_1(VAR_2))
  FUNC_5(VAR_0, VAR_1);
 else if (FUNC_3(VAR_2))
  FUNC_4(VAR_0, VAR_1);
 else if (FUNC_2(VAR_2))
  FUNC_8(VAR_0, VAR_1);
 else if (FUNC_0(VAR_2) <= 8)
  FUNC_6(VAR_0, VAR_1);
}
