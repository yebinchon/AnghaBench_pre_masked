
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 switch (VAR_1->asic_type) {
 case 143:
 case 131:
  FUNC_0(VAR_1);
  break;
 case 144:
 case 133:
 case 135:
 case 134:
 case 129:
  FUNC_1(VAR_1);
  break;
 case 130:




  break;
 default:
  break;
 }
 return 0;
}
