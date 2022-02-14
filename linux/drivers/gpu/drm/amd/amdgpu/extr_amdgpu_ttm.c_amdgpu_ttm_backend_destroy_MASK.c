
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int dummy; } ;
struct amdgpu_ttm_tt {int ttm; scalar_t__ usertask; } ;


 int FUNC_0 (struct amdgpu_ttm_tt*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ttm_tt *VAR_0)
{
 struct amdgpu_ttm_tt *VAR_1 = (void *)VAR_0;

 if (VAR_1->usertask)
  FUNC_1(VAR_1->usertask);

 FUNC_2(&VAR_1->ttm);
 FUNC_0(VAR_1);
}
