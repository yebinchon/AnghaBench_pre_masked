
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;





__attribute__((used)) static int FUNC_0(struct amdgpu_device *VAR_0)
{
 int VAR_1 = 0;

 switch (VAR_0->asic_type) {
 case 129:
 case 128:
  VAR_1 = 6;
  break;
 default:
  VAR_1 = 0;
 }
 return VAR_1;
}
