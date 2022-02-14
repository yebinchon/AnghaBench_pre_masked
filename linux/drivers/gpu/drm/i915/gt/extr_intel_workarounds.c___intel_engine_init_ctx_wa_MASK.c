
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {scalar_t__ class; int name; struct drm_i915_private* i915; } ;
struct i915_wa_list {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_11 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_12 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_13 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_14 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_15 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_16 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_17 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_18 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_19 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_20 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_21 (struct i915_wa_list*) ;
 int FUNC_22 (struct i915_wa_list*,char const*,int ) ;

__attribute__((used)) static void
FUNC_23(struct intel_engine_cs *VAR_1,
      struct i915_wa_list *VAR_2,
      const char *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_1->i915;

 if (VAR_1->class != VAR_0)
  return;

 FUNC_22(VAR_2, VAR_3, VAR_1->name);

 if (FUNC_7(VAR_4, 12))
  FUNC_20(VAR_1, VAR_2);
 else if (FUNC_7(VAR_4, 11))
  FUNC_17(VAR_1, VAR_2);
 else if (FUNC_3(VAR_4))
  FUNC_15(VAR_1, VAR_2);
 else if (FUNC_5(VAR_4))
  FUNC_13(VAR_1, VAR_2);
 else if (FUNC_6(VAR_4))
  FUNC_16(VAR_1, VAR_2);
 else if (FUNC_8(VAR_4))
  FUNC_18(VAR_1, VAR_2);
 else if (FUNC_2(VAR_4))
  FUNC_12(VAR_1, VAR_2);
 else if (FUNC_9(VAR_4))
  FUNC_19(VAR_1, VAR_2);
 else if (FUNC_4(VAR_4))
  FUNC_14(VAR_1, VAR_2);
 else if (FUNC_1(VAR_4))
  FUNC_11(VAR_1, VAR_2);
 else if (FUNC_0(VAR_4) < 8)
  return;
 else
  FUNC_10(FUNC_0(VAR_4));

 FUNC_21(VAR_2);
}
