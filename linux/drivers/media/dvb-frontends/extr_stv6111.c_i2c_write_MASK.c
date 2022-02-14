
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_1, u8 VAR_2, u8 *VAR_3, int VAR_4)
{
 struct i2c_msg VAR_5 = {.addr = VAR_2, .flags = 0,
         .buf = VAR_3, .len = VAR_4};

 if (FUNC_1(VAR_1, &VAR_5, 1) != 1) {
  FUNC_0(&VAR_1->dev, "i2c write error\n");
  return -VAR_0;
 }
 return 0;
}
