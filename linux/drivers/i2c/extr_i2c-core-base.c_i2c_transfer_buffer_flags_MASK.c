
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int flags; int len; char* buf; int addr; } ;
struct i2c_client {int flags; int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

int FUNC_1(const struct i2c_client *VAR_1, char *VAR_2,
         int VAR_3, u16 VAR_4)
{
 int VAR_5;
 struct i2c_msg VAR_6 = {
  .addr = VAR_1->addr,
  .flags = VAR_4 | (VAR_1->flags & VAR_0),
  .len = VAR_3,
  .buf = VAR_2,
 };

 VAR_5 = FUNC_0(VAR_1->adapter, &VAR_6, 1);





 return (VAR_5 == 1) ? VAR_3 : VAR_5;
}
