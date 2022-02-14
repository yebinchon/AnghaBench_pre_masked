
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {scalar_t__ state; } ;
struct ttm_operation_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ttm_tt*,struct ttm_operation_ctx*) ;

int FUNC_1(struct ttm_tt *VAR_1, struct ttm_operation_ctx *VAR_2)
{
 if (VAR_1->state != VAR_0)
  return 0;

 return FUNC_0(VAR_1, VAR_2);
}
