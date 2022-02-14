
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_overlay {int active; TYPE_1__* crtc; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int * overlay; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct intel_overlay*) ;

__attribute__((used)) static void FUNC_3(struct intel_overlay *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->i915;

 FUNC_2(VAR_0);

 VAR_0->crtc->overlay = ((void*)0);
 VAR_0->crtc = ((void*)0);
 VAR_0->active = 0;

 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1, 1);
}
