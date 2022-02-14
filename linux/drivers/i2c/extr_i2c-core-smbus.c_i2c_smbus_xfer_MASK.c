
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;
 int FUNC_2 (struct i2c_adapter*,int ) ;

s32 FUNC_3(struct i2c_adapter *VAR_1, u16 VAR_2,
     unsigned short VAR_3, char VAR_4,
     u8 VAR_5, int VAR_6, union i2c_smbus_data *VAR_7)
{
 s32 VAR_8;

 VAR_8 = FUNC_0(VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_1, VAR_0);

 return VAR_8;
}
