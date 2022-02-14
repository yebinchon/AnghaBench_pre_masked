
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
struct i2c_client {int flags; int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2, u8 VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_2->adapter;
 union i2c_smbus_data VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2->addr, VAR_2->flags,
          VAR_1, VAR_3,
          VAR_0, &VAR_5);

 return VAR_6 ?: VAR_5.byte;
}
