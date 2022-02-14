
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct i2c_msg {size_t len; void* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, const void *VAR_3,
          size_t VAR_4, void *VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = VAR_2;
 int VAR_8;
 struct i2c_msg VAR_9[2] = {
  {
   .addr = VAR_7->addr,
   .flags = 0,
   .len = VAR_4,
   .buf = (u8 *)VAR_3,
  }, {
   .addr = VAR_7->addr,
   .flags = VAR_1,
   .len = VAR_6,
   .buf = VAR_5,
  }
 };

 VAR_8 = FUNC_0(VAR_7->adapter, VAR_9, 2);
 if (VAR_8 != 2) {
  FUNC_1(&VAR_7->dev, "i2c reg read failed %d\n", VAR_8);
  if (VAR_8 >= 0)
   VAR_8 = -VAR_0;
  return VAR_8;
 }
 return 0;
}
