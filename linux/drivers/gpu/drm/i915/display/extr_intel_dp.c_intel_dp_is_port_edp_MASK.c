
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*,int) ;

bool FUNC_2(struct drm_i915_private *VAR_1, enum port VAR_2)
{




 if (FUNC_0(VAR_1) < 5)
  return 0;

 if (FUNC_0(VAR_1) < 9 && VAR_2 == VAR_0)
  return 1;

 return FUNC_1(VAR_1, VAR_2);
}
