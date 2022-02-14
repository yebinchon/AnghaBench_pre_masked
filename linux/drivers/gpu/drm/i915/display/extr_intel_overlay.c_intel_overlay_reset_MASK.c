
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_overlay {int active; int * crtc; scalar_t__ old_yscale; scalar_t__ old_xscale; } ;
struct drm_i915_private {struct intel_overlay* overlay; } ;



void FUNC_0(struct drm_i915_private *VAR_0)
{
 struct intel_overlay *VAR_1 = VAR_0->overlay;

 if (!VAR_1)
  return;

 VAR_1->old_xscale = 0;
 VAR_1->old_yscale = 0;
 VAR_1->crtc = ((void*)0);
 VAR_1->active = 0;
}
