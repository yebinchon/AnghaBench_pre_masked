
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct amdgpu_ttm_tt {int userptr; } ;



bool FUNC_0(struct ttm_tt *VAR_0)
{
 struct amdgpu_ttm_tt *VAR_1 = (void *)VAR_0;

 if (VAR_1 == ((void*)0) || !VAR_1->userptr)
  return 0;

 return 1;
}
