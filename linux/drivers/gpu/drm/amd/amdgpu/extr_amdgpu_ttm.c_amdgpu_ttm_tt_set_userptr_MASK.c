
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ttm_tt {int dummy; } ;
struct amdgpu_ttm_tt {scalar_t__ usertask; int userflags; int userptr; } ;
struct TYPE_2__ {scalar_t__ group_leader; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct ttm_tt *VAR_2, uint64_t VAR_3,
         uint32_t VAR_4)
{
 struct amdgpu_ttm_tt *VAR_5 = (void *)VAR_2;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->userptr = VAR_3;
 VAR_5->userflags = VAR_4;

 if (VAR_5->usertask)
  FUNC_1(VAR_5->usertask);
 VAR_5->usertask = VAR_1->group_leader;
 FUNC_0(VAR_5->usertask);

 return 0;
}
