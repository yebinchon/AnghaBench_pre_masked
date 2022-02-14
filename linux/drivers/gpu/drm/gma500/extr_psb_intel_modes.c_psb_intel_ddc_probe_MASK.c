
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

bool FUNC_1(struct i2c_adapter *VAR_1)
{
 u8 VAR_2[] = { 0x0, 0x0 };
 u8 VAR_3[2];
 int VAR_4;
 struct i2c_msg VAR_5[] = {
  {
   .addr = 0x50,
   .flags = 0,
   .len = 1,
   .buf = VAR_2,
   },
  {
   .addr = 0x50,
   .flags = VAR_0,
   .len = 1,
   .buf = VAR_3,
   }
 };

 VAR_4 = FUNC_0(VAR_1, VAR_5, 2);
 if (VAR_4 == 2)
  return 1;

 return 0;
}
