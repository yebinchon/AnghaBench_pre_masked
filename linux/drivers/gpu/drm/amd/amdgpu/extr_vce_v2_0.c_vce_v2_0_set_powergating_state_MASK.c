
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1,
       enum amd_powergating_state VAR_2)
{







 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 if (VAR_2 == VAR_0)
  return FUNC_1(VAR_3);
 else
  return FUNC_0(VAR_3);
}
