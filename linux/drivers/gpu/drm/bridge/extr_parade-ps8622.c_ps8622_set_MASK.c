
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_msg {int len; scalar_t__* buf; scalar_t__ flags; scalar_t__ addr; } ;
struct i2c_client {scalar_t__ addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef int data ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct i2c_adapter *VAR_5 = VAR_0->adapter;
 struct i2c_msg VAR_6;
 u8 VAR_7[] = {VAR_2, VAR_3};

 VAR_6.addr = VAR_0->addr + VAR_1;
 VAR_6.flags = 0;
 VAR_6.len = sizeof(VAR_7);
 VAR_6.buf = VAR_7;

 VAR_4 = FUNC_0(VAR_5, &VAR_6, 1);
 if (VAR_4 != 1)
  FUNC_1("PS8622 I2C write (0x%02x,0x%02x,0x%02x) failed: %d\n",
   VAR_0->addr + VAR_1, VAR_2, VAR_3, VAR_4);
 return !(VAR_4 == 1);
}
