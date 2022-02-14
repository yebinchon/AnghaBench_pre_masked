
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {size_t len; int * buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = VAR_1;
 int VAR_5;
 struct i2c_msg VAR_6[1] = {
  {
   .addr = VAR_4->addr,
   .flags = 0,
   .len = VAR_3,
   .buf = (u8 *)VAR_2,
  }
 };

 VAR_5 = FUNC_0(VAR_4->adapter, VAR_6, 1);
 if (VAR_5 != 1) {
  FUNC_1(&VAR_4->dev, "i2c reg write failed %d\n", VAR_5);
  if (VAR_5 >= 0)
   VAR_5 = -VAR_0;
  return VAR_5;
 }
 return 0;
}
