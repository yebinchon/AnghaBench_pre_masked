
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;
typedef enum amd_clockgating_state { ____Placeholder_amd_clockgating_state } amd_clockgating_state ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0,
        enum amd_clockgating_state VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_0;

 VAR_2 = FUNC_1(VAR_3, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_3, VAR_1);
}
