
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {size_t len; void* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2,
      const void *VAR_3, size_t VAR_4,
      void *VAR_5, size_t VAR_6)
{
 struct device *VAR_7 = VAR_2;
 struct i2c_client *VAR_8 = FUNC_1(VAR_7);
 struct i2c_msg VAR_9[2];
 int VAR_10;

 VAR_9[0].addr = VAR_8->addr;
 VAR_9[0].flags = 0;
 VAR_9[0].len = VAR_4;
 VAR_9[0].buf = (void *)VAR_3;

 VAR_9[1].addr = VAR_8->addr;
 VAR_9[1].flags = VAR_1;
 VAR_9[1].len = VAR_6;
 VAR_9[1].buf = VAR_5;

 VAR_10 = FUNC_0(VAR_8->adapter, VAR_9, 2);
 if (VAR_10 == 2)
  return 0;
 else if (VAR_10 < 0)
  return VAR_10;
 else
  return -VAR_0;
}
