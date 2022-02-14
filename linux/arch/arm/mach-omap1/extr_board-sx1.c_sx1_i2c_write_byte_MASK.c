
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct i2c_msg {int len; unsigned char* buf; scalar_t__ flags; void* addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 struct i2c_adapter* FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;

int FUNC_3(u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct i2c_adapter *VAR_4;
 int VAR_5;
 struct i2c_msg VAR_6[1];
 unsigned char VAR_7[2];

 VAR_4 = FUNC_0(0);
 if (!VAR_4)
  return -VAR_0;
 VAR_6->addr = VAR_1;
 VAR_6->flags = 0;
 VAR_6->len = 2;
 VAR_6->buf = VAR_7;
 VAR_7[0] = VAR_2;
 VAR_7[1] = VAR_3;
 VAR_5 = FUNC_2(VAR_4, VAR_6, 1);
 FUNC_1(VAR_4);
 if (VAR_5 >= 0)
  return 0;
 return VAR_5;
}
