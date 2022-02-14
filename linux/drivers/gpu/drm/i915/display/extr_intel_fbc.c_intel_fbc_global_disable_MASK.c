
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_fbc {int lock; TYPE_1__* crtc; scalar_t__ enabled; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
struct TYPE_2__ {int active; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_i915_private *VAR_0)
{
 struct intel_fbc *VAR_1 = &VAR_0->fbc;

 if (!FUNC_2(VAR_0))
  return;

 FUNC_3(&VAR_1->lock);
 if (VAR_1->enabled) {
  FUNC_0(VAR_1->crtc->active);
  FUNC_1(VAR_0);
 }
 FUNC_4(&VAR_1->lock);
}
