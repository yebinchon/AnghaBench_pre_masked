
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1,
       uint8_t VAR_2,
       uint8_t VAR_3)
{
 uint8_t VAR_4[2] = { VAR_2, VAR_3 };
 struct i2c_msg VAR_5 = {
  .addr = VAR_1->addr,
  .flags = VAR_0,
  .len = 2,
  .buf = (uint8_t *)VAR_4
 };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1->adapter, &VAR_5, 1);
 return VAR_6 < 0 ? VAR_6 : 0;
}
