
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct radeon_ttm_tt {int userptr; } ;


 struct radeon_ttm_tt* FUNC_0 (struct ttm_tt*) ;

bool FUNC_1(struct ttm_tt *VAR_0)
{
 struct radeon_ttm_tt *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0))
  return 0;

 return !!VAR_1->userptr;
}
