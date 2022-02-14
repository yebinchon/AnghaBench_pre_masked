
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
typedef enum nvbios_extdev_type { ____Placeholder_nvbios_extdev_type } nvbios_extdev_type ;





 int FUNC_0 (struct i2c_adapter*,int ,int) ;

__attribute__((used)) static bool
FUNC_1(struct i2c_adapter *VAR_0, u8 VAR_1,
         enum nvbios_extdev_type VAR_2)
{
 switch (VAR_2) {
 case 130:
 case 129:
  return FUNC_0(VAR_0, VAR_1, 0x0) >= 0;
 case 128:
  return FUNC_0(VAR_0, VAR_1, 0xff) == 0x3220 &&
         FUNC_0(VAR_0, VAR_1, 0xfe) == 0x5449;
 default:
  return 0;
 }
}
