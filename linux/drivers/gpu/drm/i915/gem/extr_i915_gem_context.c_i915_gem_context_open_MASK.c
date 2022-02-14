
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_gem_context {int dummy; } ;
struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct drm_i915_file_private {int context_idr_lock; int vm_idr_lock; int context_idr; int vm_idr; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_gem_context*) ;
 int FUNC_2 (struct i915_gem_context*) ;
 int FUNC_3 (struct i915_gem_context*) ;
 int FUNC_4 (struct i915_gem_context*,struct drm_i915_file_private*) ;
 int FUNC_5 (struct i915_gem_context*) ;
 struct i915_gem_context* FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct drm_i915_private *VAR_0,
     struct drm_file *VAR_1)
{
 struct drm_i915_file_private *VAR_2 = VAR_1->driver_priv;
 struct i915_gem_context *VAR_3;
 int VAR_4;

 FUNC_11(&VAR_2->context_idr_lock);
 FUNC_11(&VAR_2->vm_idr_lock);

 FUNC_8(&VAR_2->context_idr);
 FUNC_9(&VAR_2->vm_idr, 1);

 FUNC_12(&VAR_0->drm.struct_mutex);
 VAR_3 = FUNC_6(VAR_0, 0);
 FUNC_13(&VAR_0->drm.struct_mutex);
 if (FUNC_1(VAR_3)) {
  VAR_4 = FUNC_2(VAR_3);
  goto err;
 }

 VAR_4 = FUNC_4(VAR_3, VAR_2);
 if (VAR_4 < 0)
  goto err_ctx;

 FUNC_0(FUNC_5(VAR_3));
 FUNC_0(VAR_4 > 0);

 return 0;

err_ctx:
 FUNC_3(VAR_3);
err:
 FUNC_7(&VAR_2->vm_idr);
 FUNC_7(&VAR_2->context_idr);
 FUNC_10(&VAR_2->vm_idr_lock);
 FUNC_10(&VAR_2->context_idr_lock);
 return VAR_4;
}
