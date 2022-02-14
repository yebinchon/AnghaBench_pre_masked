
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i915; } ;
struct i915_ggtt {TYPE_1__ vm; } ;
struct TYPE_4__ {int * space; } ;


 int FUNC_0 (char*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_ggtt*,int *) ;

void FUNC_3(struct i915_ggtt *VAR_1)
{
 int VAR_2;

 if (!FUNC_1(VAR_1->vm.i915))
  return;

 FUNC_0("VGT deballoon.\n");

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  FUNC_2(VAR_1, &VAR_0.space[VAR_2]);
}
