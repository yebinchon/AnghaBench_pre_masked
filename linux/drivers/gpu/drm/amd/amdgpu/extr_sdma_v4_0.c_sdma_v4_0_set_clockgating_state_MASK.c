
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;
typedef enum amd_clockgating_state { ____Placeholder_amd_clockgating_state } amd_clockgating_state ;


 int VAR_0 ;






 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1,
       enum amd_clockgating_state VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 if (FUNC_0(VAR_3))
  return 0;

 switch (VAR_3->asic_type) {
 case 130:
 case 129:
 case 128:
 case 132:
 case 133:
 case 131:
  FUNC_1(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  FUNC_2(VAR_3,
    VAR_2 == VAR_0 ? 1 : 0);
  break;
 default:
  break;
 }
 return 0;
}
