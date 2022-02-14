
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ttm_operation_ctx {int flags; } ;
struct ttm_mem_global {scalar_t__ lower_mem_limit; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

bool
FUNC_2(struct ttm_mem_global *VAR_1,
   uint64_t VAR_2,
   struct ttm_operation_ctx *VAR_3)
{
 int64_t VAR_4;

 if (VAR_3->flags & VAR_0)
  return 0;

 VAR_4 = FUNC_0() + FUNC_1();
 VAR_4 -= VAR_2;
 if (VAR_4 < VAR_1->lower_mem_limit)
  return 1;

 return 0;
}
