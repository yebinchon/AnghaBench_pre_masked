
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct amdgpu_ras_eeprom_control {int bus_locked; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct i2c_adapter*) ;
 struct amdgpu_ras_eeprom_control* FUNC_2 (struct i2c_adapter*) ;

__attribute__((used)) static void FUNC_3(struct i2c_adapter *VAR_0, unsigned int VAR_1)
{
 struct amdgpu_ras_eeprom_control *VAR_2 = FUNC_2(VAR_0);

 if (!FUNC_1(VAR_0)) {
  FUNC_0("Failed to unlock the bus from SMU");
  return;
 }

 VAR_2->bus_locked = 0;
}
