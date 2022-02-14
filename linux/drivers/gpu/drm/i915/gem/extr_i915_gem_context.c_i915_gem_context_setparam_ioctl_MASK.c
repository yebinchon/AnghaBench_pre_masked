
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {int dummy; } ;
struct drm_i915_gem_context_param {int ctx_id; } ;
struct drm_i915_file_private {int dummy; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_file_private*,struct i915_gem_context*,struct drm_i915_gem_context_param*) ;
 struct i915_gem_context* FUNC_1 (struct drm_i915_file_private*,int ) ;
 int FUNC_2 (struct i915_gem_context*) ;

int FUNC_3(struct drm_device *VAR_1, void *VAR_2,
        struct drm_file *VAR_3)
{
 struct drm_i915_file_private *VAR_4 = VAR_3->driver_priv;
 struct drm_i915_gem_context_param *VAR_5 = VAR_2;
 struct i915_gem_context *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_5->ctx_id);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4, VAR_6, VAR_5);

 FUNC_2(VAR_6);
 return VAR_7;
}
