
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_vm_bo_base {int moved; int vm_status; struct amdgpu_bo* bo; struct amdgpu_vm* vm; } ;
struct amdgpu_vm {int evicted; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct amdgpu_bo {TYPE_1__ tbo; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_vm_bo_base *VAR_1)
{
 struct amdgpu_vm *VAR_2 = VAR_1->vm;
 struct amdgpu_bo *VAR_3 = VAR_1->bo;

 VAR_1->moved = 1;
 if (VAR_3->tbo.type == VAR_0)
  FUNC_0(&VAR_1->vm_status, &VAR_2->evicted);
 else
  FUNC_1(&VAR_1->vm_status, &VAR_2->evicted);
}
