
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum amd_clockgating_state { ____Placeholder_amd_clockgating_state } amd_clockgating_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2,
       enum amd_clockgating_state VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_2;
 bool VAR_5 = (VAR_3 == VAR_0) ? 1 : 0;

 if (VAR_5) {

  if (FUNC_2(VAR_2))
   return -VAR_1;
  FUNC_0(VAR_4, 1);



 } else {
  FUNC_0(VAR_4, 0);
 }

 FUNC_1(VAR_4);
 return 0;
}
