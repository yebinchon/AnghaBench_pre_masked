
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_dp {int dummy; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 struct intel_dp* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*,struct intel_crtc_state const*) ;
 int FUNC_5 (struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_6 (struct intel_dp*,struct intel_crtc_state const*) ;
 int FUNC_7 (struct intel_dp*,struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct intel_encoder *VAR_1,
    const struct intel_crtc_state *VAR_2,
    const struct drm_connector_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_8(VAR_1->base.dev);
 struct intel_dp *VAR_5 = FUNC_1(&VAR_1->base);
 enum port VAR_6 = VAR_1->port;

 if (VAR_6 == VAR_0 && FUNC_0(VAR_4) < 9)
  FUNC_3(VAR_5);

 FUNC_5(VAR_2, VAR_3);
 FUNC_7(VAR_5, VAR_2);
 FUNC_4(VAR_5, VAR_2);
 FUNC_6(VAR_5, VAR_2);

 if (VAR_2->has_audio)
  FUNC_2(VAR_1, VAR_2, VAR_3);
}
