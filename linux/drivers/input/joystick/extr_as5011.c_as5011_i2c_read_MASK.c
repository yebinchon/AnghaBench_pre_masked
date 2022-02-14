
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_msg {int flags; int len; int* buf; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3,
      uint8_t VAR_4, signed char *VAR_5)
{
 uint8_t VAR_6[2] = { VAR_4 };
 struct i2c_msg VAR_7[2] = {
  {
   .addr = VAR_3->addr,
   .flags = VAR_2,
   .len = 1,
   .buf = (uint8_t *)VAR_6
  },
  {
   .addr = VAR_3->addr,
   .flags = VAR_1 | VAR_0,
   .len = 1,
   .buf = (uint8_t *)VAR_6
  }
 };
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3->adapter, VAR_7, 2);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_5 = VAR_6[0] & 0x80 ? -1 * (1 + ~VAR_6[0]) : VAR_6[0];
 return 0;
}
