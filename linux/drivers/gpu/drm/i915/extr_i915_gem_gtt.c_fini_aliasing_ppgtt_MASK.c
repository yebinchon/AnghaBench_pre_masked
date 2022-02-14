
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i915_ppgtt {int vm; } ;
struct TYPE_4__ {int unbind_vma; int bind_vma; } ;
struct TYPE_5__ {TYPE_1__ vma_ops; struct drm_i915_private* i915; } ;
struct i915_ggtt {TYPE_2__ vm; int alias; } ;
struct TYPE_6__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_3__ drm; } ;


 struct i915_ppgtt* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i915_ggtt *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->vm.i915;
 struct i915_ppgtt *VAR_4;

 FUNC_2(&VAR_3->drm.struct_mutex);

 VAR_4 = FUNC_0(&VAR_2->alias);
 if (!VAR_4)
  goto out;

 FUNC_1(&VAR_4->vm);

 VAR_2->vm.vma_ops.bind_vma = VAR_0;
 VAR_2->vm.vma_ops.unbind_vma = VAR_1;

out:
 FUNC_3(&VAR_3->drm.struct_mutex);
}
