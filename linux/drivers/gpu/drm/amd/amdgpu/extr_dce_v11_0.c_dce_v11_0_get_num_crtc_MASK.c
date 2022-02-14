
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;
__attribute__((used)) static int FUNC_0 (struct amdgpu_device *VAR_0)
{
 int VAR_1 = 0;

 switch (VAR_0->asic_type) {
 case 133:
  VAR_1 = 3;
  break;
 case 129:
  VAR_1 = 2;
  break;
 case 132:
 case 128:
  VAR_1 = 6;
  break;
 case 131:
 case 130:
  VAR_1 = 5;
  break;
 default:
  VAR_1 = 0;
 }
 return VAR_1;
}
