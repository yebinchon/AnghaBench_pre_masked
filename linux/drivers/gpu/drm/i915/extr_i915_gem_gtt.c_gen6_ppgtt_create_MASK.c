
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int top; int pte_encode; int cleanup; int insert_entries; int clear_range; int allocate_va_range; } ;
struct i915_ppgtt {struct gen6_ppgtt* pd; TYPE_2__ vm; } ;
struct TYPE_3__ {int pte_encode; } ;
struct i915_ggtt {TYPE_1__ vm; } ;
struct gen6_ppgtt {struct i915_ppgtt base; int vma; } ;
struct drm_i915_private {int gt; struct i915_ggtt ggtt; } ;


 int VAR_0 ;
 struct i915_ppgtt* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct gen6_ppgtt* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct gen6_ppgtt*) ;
 int VAR_6 ;
 int FUNC_6 (struct gen6_ppgtt*) ;
 struct gen6_ppgtt* FUNC_7 (int,int ) ;
 int FUNC_8 (struct gen6_ppgtt*,int ) ;
 int FUNC_9 (struct i915_ppgtt*,int *) ;

__attribute__((used)) static struct i915_ppgtt *FUNC_10(struct drm_i915_private *VAR_7)
{
 struct i915_ggtt * const VAR_8 = &VAR_7->ggtt;
 struct gen6_ppgtt *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_9(&VAR_9->base, &VAR_7->gt);
 VAR_9->base.vm.top = 1;

 VAR_9->base.vm.allocate_va_range = VAR_3;
 VAR_9->base.vm.clear_range = VAR_5;
 VAR_9->base.vm.insert_entries = VAR_6;
 VAR_9->base.vm.cleanup = VAR_4;

 VAR_9->base.vm.pte_encode = VAR_8->vm.pte_encode;

 VAR_9->base.pd = FUNC_3(sizeof(*VAR_9->base.pd));
 if (!VAR_9->base.pd) {
  VAR_10 = -VAR_0;
  goto err_free;
 }

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  goto err_pd;

 VAR_9->vma = FUNC_8(VAR_9, VAR_1);
 if (FUNC_1(VAR_9->vma)) {
  VAR_10 = FUNC_2(VAR_9->vma);
  goto err_scratch;
 }

 return &VAR_9->base;

err_scratch:
 FUNC_4(&VAR_9->base.vm);
err_pd:
 FUNC_6(VAR_9->base.pd);
err_free:
 FUNC_6(VAR_9);
 return FUNC_0(VAR_10);
}
