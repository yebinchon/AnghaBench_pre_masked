
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wa_lists {int dummy; } ;
struct i915_gem_context {int dummy; } ;
struct drm_i915_private {int gt; int runtime_pm; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i915_gem_context*) ;
 int FUNC_1 (struct i915_gem_context*) ;
 int FUNC_2 (struct i915_gem_context*) ;
 int FUNC_3 (struct i915_gem_context*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 struct i915_gem_context* FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct i915_gem_context*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct drm_i915_private*,struct wa_lists*) ;
 int FUNC_14 (struct drm_i915_private*,struct wa_lists*) ;
 int FUNC_15 (struct i915_gem_context*,struct wa_lists*,char*) ;

__attribute__((used)) static int
FUNC_16(void *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2;
 struct i915_gem_context *VAR_4;
 intel_wakeref_t VAR_5;
 struct wa_lists VAR_6;
 bool VAR_7;

 if (!FUNC_7(VAR_3))
  return 0;

 VAR_4 = FUNC_10(VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_2(VAR_4);

 FUNC_12("Verifying after GPU reset...\n");

 FUNC_4(&VAR_3->gt);
 VAR_5 = FUNC_8(&VAR_3->runtime_pm);

 FUNC_14(VAR_3, &VAR_6);

 VAR_7 = FUNC_15(VAR_4, &VAR_6, "before reset");
 if (!VAR_7)
  goto out;

 FUNC_6(&VAR_3->gt, VAR_0, "live_workarounds");

 VAR_7 = FUNC_15(VAR_4, &VAR_6, "after reset");

out:
 FUNC_3(VAR_4);
 FUNC_11(VAR_4);
 FUNC_13(VAR_3, &VAR_6);
 FUNC_9(&VAR_3->runtime_pm, VAR_5);
 FUNC_5(&VAR_3->gt);

 return VAR_7 ? 0 : -VAR_1;
}
