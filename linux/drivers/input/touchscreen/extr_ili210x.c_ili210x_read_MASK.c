
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {size_t len; void* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, void *VAR_3, size_t VAR_4)
{
 struct i2c_msg VAR_5 = {
  .addr = VAR_2->addr,
  .flags = VAR_1,
  .len = VAR_4,
  .buf = VAR_3,
 };

 if (FUNC_1(VAR_2->adapter, &VAR_5, 1) != 1) {
  FUNC_0(&VAR_2->dev, "i2c transfer failed\n");
  return -VAR_0;
 }

 return 0;
}
