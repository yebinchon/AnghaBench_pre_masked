
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3, u8 VAR_4, void *VAR_5,
          size_t VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_3->adapter;
 struct i2c_msg VAR_8[2];
 int VAR_9, VAR_10 = 0;

 VAR_8[0].addr = VAR_3->addr;
 VAR_8[0].flags = 0;
 VAR_8[0].len = 1;
 VAR_8[0].buf = &VAR_4;

 VAR_8[1].addr = VAR_3->addr;
 VAR_8[1].flags = VAR_2;
 VAR_8[1].len = VAR_6;
 VAR_8[1].buf = VAR_5;

 FUNC_1(VAR_7, VAR_1);

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  if (FUNC_0(VAR_7, &VAR_8[VAR_9], 1) < 0) {
   VAR_10 = -VAR_0;
   break;
  }
 }

 FUNC_2(VAR_7, VAR_1);

 return VAR_10;
}
