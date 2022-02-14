
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_wa_list {int dummy; } ;
struct intel_engine_cs {int name; struct i915_wa_list whitelist; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct intel_engine_cs*) ;
 int FUNC_10 (struct intel_engine_cs*) ;
 int FUNC_11 (struct intel_engine_cs*) ;
 int FUNC_12 (struct intel_engine_cs*) ;
 int FUNC_13 (struct intel_engine_cs*) ;
 int FUNC_14 (struct intel_engine_cs*) ;
 int FUNC_15 (struct intel_engine_cs*) ;
 int FUNC_16 (struct intel_engine_cs*) ;
 int FUNC_17 (struct i915_wa_list*) ;
 int FUNC_18 (struct i915_wa_list*,char*,int ) ;

void FUNC_19(struct intel_engine_cs *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->i915;
 struct i915_wa_list *VAR_2 = &VAR_0->whitelist;

 FUNC_18(VAR_2, "whitelist", VAR_0->name);

 if (FUNC_5(VAR_1, 12))
  FUNC_16(VAR_0);
 else if (FUNC_5(VAR_1, 11))
  FUNC_13(VAR_0);
 else if (FUNC_2(VAR_1))
  FUNC_11(VAR_0);
 else if (FUNC_3(VAR_1))
  FUNC_10(VAR_0);
 else if (FUNC_4(VAR_1))
  FUNC_12(VAR_0);
 else if (FUNC_6(VAR_1))
  FUNC_14(VAR_0);
 else if (FUNC_1(VAR_1))
  FUNC_9(VAR_0);
 else if (FUNC_7(VAR_1))
  FUNC_15(VAR_0);
 else if (FUNC_0(VAR_1) <= 8)
  return;
 else
  FUNC_8(FUNC_0(VAR_1));

 FUNC_17(VAR_2);
}
