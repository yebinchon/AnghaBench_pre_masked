
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_fbc {int lock; } ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 int FUNC_0 (struct intel_crtc*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct drm_i915_private* FUNC_4 (int ) ;

void FUNC_5(struct intel_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_4(VAR_0->base.dev);
 struct intel_fbc *VAR_2 = &VAR_1->fbc;

 if (!FUNC_1(VAR_1))
  return;

 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_2->lock);
}
