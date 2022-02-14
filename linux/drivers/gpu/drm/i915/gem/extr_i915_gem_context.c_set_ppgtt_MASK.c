
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gem_context {TYPE_2__* i915; int mutex; struct i915_address_space* vm; } ;
struct i915_address_space {int dummy; } ;
struct drm_i915_gem_context_param {int value; scalar_t__ size; } ;
struct drm_i915_file_private {int vm_idr_lock; int vm_idr; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i915_address_space* FUNC_0 (struct i915_gem_context*,struct i915_address_space*) ;
 int FUNC_1 (struct i915_gem_context*,int ,int ,int ,int ,struct i915_address_space*) ;
 int VAR_4 ;
 int FUNC_2 (struct i915_address_space*) ;
 int FUNC_3 (struct i915_address_space*) ;
 struct i915_address_space* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct i915_gem_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct drm_i915_file_private *VAR_7,
       struct i915_gem_context *VAR_8,
       struct drm_i915_gem_context_param *VAR_9)
{
 struct i915_address_space *VAR_10, *VAR_11;
 int VAR_12;

 if (VAR_9->size)
  return -VAR_1;

 if (!VAR_8->vm)
  return -VAR_2;

 if (FUNC_9(VAR_9->value))
  return -VAR_3;

 VAR_12 = FUNC_7(&VAR_7->vm_idr_lock);
 if (VAR_12)
  return VAR_12;

 VAR_10 = FUNC_4(&VAR_7->vm_idr, VAR_9->value);
 if (VAR_10)
  FUNC_2(VAR_10);
 FUNC_8(&VAR_7->vm_idr_lock);
 if (!VAR_10)
  return -VAR_3;

 VAR_12 = FUNC_7(&VAR_8->i915->drm.struct_mutex);
 if (VAR_12)
  goto out;

 if (VAR_10 == VAR_8->vm)
  goto unlock;


 FUNC_6(&VAR_8->mutex);
 FUNC_5(VAR_8);
 FUNC_8(&VAR_8->mutex);

 VAR_11 = FUNC_0(VAR_8, VAR_10);






 VAR_12 = FUNC_1(VAR_8, VAR_0,
       VAR_6,
       VAR_4,
       VAR_5,
       VAR_11);
 if (VAR_12) {
  FUNC_3(FUNC_0(VAR_8, VAR_11));
  FUNC_3(VAR_11);
 }

unlock:
 FUNC_8(&VAR_8->i915->drm.struct_mutex);

out:
 FUNC_3(VAR_10);
 return VAR_12;
}
