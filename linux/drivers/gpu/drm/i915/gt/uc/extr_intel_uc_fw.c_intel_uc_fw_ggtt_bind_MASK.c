
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_uc_fw {struct drm_i915_gem_object* obj; } ;
struct intel_gt {struct i915_ggtt* ggtt; } ;
struct TYPE_8__ {scalar_t__ size; int start; } ;
struct i915_vma {int pages; TYPE_3__ node; TYPE_5__* vm; } ;
struct TYPE_10__ {int (* insert_entries ) (TYPE_5__*,struct i915_vma*,int ,int ) ;} ;
struct TYPE_9__ {scalar_t__ size; } ;
struct i915_ggtt {TYPE_5__ vm; TYPE_4__ uc_fw; } ;
struct TYPE_7__ {int pages; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct drm_i915_gem_object {TYPE_2__ mm; TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (TYPE_5__*,struct i915_vma*,int ,int ) ;
 int FUNC_4 (struct intel_uc_fw*,struct i915_ggtt*) ;

__attribute__((used)) static void FUNC_5(struct intel_uc_fw *VAR_1,
      struct intel_gt *VAR_2)
{
 struct drm_i915_gem_object *VAR_3 = VAR_1->obj;
 struct i915_ggtt *VAR_4 = VAR_2->ggtt;
 struct i915_vma VAR_5 = {
  .node.start = FUNC_4(VAR_1, VAR_4),
  .node.size = VAR_3->base.size,
  .pages = VAR_3->mm.pages,
  .vm = &VAR_4->vm,
 };

 FUNC_0(!FUNC_2(VAR_3));
 FUNC_0(VAR_5.node.size > VAR_4->uc_fw.size);


 FUNC_1(VAR_5.pages);

 VAR_4->vm.insert_entries(&VAR_4->vm, &VAR_5, VAR_0, 0);
}
