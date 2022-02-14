
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_operation_ctx {int no_wait_gpu; int interruptible; } ;
struct ttm_mem_reg {scalar_t__ mem_type; } ;
struct ttm_buffer_object {int * ttm; struct ttm_mem_reg mem; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_1 (struct ttm_buffer_object*,struct ttm_operation_ctx*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_buffer_object*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ttm_buffer_object *VAR_1, bool VAR_2,
         struct ttm_operation_ctx *VAR_3,
         struct ttm_mem_reg *VAR_4)
{
 struct ttm_mem_reg *VAR_5 = &VAR_1->mem;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_3->interruptible, VAR_3->no_wait_gpu);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->mem_type == VAR_0 && VAR_1->ttm == ((void*)0)) {
  FUNC_0(VAR_1, VAR_4);
  return 0;
 }
 return FUNC_1(VAR_1, VAR_3, VAR_4);
}
