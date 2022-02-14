
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum amd_clockgating_state { ____Placeholder_amd_clockgating_state } amd_clockgating_state ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1,
       enum amd_clockgating_state VAR_2)
{
 bool VAR_3 = 0;
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_1;

 if (VAR_2 == VAR_0)
  VAR_3 = 1;

 FUNC_0(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_3);

 return 0;
}
