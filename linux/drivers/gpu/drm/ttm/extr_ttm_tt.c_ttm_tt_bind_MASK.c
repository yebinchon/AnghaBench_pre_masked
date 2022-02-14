
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; TYPE_1__* func; } ;
struct ttm_operation_ctx {int dummy; } ;
struct ttm_mem_reg {int dummy; } ;
struct TYPE_2__ {int (* bind ) (struct ttm_tt*,struct ttm_mem_reg*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_tt*,struct ttm_mem_reg*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ttm_tt*,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ttm_tt *VAR_2, struct ttm_mem_reg *VAR_3,
  struct ttm_operation_ctx *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->state == VAR_1)
  return 0;

 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_2->func->bind(VAR_2, VAR_3);
 if (FUNC_2(VAR_5 != 0))
  return VAR_5;

 VAR_2->state = VAR_1;

 return 0;
}
