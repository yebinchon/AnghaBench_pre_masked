
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_placement {int num_placement; int num_busy_placement; struct ttm_place* busy_placement; struct ttm_place* placement; } ;
struct ttm_place {int flags; int lpfn; int fpfn; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct ttm_mem_reg {int * mm_node; } ;
struct ttm_buffer_object {int ttm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ttm_buffer_object*,int,int,int,struct ttm_mem_reg*) ;
 int FUNC_1 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,struct ttm_operation_ctx*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_operation_ctx*,struct ttm_mem_reg*) ;
 int FUNC_4 (int ,struct ttm_mem_reg*,struct ttm_operation_ctx*) ;

__attribute__((used)) static int
FUNC_5(struct ttm_buffer_object *VAR_2, bool VAR_3, bool VAR_4,
        bool VAR_5, struct ttm_mem_reg *VAR_6)
{
 struct ttm_operation_ctx VAR_7 = { VAR_4, VAR_5 };
 struct ttm_place VAR_8 = {
  .fpfn = 0,
  .lpfn = 0,
  .flags = VAR_0 | VAR_1
 };
 struct ttm_placement VAR_9;
 struct ttm_mem_reg VAR_10;
 int VAR_11;

 VAR_9.num_placement = VAR_9.num_busy_placement = 1;
 VAR_9.placement = VAR_9.busy_placement = &VAR_8;

 VAR_10 = *VAR_6;
 VAR_10.mm_node = ((void*)0);
 VAR_11 = FUNC_2(VAR_2, &VAR_9, &VAR_10, &VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_2->ttm, &VAR_10, &VAR_7);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_0(VAR_2, 1, VAR_4, VAR_5, &VAR_10);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_3(VAR_2, &VAR_7, VAR_6);
out:
 FUNC_1(VAR_2, &VAR_10);
 return VAR_11;
}
