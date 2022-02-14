
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {int dummy; } ;
struct mm_struct {int dummy; } ;
struct amdgpu_ttm_tt {TYPE_1__* usertask; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;



struct mm_struct *FUNC_0(struct ttm_tt *VAR_0)
{
 struct amdgpu_ttm_tt *VAR_1 = (void *)VAR_0;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 if (VAR_1->usertask == ((void*)0))
  return ((void*)0);

 return VAR_1->usertask->mm;
}
