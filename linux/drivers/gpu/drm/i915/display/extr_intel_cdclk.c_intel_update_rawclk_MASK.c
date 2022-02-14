
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int rawclk_freq; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;

void FUNC_11(struct drm_i915_private *VAR_1)
{
 if (FUNC_2(VAR_1) >= VAR_0)
  VAR_1->rawclk_freq = FUNC_7(VAR_1);
 else if (FUNC_1(VAR_1))
  VAR_1->rawclk_freq = FUNC_9(VAR_1);
 else if (FUNC_6(VAR_1) || FUNC_3(VAR_1))
  VAR_1->rawclk_freq = FUNC_10(VAR_1);
 else if (FUNC_4(VAR_1) || FUNC_5(VAR_1))
  VAR_1->rawclk_freq = FUNC_8(VAR_1);
 else

  return;

 FUNC_0("rawclk rate: %d kHz\n", VAR_1->rawclk_freq);
}
