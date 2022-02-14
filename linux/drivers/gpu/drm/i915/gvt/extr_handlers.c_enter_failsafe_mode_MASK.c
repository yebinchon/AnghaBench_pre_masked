
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu {int failsafe; int id; } ;





 int FUNC_0 (char*,...) ;

void FUNC_1(struct intel_vgpu *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
  FUNC_0("Detected your guest driver doesn't support GVT-g.\n");
  break;
 case 129:
  FUNC_0("Graphics resource is not enough for the guest\n");
  break;
 case 130:
  FUNC_0("GVT Internal error  for the guest\n");
  break;
 default:
  break;
 }
 FUNC_0("Now vgpu %d will enter failsafe mode.\n", VAR_0->id);
 VAR_0->failsafe = 1;
}
