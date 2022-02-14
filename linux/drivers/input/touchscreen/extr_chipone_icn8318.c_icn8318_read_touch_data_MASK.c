
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct icn8318_touch_data {int dummy; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2,
       struct icn8318_touch_data *VAR_3)
{
 u8 VAR_4 = VAR_1;
 struct i2c_msg VAR_5[2] = {
  {
   .addr = VAR_2->addr,
   .len = 1,
   .buf = &VAR_4
  },
  {
   .addr = VAR_2->addr,
   .flags = VAR_0,
   .len = sizeof(struct icn8318_touch_data),
   .buf = (u8 *)VAR_3
  }
 };

 return FUNC_0(VAR_2->adapter, VAR_5, 2);
}
