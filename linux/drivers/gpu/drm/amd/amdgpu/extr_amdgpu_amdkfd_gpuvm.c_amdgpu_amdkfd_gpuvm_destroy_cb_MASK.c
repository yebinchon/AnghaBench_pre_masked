
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdkfd_process_info {int lock; int pid; int restore_userptr_work; TYPE_3__* eviction_fence; int userptr_inval_list; int userptr_valid_list; int kfd_bo_list; int n_vms; } ;
struct TYPE_4__ {struct amdgpu_bo* bo; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct amdgpu_vm {int vm_list_node; TYPE_2__ root; struct amdkfd_process_info* process_info; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_6__ {int base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_bo*,int *,int) ;
 int FUNC_2 (struct amdgpu_bo*,int) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct amdkfd_process_info*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct amdgpu_device *VAR_0,
        struct amdgpu_vm *VAR_1)
{
 struct amdkfd_process_info *VAR_2 = VAR_1->process_info;
 struct amdgpu_bo *VAR_3 = VAR_1->root.base.bo;

 if (!VAR_2)
  return;


 FUNC_2(VAR_3, 0);
 FUNC_1(VAR_3, ((void*)0), 0);
 FUNC_3(VAR_3);


 FUNC_10(&VAR_2->lock);
 VAR_2->n_vms--;
 FUNC_7(&VAR_1->vm_list_node);
 FUNC_11(&VAR_2->lock);


 if (!VAR_2->n_vms) {
  FUNC_0(!FUNC_8(&VAR_2->kfd_bo_list));
  FUNC_0(!FUNC_8(&VAR_2->userptr_valid_list));
  FUNC_0(!FUNC_8(&VAR_2->userptr_inval_list));

  FUNC_5(&VAR_2->eviction_fence->base);
  FUNC_4(&VAR_2->restore_userptr_work);
  FUNC_12(VAR_2->pid);
  FUNC_9(&VAR_2->lock);
  FUNC_6(VAR_2);
 }
}
