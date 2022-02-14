
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* bo; } ;
struct TYPE_9__ {TYPE_2__ base; } ;
struct amdgpu_vm {int pte_support_ats; int use_cpu_for_update; int pasid; TYPE_3__ root; int * last_update; int * update_funcs; } ;
struct TYPE_7__ {int vm_update_mode; int pasid_lock; int pasid_idr; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ vm_manager; int gmc; } ;
struct TYPE_10__ {int shadow; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct amdgpu_device*,struct amdgpu_vm*) ;
 int FUNC_8 (struct amdgpu_device*,struct amdgpu_vm*,TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct amdgpu_vm*,unsigned int,unsigned int,int ) ;
 int FUNC_11 (int *,unsigned int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

int FUNC_14(struct amdgpu_device *VAR_6, struct amdgpu_vm *VAR_7, unsigned int VAR_8)
{
 bool VAR_9 = (VAR_6->asic_type == VAR_1);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_7->root.base.bo, 1);
 if (VAR_10)
  return VAR_10;


 VAR_10 = FUNC_7(VAR_6, VAR_7);
 if (VAR_10)
  goto unreserve_bo;

 if (VAR_8) {
  unsigned long VAR_11;

  FUNC_12(&VAR_6->vm_manager.pasid_lock, VAR_11);
  VAR_10 = FUNC_10(&VAR_6->vm_manager.pasid_idr, VAR_7, VAR_8, VAR_8 + 1,
         VAR_3);
  FUNC_13(&VAR_6->vm_manager.pasid_lock, VAR_11);

  if (VAR_10 == -VAR_2)
   goto unreserve_bo;
  VAR_10 = 0;
 }




 if (VAR_9 != VAR_7->pte_support_ats) {
  VAR_7->pte_support_ats = VAR_9;
  VAR_10 = FUNC_8(VAR_6, VAR_7, VAR_7->root.base.bo);
  if (VAR_10)
   goto free_idr;
 }


 VAR_7->use_cpu_for_update = !!(VAR_6->vm_manager.vm_update_mode &
        VAR_0);
 FUNC_0("VM update mode is %s\n",
    VAR_7->use_cpu_for_update ? "CPU" : "SDMA");
 FUNC_1((VAR_7->use_cpu_for_update && !FUNC_5(&VAR_6->gmc)),
    "CPU update of VM recommended only for large BAR system\n");

 if (VAR_7->use_cpu_for_update)
  VAR_7->update_funcs = &VAR_4;
 else
  VAR_7->update_funcs = &VAR_5;
 FUNC_9(VAR_7->last_update);
 VAR_7->last_update = ((void*)0);

 if (VAR_7->pasid) {
  unsigned long VAR_12;

  FUNC_12(&VAR_6->vm_manager.pasid_lock, VAR_12);
  FUNC_11(&VAR_6->vm_manager.pasid_idr, VAR_7->pasid);
  FUNC_13(&VAR_6->vm_manager.pasid_lock, VAR_12);




  FUNC_6(VAR_7->pasid);
  VAR_7->pasid = 0;
 }


 FUNC_3(&VAR_7->root.base.bo->shadow);

 if (VAR_8)
  VAR_7->pasid = VAR_8;

 goto unreserve_bo;

free_idr:
 if (VAR_8) {
  unsigned long VAR_13;

  FUNC_12(&VAR_6->vm_manager.pasid_lock, VAR_13);
  FUNC_11(&VAR_6->vm_manager.pasid_idr, VAR_8);
  FUNC_13(&VAR_6->vm_manager.pasid_lock, VAR_13);
 }
unreserve_bo:
 FUNC_4(VAR_7->root.base.bo);
 return VAR_10;
}
