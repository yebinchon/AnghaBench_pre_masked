
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_placement {int num_placement; int num_busy_placement; struct ttm_place* busy_placement; struct ttm_place* placement; } ;
struct ttm_place {int flags; scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct ttm_mem_reg {int * mm_node; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ttm_buffer_object*,int,int,struct ttm_mem_reg*,struct ttm_mem_reg*) ;
 int FUNC_1 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,struct ttm_operation_ctx*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_operation_ctx*,struct ttm_mem_reg*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ttm_buffer_object *VAR_2,
    bool VAR_3, bool VAR_4,
    bool VAR_5,
    struct ttm_mem_reg *VAR_6)
{
 struct ttm_operation_ctx VAR_7 = { VAR_4, VAR_5 };
 struct ttm_mem_reg *VAR_8 = &VAR_2->mem;
 struct ttm_mem_reg VAR_9;
 struct ttm_placement VAR_10;
 struct ttm_place VAR_11;
 int VAR_12;

 VAR_9 = *VAR_6;
 VAR_9.mm_node = ((void*)0);
 VAR_10.num_placement = 1;
 VAR_10.placement = &VAR_11;
 VAR_10.num_busy_placement = 1;
 VAR_10.busy_placement = &VAR_11;
 VAR_11.fpfn = 0;
 VAR_11.lpfn = 0;
 VAR_11.flags = VAR_1 | VAR_0;
 VAR_12 = FUNC_2(VAR_2, &VAR_10, &VAR_9, &VAR_7);
 if (FUNC_4(VAR_12)) {
  return VAR_12;
 }
 VAR_12 = FUNC_3(VAR_2, &VAR_7, &VAR_9);
 if (FUNC_4(VAR_12)) {
  goto out_cleanup;
 }
 VAR_12 = FUNC_0(VAR_2, 1, VAR_5, VAR_6, VAR_8);
 if (FUNC_4(VAR_12)) {
  goto out_cleanup;
 }
out_cleanup:
 FUNC_1(VAR_2, &VAR_9);
 return VAR_12;
}
