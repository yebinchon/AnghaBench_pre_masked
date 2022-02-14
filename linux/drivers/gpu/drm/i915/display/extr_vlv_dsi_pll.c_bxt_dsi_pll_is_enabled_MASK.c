
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;

bool FUNC_3(struct drm_i915_private *VAR_6)
{
 bool VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_9 = VAR_3 | VAR_5;
 VAR_8 = FUNC_1(VAR_4);
 VAR_7 = (VAR_8 & VAR_9) == VAR_9;

 if (!VAR_7)
  return 0;
 VAR_8 = FUNC_1(VAR_2);
 if (FUNC_2(VAR_6)) {
  if (!(VAR_8 & VAR_0)) {
   FUNC_0("Invalid PLL divider (%08x)\n", VAR_8);
   VAR_7 = 0;
  }
 } else {
  if (!(VAR_8 & VAR_0) || !(VAR_8 & VAR_1)) {
   FUNC_0("Invalid PLL divider (%08x)\n", VAR_8);
   VAR_7 = 0;
  }
 }

 return VAR_7;
}
