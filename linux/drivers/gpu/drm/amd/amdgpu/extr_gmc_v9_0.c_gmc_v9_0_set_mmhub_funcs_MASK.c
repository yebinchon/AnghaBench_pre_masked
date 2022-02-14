
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; int * mmhub_funcs; } ;



 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 switch (VAR_1->asic_type) {
 case 128:
  VAR_1->mmhub_funcs = &VAR_0;
  break;
 default:
  break;
 }
}
