
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gem_context {TYPE_2__* i915; struct i915_address_space* vm; } ;
struct i915_address_space {int dummy; } ;
struct drm_i915_gem_context_param {int value; scalar_t__ size; } ;
struct drm_i915_file_private {int vm_idr_lock; int vm_idr; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct i915_address_space* FUNC_1 (struct i915_address_space*) ;
 int FUNC_2 (struct i915_address_space*) ;
 int FUNC_3 (int *,struct i915_address_space*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drm_i915_file_private *VAR_2,
       struct i915_gem_context *VAR_3,
       struct drm_i915_gem_context_param *VAR_4)
{
 struct i915_address_space *VAR_5;
 int VAR_6;

 if (!VAR_3->vm)
  return -VAR_0;


 VAR_6 = FUNC_4(&VAR_3->i915->drm.struct_mutex);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_1(VAR_3->vm);
 FUNC_5(&VAR_3->i915->drm.struct_mutex);

 VAR_6 = FUNC_4(&VAR_2->vm_idr_lock);
 if (VAR_6)
  goto err_put;

 VAR_6 = FUNC_3(&VAR_2->vm_idr, VAR_5, 0, 0, VAR_1);
 FUNC_0(!VAR_6);
 if (VAR_6 < 0)
  goto err_unlock;

 FUNC_1(VAR_5);

 VAR_4->size = 0;
 VAR_4->value = VAR_6;

 VAR_6 = 0;
err_unlock:
 FUNC_5(&VAR_2->vm_idr_lock);
err_put:
 FUNC_2(VAR_5);
 return VAR_6;
}
