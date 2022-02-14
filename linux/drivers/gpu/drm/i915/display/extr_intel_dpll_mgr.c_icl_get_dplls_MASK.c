
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int port; } ;
struct intel_crtc {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct intel_atomic_state {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_atomic_state*,struct intel_crtc*,struct intel_encoder*) ;
 int FUNC_2 (struct intel_atomic_state*,struct intel_crtc*,struct intel_encoder*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct intel_atomic_state *VAR_0,
     struct intel_crtc *VAR_1,
     struct intel_encoder *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_0->base.dev);
 enum phy VAR_4 = FUNC_5(VAR_3, VAR_2->port);

 if (FUNC_3(VAR_3, VAR_4))
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 else if (FUNC_4(VAR_3, VAR_4))
  return FUNC_2(VAR_0, VAR_1, VAR_2);

 FUNC_0(VAR_4);

 return 0;
}
