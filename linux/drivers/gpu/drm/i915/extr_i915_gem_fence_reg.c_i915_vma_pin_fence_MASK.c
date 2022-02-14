
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_vma {TYPE_2__* vm; } ;
struct TYPE_4__ {int mutex; TYPE_1__* i915; } ;
struct TYPE_3__ {int runtime_pm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct i915_vma *VAR_0)
{
 int VAR_1;





 FUNC_2(&VAR_0->vm->i915->runtime_pm);
 FUNC_0(!FUNC_4(VAR_0));
 FUNC_0(!FUNC_3(VAR_0));

 VAR_1 = FUNC_5(&VAR_0->vm->mutex);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_6(&VAR_0->vm->mutex);

 return VAR_1;
}
