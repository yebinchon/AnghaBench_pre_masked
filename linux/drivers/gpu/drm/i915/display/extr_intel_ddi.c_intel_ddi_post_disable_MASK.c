
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_encoder*) ;
 scalar_t__ FUNC_2 (struct intel_crtc_state const*,int ) ;
 int FUNC_3 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_1,
       const struct intel_crtc_state *VAR_2,
       const struct drm_connector_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_1->base.dev);
 if (FUNC_2(VAR_2, VAR_0))
  FUNC_4(VAR_1,
         VAR_2, VAR_3);
 else
  FUNC_3(VAR_1,
       VAR_2, VAR_3);

 if (FUNC_0(VAR_4) >= 11)
  FUNC_1(VAR_1);
}
