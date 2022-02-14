
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* allocate_va_range ) (TYPE_3__*,int ,int ) ;int total; } ;
struct i915_ppgtt {TYPE_3__ vm; } ;
struct TYPE_5__ {scalar_t__ bind_vma; scalar_t__ unbind_vma; } ;
struct TYPE_6__ {TYPE_1__ vma_ops; int total; int i915; } ;
struct i915_ggtt {TYPE_2__ vm; struct i915_ppgtt* alias; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i915_ppgtt*) ;
 int FUNC_3 (struct i915_ppgtt*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct i915_ppgtt* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct i915_ggtt *VAR_5)
{
 struct i915_ppgtt *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_5->vm.i915);
 if (FUNC_2(VAR_6))
  return FUNC_3(VAR_6);

 if (FUNC_1(VAR_6->vm.total < VAR_5->vm.total)) {
  VAR_7 = -VAR_0;
  goto err_ppgtt;
 }







 VAR_7 = VAR_6->vm.allocate_va_range(&VAR_6->vm, 0, VAR_5->vm.total);
 if (VAR_7)
  goto err_ppgtt;

 VAR_5->alias = VAR_6;

 FUNC_0(VAR_5->vm.vma_ops.bind_vma != VAR_3);
 VAR_5->vm.vma_ops.bind_vma = VAR_1;

 FUNC_0(VAR_5->vm.vma_ops.unbind_vma != VAR_4);
 VAR_5->vm.vma_ops.unbind_vma = VAR_2;

 return 0;

err_ppgtt:
 FUNC_5(&VAR_6->vm);
 return VAR_7;
}
