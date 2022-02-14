
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int has_pch_encoder; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*,int ,int) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct intel_encoder *VAR_1,
       const struct intel_crtc_state *VAR_2,
       const struct drm_connector_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_1->base.dev);

 FUNC_0(!VAR_2->has_pch_encoder);

 FUNC_1(VAR_4, VAR_0, 0);
}
