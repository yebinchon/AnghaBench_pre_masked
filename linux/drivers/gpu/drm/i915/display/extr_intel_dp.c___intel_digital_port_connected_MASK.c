
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct intel_encoder*) ;
 int FUNC_8 (struct intel_encoder*) ;
 int FUNC_9 (struct intel_encoder*) ;
 int FUNC_10 (struct intel_encoder*) ;
 int FUNC_11 (struct intel_encoder*) ;
 int FUNC_12 (struct intel_encoder*) ;
 int FUNC_13 (struct intel_encoder*) ;
 int FUNC_14 (struct intel_encoder*) ;
 int FUNC_15 (struct intel_encoder*) ;
 struct drm_i915_private* FUNC_16 (int ) ;

__attribute__((used)) static bool FUNC_17(struct intel_encoder *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_16(VAR_0->base.dev);

 if (FUNC_0(VAR_1)) {
  if (FUNC_5(VAR_1))
   return FUNC_10(VAR_0);
  else
   return FUNC_9(VAR_0);
 }

 if (FUNC_1(VAR_1) >= 11)
  return FUNC_11(VAR_0);
 else if (FUNC_2(VAR_1, 10) || FUNC_3(VAR_1))
  return FUNC_15(VAR_0);
 else if (FUNC_4(VAR_1))
  return FUNC_8(VAR_0);
 else if (FUNC_2(VAR_1, 8))
  return FUNC_7(VAR_0);
 else if (FUNC_2(VAR_1, 7))
  return FUNC_13(VAR_0);
 else if (FUNC_2(VAR_1, 6))
  return FUNC_14(VAR_0);
 else if (FUNC_2(VAR_1, 5))
  return FUNC_12(VAR_0);

 FUNC_6(FUNC_1(VAR_1));
 return 0;
}
