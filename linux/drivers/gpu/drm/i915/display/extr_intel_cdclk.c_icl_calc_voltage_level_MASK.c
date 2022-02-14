
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static u8 FUNC_1(struct drm_i915_private *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0)) {
  if (VAR_1 > 312000)
   return 2;
  else if (VAR_1 > 180000)
   return 1;
  else
   return 0;
 } else {
  if (VAR_1 > 556800)
   return 2;
  else if (VAR_1 > 312000)
   return 1;
  else
   return 0;
 }
}
