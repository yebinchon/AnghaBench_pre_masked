
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_gem_context {int dummy; } ;
struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
typedef struct i915_gem_context drm_file ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i915_gem_context*) ;
 int FUNC_1 (struct i915_gem_context*) ;
 struct i915_gem_context* FUNC_2 (struct drm_i915_private*,struct i915_gem_context*) ;
 struct i915_gem_context* FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,struct i915_gem_context*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*,struct i915_gem_context*) ;

__attribute__((used)) static int FUNC_12(void *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1;
 struct i915_gem_context *VAR_3;
 struct drm_file *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = -VAR_0;
 FUNC_5(&VAR_2->drm.struct_mutex);
 VAR_3 = FUNC_2(VAR_2, VAR_4);
 if (!FUNC_0(VAR_3))
  VAR_5 = FUNC_11(VAR_2, VAR_3);
 FUNC_6(&VAR_2->drm.struct_mutex);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_8(VAR_2);
 if (VAR_5)
  goto out;

 FUNC_7(VAR_2);


 FUNC_10(VAR_2);

 FUNC_9(VAR_2);

 FUNC_5(&VAR_2->drm.struct_mutex);
 VAR_5 = FUNC_11(VAR_2, VAR_3);
 FUNC_6(&VAR_2->drm.struct_mutex);
out:
 FUNC_4(VAR_2, VAR_4);
 return VAR_5;
}
