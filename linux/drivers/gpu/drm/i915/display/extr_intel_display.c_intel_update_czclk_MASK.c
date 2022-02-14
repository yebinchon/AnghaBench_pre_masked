
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int czclk_freq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_1)
{
 if (!(FUNC_2(VAR_1) || FUNC_1(VAR_1)))
  return;

 VAR_1->czclk_freq = FUNC_3(VAR_1, "czclk",
            VAR_0);

 FUNC_0("CZ clock rate: %d kHz\n", VAR_1->czclk_freq);
}
