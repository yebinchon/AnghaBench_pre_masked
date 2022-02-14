
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2,
      u8 VAR_3, u8 *VAR_4, int VAR_5, u8 *VAR_6, int VAR_7)
{
 struct i2c_msg VAR_8[2] = { { .addr = VAR_3, .flags = 0,
         .buf = VAR_4, .len = VAR_5},
       { .addr = VAR_3, .flags = VAR_1,
         .buf = VAR_6, .len = VAR_7 } };
 if (FUNC_1(VAR_2, VAR_8, 2) != 2) {
  FUNC_0(&VAR_2->dev, "i2c read error\n");
  return -VAR_0;
 }
 return 0;
}
