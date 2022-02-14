
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;






 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_0,
      u32 VAR_1)
{
 switch (VAR_1) {
 case 128:
 case 130:
  return 1;
 case 129:
 case 131:

  if (FUNC_1(VAR_0, 2))
   return 0;

  if (FUNC_0(VAR_0))
   return 0;
  return 1;
 default:
  return 0;
 }
}
