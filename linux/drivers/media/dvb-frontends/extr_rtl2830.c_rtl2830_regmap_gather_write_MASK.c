
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const void *VAR_2,
           size_t VAR_3, const void *VAR_4,
           size_t VAR_5)
{
 struct i2c_client *VAR_6 = VAR_1;
 int VAR_7;
 u8 VAR_8[256];
 struct i2c_msg VAR_9[1] = {
  {
   .addr = VAR_6->addr,
   .flags = 0,
   .len = 1 + VAR_5,
   .buf = VAR_8,
  }
 };

 VAR_8[0] = *(u8 const *)VAR_2;
 FUNC_2(&VAR_8[1], VAR_4, VAR_5);

 VAR_7 = FUNC_0(VAR_6->adapter, VAR_9, 1);
 if (VAR_7 != 1) {
  FUNC_1(&VAR_6->dev, "i2c reg write failed %d\n", VAR_7);
  if (VAR_7 >= 0)
   VAR_7 = -VAR_0;
  return VAR_7;
 }
 return 0;
}
