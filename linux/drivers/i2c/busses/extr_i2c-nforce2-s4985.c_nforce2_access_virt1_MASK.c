
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*,int) ;

__attribute__((used)) static s32 FUNC_1(struct i2c_adapter *VAR_0, u16 VAR_1,
    unsigned short VAR_2, char VAR_3,
    u8 VAR_4, int VAR_5,
    union i2c_smbus_data *VAR_6)
{

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_6, 0x02);
}
