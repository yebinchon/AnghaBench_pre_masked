
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* bo; } ;
struct TYPE_11__ {TYPE_5__ base; } ;
struct amdgpu_vm {int pte_support_ats; int use_cpu_for_update; unsigned int pasid; int entity; TYPE_4__ root; int faults; int * last_update; int * update_funcs; int freed; int invalidated_lock; int invalidated; int idle; int moved; int relocated; int evicted; int ** reserved_vmid; int va; } ;
struct TYPE_10__ {int vm_update_mode; int pasid_lock; int pasid_idr; int root_level; int vm_pte_num_rqs; int vm_pte_rqs; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ vm_manager; int gmc; } ;
struct amdgpu_bo_param {int flags; } ;
struct TYPE_8__ {int resv; } ;
struct TYPE_9__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;
struct TYPE_13__ {struct TYPE_13__* shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int FUNC_5 (struct amdgpu_bo*,int) ;
 int FUNC_6 (TYPE_6__**) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_5__*,struct amdgpu_vm*,struct amdgpu_bo*) ;
 int FUNC_10 (struct amdgpu_device*,struct amdgpu_vm*,int ,struct amdgpu_bo_param*) ;
 int FUNC_11 (struct amdgpu_device*,struct amdgpu_vm*,struct amdgpu_bo*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ,int *) ;
 int FUNC_15 (int *,struct amdgpu_vm*,unsigned int,unsigned int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;

int FUNC_19(struct amdgpu_device *VAR_10, struct amdgpu_vm *VAR_11,
     int VAR_12, unsigned int VAR_13)
{
 struct amdgpu_bo_param VAR_14;
 struct amdgpu_bo *VAR_15;
 int VAR_16, VAR_17;

 VAR_11->va = VAR_7;
 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
  VAR_11->reserved_vmid[VAR_17] = ((void*)0);
 FUNC_2(&VAR_11->evicted);
 FUNC_2(&VAR_11->relocated);
 FUNC_2(&VAR_11->moved);
 FUNC_2(&VAR_11->idle);
 FUNC_2(&VAR_11->invalidated);
 FUNC_16(&VAR_11->invalidated_lock);
 FUNC_2(&VAR_11->freed);


 VAR_16 = FUNC_14(&VAR_11->entity, VAR_10->vm_manager.vm_pte_rqs,
      VAR_10->vm_manager.vm_pte_num_rqs, ((void*)0));
 if (VAR_16)
  return VAR_16;

 VAR_11->pte_support_ats = 0;

 if (VAR_12 == VAR_2) {
  VAR_11->use_cpu_for_update = !!(VAR_10->vm_manager.vm_update_mode &
      VAR_3);

  if (VAR_10->asic_type == VAR_5)
   VAR_11->pte_support_ats = 1;
 } else {
  VAR_11->use_cpu_for_update = !!(VAR_10->vm_manager.vm_update_mode &
      VAR_4);
 }
 FUNC_0("VM update mode is %s\n",
    VAR_11->use_cpu_for_update ? "CPU" : "SDMA");
 FUNC_3((VAR_11->use_cpu_for_update && !FUNC_8(&VAR_10->gmc)),
    "CPU update of VM recommended only for large BAR system\n");

 if (VAR_11->use_cpu_for_update)
  VAR_11->update_funcs = &VAR_8;
 else
  VAR_11->update_funcs = &VAR_9;
 VAR_11->last_update = ((void*)0);

 FUNC_10(VAR_10, VAR_11, VAR_10->vm_manager.root_level, &VAR_14);
 if (VAR_12 == VAR_2)
  VAR_14.flags &= ~VAR_0;
 VAR_16 = FUNC_4(VAR_10, &VAR_14, &VAR_15);
 if (VAR_16)
  goto error_free_sched_entity;

 VAR_16 = FUNC_5(VAR_15, 1);
 if (VAR_16)
  goto error_free_root;

 VAR_16 = FUNC_12(VAR_15->tbo.base.resv, 1);
 if (VAR_16)
  goto error_unreserve;

 FUNC_9(&VAR_11->root.base, VAR_11, VAR_15);

 VAR_16 = FUNC_11(VAR_10, VAR_11, VAR_15);
 if (VAR_16)
  goto error_unreserve;

 FUNC_7(VAR_11->root.base.bo);

 if (VAR_13) {
  unsigned long VAR_18;

  FUNC_17(&VAR_10->vm_manager.pasid_lock, VAR_18);
  VAR_16 = FUNC_15(&VAR_10->vm_manager.pasid_idr, VAR_11, VAR_13, VAR_13 + 1,
         VAR_6);
  FUNC_18(&VAR_10->vm_manager.pasid_lock, VAR_18);
  if (VAR_16 < 0)
   goto error_free_root;

  VAR_11->pasid = VAR_13;
 }

 FUNC_1(VAR_11->faults);

 return 0;

error_unreserve:
 FUNC_7(VAR_11->root.base.bo);

error_free_root:
 FUNC_6(&VAR_11->root.base.bo->shadow);
 FUNC_6(&VAR_11->root.base.bo);
 VAR_11->root.base.bo = ((void*)0);

error_free_sched_entity:
 FUNC_13(&VAR_11->entity);

 return VAR_16;
}
