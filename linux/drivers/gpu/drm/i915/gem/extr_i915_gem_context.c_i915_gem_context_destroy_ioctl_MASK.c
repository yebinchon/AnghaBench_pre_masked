
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {int dummy; } ;
struct drm_i915_gem_context_destroy {scalar_t__ pad; int ctx_id; } ;
struct drm_i915_file_private {int context_idr_lock; int context_idr; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i915_gem_context*) ;
 struct i915_gem_context* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_3, void *VAR_4,
       struct drm_file *VAR_5)
{
 struct drm_i915_gem_context_destroy *VAR_6 = VAR_4;
 struct drm_i915_file_private *VAR_7 = VAR_5->driver_priv;
 struct i915_gem_context *VAR_8;

 if (VAR_6->pad != 0)
  return -VAR_1;

 if (!VAR_6->ctx_id)
  return -VAR_2;

 if (FUNC_2(&VAR_7->context_idr_lock))
  return -VAR_0;

 VAR_8 = FUNC_1(&VAR_7->context_idr, VAR_6->ctx_id);
 FUNC_3(&VAR_7->context_idr_lock);
 if (!VAR_8)
  return -VAR_2;

 FUNC_0(VAR_8);
 return 0;
}
