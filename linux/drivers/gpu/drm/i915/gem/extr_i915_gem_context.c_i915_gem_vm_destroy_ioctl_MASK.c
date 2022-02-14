
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_address_space {int dummy; } ;
struct drm_i915_gem_vm_control {int vm_id; scalar_t__ extensions; scalar_t__ flags; } ;
struct drm_i915_file_private {int vm_idr_lock; int vm_idr; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i915_address_space*) ;
 struct i915_address_space* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_2, void *VAR_3,
         struct drm_file *VAR_4)
{
 struct drm_i915_file_private *VAR_5 = VAR_4->driver_priv;
 struct drm_i915_gem_vm_control *VAR_6 = VAR_3;
 struct i915_address_space *VAR_7;
 int VAR_8;
 u32 VAR_9;

 if (VAR_6->flags)
  return -VAR_0;

 if (VAR_6->extensions)
  return -VAR_0;

 VAR_9 = VAR_6->vm_id;
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_2(&VAR_5->vm_idr_lock);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_1(&VAR_5->vm_idr, VAR_9);

 FUNC_3(&VAR_5->vm_idr_lock);
 if (!VAR_7)
  return -VAR_1;

 FUNC_0(VAR_7);
 return 0;
}
