
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_overlay {struct i915_vma* reg_bo; struct i915_vma* regs; int flip_addr; struct drm_i915_private* i915; } ;
struct TYPE_5__ {TYPE_1__* pages; } ;
struct i915_vma {TYPE_2__ mm; } ;
struct TYPE_6__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_3__ drm; } ;
struct drm_i915_gem_object {TYPE_2__ mm; } ;
struct TYPE_4__ {int sgl; } ;


 scalar_t__ FUNC_0 (struct i915_vma*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i915_vma*) ;
 struct i915_vma* FUNC_2 (struct drm_i915_private*,int ) ;
 struct i915_vma* FUNC_3 (struct drm_i915_private*,int ) ;
 struct i915_vma* FUNC_4 (struct i915_vma*,int *,int ,int ,int ) ;
 int FUNC_5 (struct i915_vma*) ;
 int FUNC_6 (struct i915_vma*) ;
 struct i915_vma* FUNC_7 (struct i915_vma*) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct intel_overlay *VAR_2, bool VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_2->i915;
 struct drm_i915_gem_object *VAR_5;
 struct i915_vma *VAR_6;
 int VAR_7;

 FUNC_9(&VAR_4->drm.struct_mutex);

 VAR_5 = FUNC_3(VAR_4, VAR_0);
 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_2(VAR_4, VAR_0);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  goto err_unlock;
 }

 VAR_6 = FUNC_4(VAR_5, ((void*)0), 0, 0, VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto err_put_bo;
 }

 if (VAR_3)
  VAR_2->flip_addr = FUNC_11(VAR_5->mm.pages->sgl);
 else
  VAR_2->flip_addr = FUNC_6(VAR_6);
 VAR_2->regs = FUNC_7(VAR_6);
 FUNC_8(VAR_6);

 if (FUNC_0(VAR_2->regs)) {
  VAR_7 = FUNC_1(VAR_2->regs);
  goto err_put_bo;
 }

 VAR_2->reg_bo = VAR_5;
 FUNC_10(&VAR_4->drm.struct_mutex);
 return 0;

err_put_bo:
 FUNC_5(VAR_5);
err_unlock:
 FUNC_10(&VAR_4->drm.struct_mutex);
 return VAR_7;
}
