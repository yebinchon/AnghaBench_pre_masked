
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef int u8 ;
struct i2c_client {int flags; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_2,
        struct i2c_client *VAR_3, u8 VAR_4)
{
 union i2c_smbus_data VAR_5;

 return FUNC_0(VAR_2, VAR_3->addr, VAR_3->flags,
    VAR_1, VAR_4,
    VAR_0, &VAR_5);
}
