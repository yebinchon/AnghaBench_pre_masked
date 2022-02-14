
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_client {int addr; int adapter; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int*,void const*,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_1, u8 *VAR_2,
           u16 VAR_3, u8 VAR_4, const void *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(VAR_1);
 u8 VAR_7 = VAR_6->addr | ((VAR_3 >> 8) & 0x1);
 u8 VAR_8 = VAR_3 & 0xFF;
 struct i2c_msg VAR_9[] = {
  {
   .addr = VAR_7,
   .flags = 0,
   .len = VAR_4 + 1,
   .buf = VAR_2,
  },
 };
 int VAR_10;

 VAR_2[0] = VAR_8;
 FUNC_2(&VAR_2[1], VAR_5, VAR_4);

 VAR_10 = FUNC_1(VAR_6->adapter, VAR_9, FUNC_0(VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 return VAR_10 != FUNC_0(VAR_9) ? -VAR_0 : 0;
}
