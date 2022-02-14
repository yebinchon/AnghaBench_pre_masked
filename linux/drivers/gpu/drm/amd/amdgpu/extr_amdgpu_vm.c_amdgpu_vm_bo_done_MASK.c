
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_vm_bo_base {TYPE_1__* vm; int vm_status; } ;
struct TYPE_2__ {int invalidated_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_vm_bo_base *VAR_0)
{
 FUNC_1(&VAR_0->vm->invalidated_lock);
 FUNC_0(&VAR_0->vm_status);
 FUNC_2(&VAR_0->vm->invalidated_lock);
}
