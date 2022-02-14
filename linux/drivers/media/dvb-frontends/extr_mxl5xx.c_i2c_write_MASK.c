
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0, u8 VAR_1,
       u8 *VAR_2, u32 VAR_3)
{
 struct i2c_msg VAR_4 = {.addr = VAR_1, .flags = 0,
         .buf = VAR_2, .len = VAR_3};

 return (FUNC_0(VAR_0, &VAR_4, 1) == 1) ? 0 : -1;
}
