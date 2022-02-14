
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct i915_vma* vma; } ;
struct intel_engine_cs {TYPE_1__ wa_ctx; TYPE_3__* gt; int i915; } ;
struct i915_vma {int dummy; } ;
typedef struct i915_vma drm_i915_gem_object ;
struct TYPE_6__ {TYPE_2__* ggtt; } ;
struct TYPE_5__ {int vm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i915_vma*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i915_vma*) ;
 struct i915_vma* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i915_vma*) ;
 struct i915_vma* FUNC_4 (struct i915_vma*,int *,int *) ;
 int FUNC_5 (struct i915_vma*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct intel_engine_cs *VAR_3)
{
 struct drm_i915_gem_object *VAR_4;
 struct i915_vma *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3->i915, VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_4(VAR_4, &VAR_3->gt->ggtt->vm, ((void*)0));
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  goto err;
 }

 VAR_6 = FUNC_5(VAR_5, 0, 0, VAR_1 | VAR_2);
 if (VAR_6)
  goto err;

 VAR_3->wa_ctx.vma = VAR_5;
 return 0;

err:
 FUNC_3(VAR_4);
 return VAR_6;
}
