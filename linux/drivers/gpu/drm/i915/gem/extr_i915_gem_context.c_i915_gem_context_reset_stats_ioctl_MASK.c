
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {int active_count; int guilty_count; } ;
struct drm_i915_reset_stats {void* batch_pending; void* batch_active; scalar_t__ reset_count; int ctx_id; scalar_t__ pad; scalar_t__ flags; } ;
struct drm_i915_private {int gpu_error; } ;
struct drm_file {int driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i915_gem_context* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;

int FUNC_7(struct drm_device *VAR_3,
           void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_6(VAR_3);
 struct drm_i915_reset_stats *VAR_7 = VAR_4;
 struct i915_gem_context *VAR_8;
 int VAR_9;

 if (VAR_7->flags || VAR_7->pad)
  return -VAR_1;

 VAR_9 = -VAR_2;
 FUNC_4();
 VAR_8 = FUNC_0(VAR_5->driver_priv, VAR_7->ctx_id);
 if (!VAR_8)
  goto out;
 if (FUNC_2(VAR_0))
  VAR_7->reset_count = FUNC_3(&VAR_6->gpu_error);
 else
  VAR_7->reset_count = 0;

 VAR_7->batch_active = FUNC_1(&VAR_8->guilty_count);
 VAR_7->batch_pending = FUNC_1(&VAR_8->active_count);

 VAR_9 = 0;
out:
 FUNC_5();
 return VAR_9;
}
