
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_4)
{
 if (!FUNC_2(VAR_4))
  return 0;

 if ((FUNC_0(VAR_0) & VAR_1) == 0)
  return 0;

 if (FUNC_1(VAR_4, 5) && (FUNC_0(VAR_2) & VAR_3))
  return 0;

 return 1;
}
