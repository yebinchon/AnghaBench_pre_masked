
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_vmid_mgr {int lock; int reserved_vmid_num; int ids_lru; } ;
struct amdgpu_vm {TYPE_1__** reserved_vmid; } ;
struct TYPE_4__ {struct amdgpu_vmid_mgr* id_mgr; } ;
struct amdgpu_device {TYPE_2__ vm_manager; } ;
struct TYPE_3__ {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct amdgpu_device *VAR_0,
          struct amdgpu_vm *VAR_1,
          unsigned VAR_2)
{
 struct amdgpu_vmid_mgr *VAR_3 = &VAR_0->vm_manager.id_mgr[VAR_2];

 FUNC_2(&VAR_3->lock);
 if (VAR_1->reserved_vmid[VAR_2]) {
  FUNC_1(&VAR_1->reserved_vmid[VAR_2]->list,
   &VAR_3->ids_lru);
  VAR_1->reserved_vmid[VAR_2] = ((void*)0);
  FUNC_0(&VAR_3->reserved_vmid_num);
 }
 FUNC_3(&VAR_3->lock);
}
