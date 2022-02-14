
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int ggtt; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_i915_private *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(&VAR_1->ggtt);
 if (VAR_2)
  return VAR_2;

 if (FUNC_0(VAR_1) == VAR_0) {
  VAR_2 = FUNC_2(&VAR_1->ggtt);
  if (VAR_2)
   FUNC_1(&VAR_1->ggtt);
 }

 return 0;
}
