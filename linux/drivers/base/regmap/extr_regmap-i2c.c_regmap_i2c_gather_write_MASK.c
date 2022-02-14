
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {size_t len; void* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_4,
       const void *VAR_5, size_t VAR_6,
       const void *VAR_7, size_t VAR_8)
{
 struct device *VAR_9 = VAR_4;
 struct i2c_client *VAR_10 = FUNC_2(VAR_9);
 struct i2c_msg VAR_11[2];
 int VAR_12;




 if (!FUNC_0(VAR_10->adapter, VAR_2))
  return -VAR_1;

 VAR_11[0].addr = VAR_10->addr;
 VAR_11[0].flags = 0;
 VAR_11[0].len = VAR_6;
 VAR_11[0].buf = (void *)VAR_5;

 VAR_11[1].addr = VAR_10->addr;
 VAR_11[1].flags = VAR_3;
 VAR_11[1].len = VAR_8;
 VAR_11[1].buf = (void *)VAR_7;

 VAR_12 = FUNC_1(VAR_10->adapter, VAR_11, 2);
 if (VAR_12 == 2)
  return 0;
 if (VAR_12 < 0)
  return VAR_12;
 else
  return -VAR_0;
}
