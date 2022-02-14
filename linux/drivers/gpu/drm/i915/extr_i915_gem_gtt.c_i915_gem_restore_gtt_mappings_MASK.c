
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int ggtt; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_private*) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 FUNC_1(&VAR_0->ggtt);

 if (FUNC_0(VAR_0) >= 8)
  FUNC_2(VAR_0);
}
