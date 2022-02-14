
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_validate_buffer {int num_shared; int head; int * bo; } ;
struct kgd_mem {struct amdgpu_bo* bo; struct ttm_validate_buffer validate_list; } ;
struct amdkfd_process_info {int lock; int kfd_bo_list; int userptr_valid_list; } ;
struct amdgpu_bo {int tbo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kgd_mem *VAR_0,
    struct amdkfd_process_info *VAR_1,
    bool VAR_2)
{
 struct ttm_validate_buffer *VAR_3 = &VAR_0->validate_list;
 struct amdgpu_bo *VAR_4 = VAR_0->bo;

 FUNC_0(&VAR_3->head);
 VAR_3->num_shared = 1;
 VAR_3->bo = &VAR_4->tbo;
 FUNC_2(&VAR_1->lock);
 if (VAR_2)
  FUNC_1(&VAR_3->head, &VAR_1->userptr_valid_list);
 else
  FUNC_1(&VAR_3->head, &VAR_1->kfd_bo_list);
 FUNC_3(&VAR_1->lock);
}
