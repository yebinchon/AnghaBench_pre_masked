
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct dma_fence {int dummy; } ;
struct amdkfd_process_info {int lock; int pid; TYPE_12__* eviction_fence; int restore_userptr_work; int evicted_bos; int userptr_inval_list; int userptr_valid_list; int kfd_bo_list; int vm_list_head; } ;
struct TYPE_17__ {TYPE_8__* bo; } ;
struct TYPE_18__ {TYPE_4__ base; } ;
struct amdgpu_vm {TYPE_6__* process_info; TYPE_5__ root; int vm_list_node; } ;
struct TYPE_14__ {int resv; } ;
struct TYPE_15__ {TYPE_1__ base; } ;
struct TYPE_21__ {TYPE_2__ tbo; } ;
struct TYPE_20__ {int group_leader; int mm; } ;
struct TYPE_19__ {int lock; int n_vms; int vm_list_head; TYPE_3__* eviction_fence; } ;
struct TYPE_16__ {int base; } ;
struct TYPE_13__ {struct dma_fence base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 TYPE_12__* FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_8__*,int *,int) ;
 int FUNC_4 (TYPE_8__*,int) ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int *,int ) ;
 TYPE_7__* VAR_5 ;
 int FUNC_8 (int) ;
 struct dma_fence* FUNC_9 (struct dma_fence*) ;
 int FUNC_10 (struct dma_fence*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct amdkfd_process_info*) ;
 struct amdkfd_process_info* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct amdgpu_vm*) ;

__attribute__((used)) static int FUNC_23(struct amdgpu_vm *VAR_6, void **VAR_7,
         struct dma_fence **VAR_8)
{
 struct amdkfd_process_info *VAR_9 = ((void*)0);
 int VAR_10;

 if (!*VAR_7) {
  VAR_9 = FUNC_14(sizeof(*VAR_9), VAR_2);
  if (!VAR_9)
   return -VAR_1;

  FUNC_17(&VAR_9->lock);
  FUNC_1(&VAR_9->vm_list_head);
  FUNC_1(&VAR_9->kfd_bo_list);
  FUNC_1(&VAR_9->userptr_valid_list);
  FUNC_1(&VAR_9->userptr_inval_list);

  VAR_9->eviction_fence =
   FUNC_2(FUNC_8(1),
         VAR_5->mm);
  if (!VAR_9->eviction_fence) {
   FUNC_20("Failed to create eviction fence\n");
   VAR_10 = -VAR_1;
   goto create_evict_fence_fail;
  }

  VAR_9->pid = FUNC_12(VAR_5->group_leader, VAR_3);
  FUNC_7(&VAR_9->evicted_bos, 0);
  FUNC_0(&VAR_9->restore_userptr_work,
      VAR_4);

  *VAR_7 = VAR_9;
  *VAR_8 = FUNC_9(&VAR_9->eviction_fence->base);
 }

 VAR_6->process_info = *VAR_7;


 VAR_10 = FUNC_4(VAR_6->root.base.bo, 1);
 if (VAR_10)
  goto reserve_pd_fail;
 VAR_10 = FUNC_22(VAR_6);
 if (VAR_10) {
  FUNC_20("validate_pt_pd_bos() failed\n");
  goto validate_pd_fail;
 }
 VAR_10 = FUNC_5(VAR_6->root.base.bo,
      VAR_0, 0);
 if (VAR_10)
  goto wait_pd_fail;
 VAR_10 = FUNC_11(VAR_6->root.base.bo->tbo.base.resv, 1);
 if (VAR_10)
  goto reserve_shared_fail;
 FUNC_3(VAR_6->root.base.bo,
   &VAR_6->process_info->eviction_fence->base, 1);
 FUNC_6(VAR_6->root.base.bo);


 FUNC_18(&VAR_6->process_info->lock);
 FUNC_15(&VAR_6->vm_list_node,
   &(VAR_6->process_info->vm_list_head));
 VAR_6->process_info->n_vms++;
 FUNC_19(&VAR_6->process_info->lock);

 return 0;

reserve_shared_fail:
wait_pd_fail:
validate_pd_fail:
 FUNC_6(VAR_6->root.base.bo);
reserve_pd_fail:
 VAR_6->process_info = ((void*)0);
 if (VAR_9) {

  FUNC_10(&VAR_9->eviction_fence->base);
  FUNC_10(*VAR_8);
  *VAR_8 = ((void*)0);
  *VAR_7 = ((void*)0);
  FUNC_21(VAR_9->pid);
create_evict_fence_fail:
  FUNC_16(&VAR_9->lock);
  FUNC_13(VAR_9);
 }
 return VAR_10;
}
