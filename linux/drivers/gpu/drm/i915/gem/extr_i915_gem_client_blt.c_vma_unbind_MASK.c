
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_vma {TYPE_2__* vm; } ;
struct TYPE_3__ {int (* unbind_vma ) (struct i915_vma*) ;} ;
struct TYPE_4__ {TYPE_1__ vma_ops; } ;


 int FUNC_0 (struct i915_vma*) ;

__attribute__((used)) static void FUNC_1(struct i915_vma *VAR_0)
{
 VAR_0->vm->vma_ops.unbind_vma(VAR_0);
}
