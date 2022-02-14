
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct i915_ggtt {int fence_list; TYPE_2__ vm; } ;
struct i915_fence_reg {int link; TYPE_1__* i915; } ;
struct TYPE_3__ {struct i915_ggtt ggtt; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct i915_fence_reg *VAR_0)
{
 struct i915_ggtt *VAR_1 = &VAR_0->i915->ggtt;

 FUNC_1(&VAR_1->vm.mutex);

 FUNC_0(&VAR_0->link, &VAR_1->fence_list);
}
