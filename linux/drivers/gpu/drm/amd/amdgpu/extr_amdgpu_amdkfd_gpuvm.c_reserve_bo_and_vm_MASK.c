
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kgd_mem {int sync; struct amdgpu_bo* bo; } ;
struct TYPE_3__ {int num_shared; int head; int * bo; } ;
struct TYPE_4__ {TYPE_1__ tv; scalar_t__ priority; } ;
struct bo_vm_reservation_context {int reserved; int n_vms; int * vm_pd; int duplicates; int list; int ticket; TYPE_2__ kfd_bo; int * sync; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_bo {int tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct amdgpu_vm*,int *,int *) ;
 int * FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_8(struct kgd_mem *VAR_2,
         struct amdgpu_vm *VAR_3,
         struct bo_vm_reservation_context *VAR_4)
{
 struct amdgpu_bo *VAR_5 = VAR_2->bo;
 int VAR_6;

 FUNC_1(!VAR_3);

 VAR_4->reserved = 0;
 VAR_4->n_vms = 1;
 VAR_4->sync = &VAR_2->sync;

 FUNC_0(&VAR_4->list);
 FUNC_0(&VAR_4->duplicates);

 VAR_4->vm_pd = FUNC_3(VAR_4->n_vms, sizeof(*VAR_4->vm_pd), VAR_1);
 if (!VAR_4->vm_pd)
  return -VAR_0;

 VAR_4->kfd_bo.priority = 0;
 VAR_4->kfd_bo.tv.bo = &VAR_5->tbo;
 VAR_4->kfd_bo.tv.num_shared = 1;
 FUNC_5(&VAR_4->kfd_bo.tv.head, &VAR_4->list);

 FUNC_2(VAR_3, &VAR_4->list, &VAR_4->vm_pd[0]);

 VAR_6 = FUNC_7(&VAR_4->ticket, &VAR_4->list,
         0, &VAR_4->duplicates, 1);
 if (!VAR_6)
  VAR_4->reserved = 1;
 else {
  FUNC_6("Failed to reserve buffers in ttm\n");
  FUNC_4(VAR_4->vm_pd);
  VAR_4->vm_pd = ((void*)0);
 }

 return VAR_6;
}
