
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int asic_type; } ;
typedef enum amdgpu_firmware_load_type { ____Placeholder_amdgpu_firmware_load_type } amdgpu_firmware_load_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

enum amdgpu_firmware_load_type
FUNC_1(struct amdgpu_device *VAR_3, int VAR_4)
{
 switch (VAR_3->asic_type) {
 case 133:
 case 134:
 case 152:
 case 153:
 case 136:
 case 141:
 case 140:
 case 139:
 case 129:
  return VAR_2;
 case 132:
 case 138:
 case 131:
 case 130:
 case 137:
 case 146:
 case 144:
 case 145:
  if (!VAR_4)
   return VAR_0;
  else
   return VAR_1;
 case 155:
  return VAR_0;

 default:
  FUNC_0("Unknown firmware load type\n");
 }

 return VAR_0;
}
