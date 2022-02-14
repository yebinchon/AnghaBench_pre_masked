
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_gem_context {int dummy; } ;
struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct drm_file {int driver_priv; } ;


 struct i915_gem_context* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_gem_context*) ;
 int FUNC_2 (struct i915_gem_context*) ;
 int FUNC_3 (struct i915_gem_context*,int ) ;
 struct i915_gem_context* FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (int *) ;

struct i915_gem_context *
FUNC_6(struct drm_i915_private *VAR_0, struct drm_file *VAR_1)
{
 struct i915_gem_context *VAR_2;
 int VAR_3;

 FUNC_5(&VAR_0->drm.struct_mutex);

 VAR_2 = FUNC_4(VAR_0, 0);
 if (FUNC_1(VAR_2))
  return VAR_2;

 VAR_3 = FUNC_3(VAR_2, VAR_1->driver_priv);
 if (VAR_3 < 0)
  goto err_ctx;

 return VAR_2;

err_ctx:
 FUNC_2(VAR_2);
 return FUNC_0(VAR_3);
}
