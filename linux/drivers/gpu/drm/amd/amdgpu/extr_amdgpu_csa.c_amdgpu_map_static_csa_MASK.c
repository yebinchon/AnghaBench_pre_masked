
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ww_acquire_ctx {int dummy; } ;
struct list_head {int dummy; } ;
struct ttm_validate_buffer {int num_shared; struct list_head head; int * bo; } ;
struct amdgpu_vm {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_va {int dummy; } ;
struct amdgpu_bo_list_entry {int dummy; } ;
struct amdgpu_bo {int tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int FUNC_1 (struct list_head*) ;
 struct amdgpu_bo_va* FUNC_2 (struct amdgpu_device*,struct amdgpu_vm*,struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_bo_va*,int ,int ,int ,int) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_bo_va*) ;
 int FUNC_5 (struct amdgpu_vm*,struct list_head*,struct amdgpu_bo_list_entry*) ;
 int FUNC_6 (struct list_head*,struct list_head*) ;
 int FUNC_7 (struct ww_acquire_ctx*,struct list_head*) ;
 int FUNC_8 (struct ww_acquire_ctx*,struct list_head*,int,int *,int) ;

int FUNC_9(struct amdgpu_device *VAR_4, struct amdgpu_vm *VAR_5,
     struct amdgpu_bo *VAR_6, struct amdgpu_bo_va **VAR_7,
     uint64_t VAR_8, uint32_t VAR_9)
{
 struct ww_acquire_ctx VAR_10;
 struct list_head VAR_11;
 struct amdgpu_bo_list_entry VAR_12;
 struct ttm_validate_buffer VAR_13;
 int VAR_14;

 FUNC_1(&VAR_11);
 FUNC_1(&VAR_13.head);
 VAR_13.bo = &VAR_6->tbo;
 VAR_13.num_shared = 1;

 FUNC_6(&VAR_13.head, &VAR_11);
 FUNC_5(VAR_5, &VAR_11, &VAR_12);

 VAR_14 = FUNC_8(&VAR_10, &VAR_11, 1, ((void*)0), 0);
 if (VAR_14) {
  FUNC_0("failed to reserve CSA,PD BOs: err=%d\n", VAR_14);
  return VAR_14;
 }

 *VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (!*VAR_7) {
  FUNC_7(&VAR_10, &VAR_11);
  FUNC_0("failed to create bo_va for static CSA\n");
  return -VAR_3;
 }

 VAR_14 = FUNC_3(VAR_4, *VAR_7, VAR_8, 0, VAR_9,
        VAR_1 | VAR_2 |
        VAR_0);

 if (VAR_14) {
  FUNC_0("failed to do bo_map on static CSA, err=%d\n", VAR_14);
  FUNC_4(VAR_4, *VAR_7);
  FUNC_7(&VAR_10, &VAR_11);
  return VAR_14;
 }

 FUNC_7(&VAR_10, &VAR_11);
 return 0;
}
