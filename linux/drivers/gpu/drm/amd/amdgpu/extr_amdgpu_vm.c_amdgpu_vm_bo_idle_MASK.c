
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_vm_bo_base {int moved; TYPE_1__* vm; int vm_status; } ;
struct TYPE_2__ {int idle; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_vm_bo_base *VAR_0)
{
 FUNC_0(&VAR_0->vm_status, &VAR_0->vm->idle);
 VAR_0->moved = 0;
}
