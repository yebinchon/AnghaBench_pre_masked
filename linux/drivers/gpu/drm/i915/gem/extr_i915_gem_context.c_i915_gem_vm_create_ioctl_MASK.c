
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_i915_file_private* file; } ;
struct i915_ppgtt {TYPE_1__ vm; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_vm_control {int vm_id; scalar_t__ extensions; scalar_t__ flags; } ;
struct drm_i915_file_private {int vm_idr_lock; int vm_idr; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct i915_ppgtt*) ;
 int FUNC_3 (struct i915_ppgtt*) ;
 struct i915_ppgtt* FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int ,int *,int ,struct i915_ppgtt*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct drm_i915_private* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (scalar_t__) ;

int FUNC_12(struct drm_device *VAR_3, void *VAR_4,
        struct drm_file *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_10(VAR_3);
 struct drm_i915_gem_vm_control *VAR_7 = VAR_4;
 struct drm_i915_file_private *VAR_8 = VAR_5->driver_priv;
 struct i915_ppgtt *VAR_9;
 int VAR_10;

 if (!FUNC_1(VAR_6))
  return -VAR_1;

 if (VAR_7->flags)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_6);
 if (FUNC_2(VAR_9))
  return FUNC_3(VAR_9);

 VAR_9->vm.file = VAR_8;

 if (VAR_7->extensions) {
  VAR_10 = FUNC_5(FUNC_11(VAR_7->extensions),
        ((void*)0), 0,
        VAR_9);
  if (VAR_10)
   goto err_put;
 }

 VAR_10 = FUNC_8(&VAR_8->vm_idr_lock);
 if (VAR_10)
  goto err_put;

 VAR_10 = FUNC_7(&VAR_8->vm_idr, &VAR_9->vm, 0, 0, VAR_2);
 if (VAR_10 < 0)
  goto err_unlock;

 FUNC_0(VAR_10 == 0);

 FUNC_9(&VAR_8->vm_idr_lock);

 VAR_7->vm_id = VAR_10;
 return 0;

err_unlock:
 FUNC_9(&VAR_8->vm_idr_lock);
err_put:
 FUNC_6(&VAR_9->vm);
 return VAR_10;
}
