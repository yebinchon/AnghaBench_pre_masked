
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef int u8 ;
typedef int u16 ;
struct zx2967_i2c {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;



 char VAR_1 ;

 char VAR_2 ;
 struct zx2967_i2c* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct zx2967_i2c*,int ,char,int ,int,union i2c_smbus_data*) ;
 int FUNC_2 (struct zx2967_i2c*,int,union i2c_smbus_data*) ;
 int FUNC_3 (struct zx2967_i2c*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_3, u16 VAR_4,
        unsigned short VAR_5, char VAR_6,
        u8 VAR_7, int VAR_8, union i2c_smbus_data *VAR_9)
{
 struct zx2967_i2c *VAR_10 = FUNC_0(VAR_3);

 if (VAR_8 == 129)
  VAR_6 = VAR_2;

 switch (VAR_8) {
 case 129:
 case 131:
 case 130:
 case 128:
  FUNC_1(VAR_10, VAR_4, VAR_6,
       VAR_7, VAR_8, VAR_9);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6 == VAR_1)
  return FUNC_2(VAR_10, VAR_8, VAR_9);

 return FUNC_3(VAR_10);
}
