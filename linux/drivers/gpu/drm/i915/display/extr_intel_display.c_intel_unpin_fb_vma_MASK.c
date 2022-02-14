
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i915_vma {int obj; TYPE_3__* vm; } ;
struct TYPE_6__ {TYPE_2__* i915; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct TYPE_5__ {TYPE_1__ drm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct i915_vma *VAR_1, unsigned long VAR_2)
{
 FUNC_5(&VAR_1->vm->i915->drm.struct_mutex);

 FUNC_0(VAR_1->obj);
 if (VAR_2 & VAR_0)
  FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1->obj);

 FUNC_3(VAR_1);
}
