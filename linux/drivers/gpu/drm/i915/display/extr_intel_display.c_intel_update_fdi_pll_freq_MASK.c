
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int fdi_pll_freq; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_2)
{
 if (FUNC_2(VAR_2, 5)) {
  u32 VAR_3 =
   FUNC_1(VAR_0) & VAR_1;

  VAR_2->fdi_pll_freq = (VAR_3 + 2) * 10000;
 } else if (FUNC_2(VAR_2, 6) || FUNC_3(VAR_2)) {
  VAR_2->fdi_pll_freq = 270000;
 } else {
  return;
 }

 FUNC_0("FDI PLL freq=%d\n", VAR_2->fdi_pll_freq);
}
