
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_placement {int num_placement; int num_busy_placement; struct ttm_place* busy_placement; struct ttm_place* placement; } ;
struct ttm_place {int flags; scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct ttm_operation_ctx {int no_wait_gpu; } ;
struct ttm_mem_reg {int * mm_node; } ;
struct ttm_buffer_object {int bdev; struct ttm_mem_reg mem; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ttm_buffer_object*,int,int ,struct ttm_mem_reg*,struct ttm_mem_reg*) ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_4 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,struct ttm_operation_ctx*) ;
 int FUNC_5 (struct ttm_buffer_object*,struct ttm_operation_ctx*,struct ttm_mem_reg*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ttm_buffer_object *VAR_2, bool VAR_3,
    struct ttm_operation_ctx *VAR_4,
    struct ttm_mem_reg *VAR_5)
{
 struct amdgpu_device *VAR_6;
 struct ttm_mem_reg *VAR_7 = &VAR_2->mem;
 struct ttm_mem_reg VAR_8;
 struct ttm_placement VAR_9;
 struct ttm_place VAR_10;
 int VAR_11;

 VAR_6 = FUNC_1(VAR_2->bdev);


 VAR_8 = *VAR_5;
 VAR_8.mm_node = ((void*)0);
 VAR_9.num_placement = 1;
 VAR_9.placement = &VAR_10;
 VAR_9.num_busy_placement = 1;
 VAR_9.busy_placement = &VAR_10;
 VAR_10.fpfn = 0;
 VAR_10.lpfn = 0;
 VAR_10.flags = VAR_1 | VAR_0;
 VAR_11 = FUNC_4(VAR_2, &VAR_9, &VAR_8, VAR_4);
 if (FUNC_6(VAR_11)) {
  FUNC_2("Failed to find GTT space for blit to VRAM\n");
  return VAR_11;
 }


 VAR_11 = FUNC_5(VAR_2, VAR_4, &VAR_8);
 if (FUNC_6(VAR_11)) {
  goto out_cleanup;
 }


 VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_4->no_wait_gpu, VAR_5, VAR_7);
 if (FUNC_6(VAR_11)) {
  goto out_cleanup;
 }
out_cleanup:
 FUNC_3(VAR_2, &VAR_8);
 return VAR_11;
}
