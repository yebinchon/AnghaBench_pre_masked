
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (struct amdgpu_bo*) ;
 scalar_t__ FUNC_1 (struct amdgpu_bo*,int) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_bo**) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct amdgpu_bo **VAR_0, u64 *VAR_1,
      void **VAR_2)
{
 if (*VAR_0 == ((void*)0))
  return;

 if (FUNC_5(FUNC_1(*VAR_0, 1) == 0)) {
  if (VAR_2)
   FUNC_0(*VAR_0);

  FUNC_2(*VAR_0);
  FUNC_4(*VAR_0);
 }
 FUNC_3(VAR_0);

 if (VAR_1)
  *VAR_1 = 0;

 if (VAR_2)
  *VAR_2 = ((void*)0);
}
