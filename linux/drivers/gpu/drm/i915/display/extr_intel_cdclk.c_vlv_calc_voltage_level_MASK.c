
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_i915_private {int hpll_freq; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static u8 FUNC_2(struct drm_i915_private *VAR_0, int VAR_1)
{
 if (FUNC_1(VAR_0)) {
  if (VAR_1 >= 320000)
   return 2;
  else if (VAR_1 >= 266667)
   return 1;
  else
   return 0;
 } else {





  return FUNC_0(VAR_0->hpll_freq << 1, VAR_1) - 1;
 }
}
