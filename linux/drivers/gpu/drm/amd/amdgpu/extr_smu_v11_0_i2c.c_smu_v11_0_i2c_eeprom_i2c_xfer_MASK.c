
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_msg {int flags; int len; int buf; scalar_t__ addr; } ;
struct i2c_adapter {int dummy; } ;
struct amdgpu_ras_eeprom_control {int bus_locked; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_adapter*,int ,int ,int ) ;
 int FUNC_2 (struct i2c_adapter*,int ,int ,int ) ;
 int FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct i2c_adapter*) ;
 struct amdgpu_ras_eeprom_control* FUNC_5 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_3,
         struct i2c_msg *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 struct amdgpu_ras_eeprom_control *VAR_8 = FUNC_5(VAR_3);

 if (!VAR_8->bus_locked) {
  FUNC_0("I2C bus unlocked, stopping transaction!");
  return -VAR_0;
 }

 FUNC_4(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4[VAR_6].flags & VAR_1)
   VAR_7 = FUNC_1(VAR_3,
       (uint8_t)VAR_4[VAR_6].addr,
       VAR_4[VAR_6].buf, VAR_4[VAR_6].len);
  else
   VAR_7 = FUNC_2(VAR_3,
        (uint8_t)VAR_4[VAR_6].addr,
        VAR_4[VAR_6].buf, VAR_4[VAR_6].len);

  if (VAR_7 != VAR_2) {
   VAR_5 = -VAR_0;
   break;
  }
 }

 FUNC_3(VAR_3);
 return VAR_5;
}
