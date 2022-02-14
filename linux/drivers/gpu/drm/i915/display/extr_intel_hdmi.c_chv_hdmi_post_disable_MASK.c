
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (struct intel_encoder*,struct intel_crtc_state const*,int) ;
 struct drm_i915_private* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_0,
      const struct intel_crtc_state *VAR_1,
      const struct drm_connector_state *VAR_2)
{
 struct drm_device *VAR_3 = VAR_0->base.dev;
 struct drm_i915_private *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_4);


 FUNC_0(VAR_0, VAR_1, 1);

 FUNC_3(VAR_4);
}
