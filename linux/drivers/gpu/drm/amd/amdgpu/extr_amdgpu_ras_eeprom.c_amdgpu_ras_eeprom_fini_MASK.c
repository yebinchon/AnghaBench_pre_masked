
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ras_eeprom_control {int eeprom_accessor; } ;
struct amdgpu_device {int asic_type; } ;



 int FUNC_0 (int *) ;
 struct amdgpu_device* FUNC_1 (struct amdgpu_ras_eeprom_control*) ;

void FUNC_2(struct amdgpu_ras_eeprom_control *VAR_0)
{
 struct amdgpu_device *VAR_1 = FUNC_1(VAR_0);

 switch (VAR_1->asic_type) {
 case 128:
  FUNC_0(&VAR_0->eeprom_accessor);
  break;

 default:
  return;
 }
}
