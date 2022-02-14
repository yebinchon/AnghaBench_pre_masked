
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {int dummy; } ;
struct TYPE_3__ {scalar_t__ num_pages; } ;
struct TYPE_4__ {TYPE_1__ ttm; } ;
struct amdgpu_ttm_tt {unsigned long userptr; TYPE_2__ ttm; } ;


 unsigned long VAR_0 ;

bool FUNC_0(struct ttm_tt *VAR_1, unsigned long VAR_2,
      unsigned long VAR_3)
{
 struct amdgpu_ttm_tt *VAR_4 = (void *)VAR_1;
 unsigned long VAR_5;

 if (VAR_4 == ((void*)0) || !VAR_4->userptr)
  return 0;




 VAR_5 = (unsigned long)VAR_4->ttm.ttm.num_pages * VAR_0;
 if (VAR_4->userptr > VAR_3 || VAR_4->userptr + VAR_5 <= VAR_2)
  return 0;

 return 1;
}
