
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct amdgpu_ttm_tt {int userflags; } ;


 int VAR_0 ;

bool FUNC_0(struct ttm_tt *VAR_1)
{
 struct amdgpu_ttm_tt *VAR_2 = (void *)VAR_1;

 if (VAR_2 == ((void*)0))
  return 0;

 return !!(VAR_2->userflags & VAR_0);
}
