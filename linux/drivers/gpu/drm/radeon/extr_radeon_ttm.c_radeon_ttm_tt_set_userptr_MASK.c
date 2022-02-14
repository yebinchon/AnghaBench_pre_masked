
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ttm_tt {int dummy; } ;
struct radeon_ttm_tt {int userflags; int usermm; int userptr; } ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct radeon_ttm_tt* FUNC_0 (struct ttm_tt*) ;

int FUNC_1(struct ttm_tt *VAR_2, uint64_t VAR_3,
         uint32_t VAR_4)
{
 struct radeon_ttm_tt *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->userptr = VAR_3;
 VAR_5->usermm = VAR_1->mm;
 VAR_5->userflags = VAR_4;
 return 0;
}
