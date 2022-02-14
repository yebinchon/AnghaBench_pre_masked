
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;

bool FUNC_3(struct amdgpu_device *VAR_1)
{
 if (!FUNC_1(VAR_1)) {
  FUNC_0("Timeout, but no hardware hang detected.\n");
  return 0;
 }

 if (VAR_0 == 0)
  goto disabled;

 if (FUNC_2(VAR_1))
  return 1;

 if (VAR_0 == -1) {
  switch (VAR_1->asic_type) {
  case 140:
  case 138:
  case 132:
  case 133:
  case 139:
  case 137:
  case 136:
  case 135:
  case 128:
  case 129:
  case 131:
  case 130:
  case 134:
   break;
  default:
   goto disabled;
  }
 }

 return 1;

disabled:
  FUNC_0("GPU recovery disabled.\n");
  return 0;
}
