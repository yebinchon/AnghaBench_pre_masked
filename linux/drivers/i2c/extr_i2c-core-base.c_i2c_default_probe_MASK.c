
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
struct i2c_adapter {int class; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,unsigned short) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_adapter*,unsigned short,int ,int ,int ,int ,union i2c_smbus_data*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_10, unsigned short VAR_11)
{
 int VAR_12;
 union i2c_smbus_data VAR_13;
 if (!((VAR_11 & ~0x07) == 0x30 || (VAR_11 & ~0x0f) == 0x50)
  && FUNC_1(VAR_10, VAR_2))
  VAR_12 = FUNC_2(VAR_10, VAR_11, 0, VAR_9, 0,
         VAR_7, ((void*)0));
 else if (FUNC_1(VAR_10, VAR_3))
  VAR_12 = FUNC_2(VAR_10, VAR_11, 0, VAR_8, 0,
         VAR_5, &VAR_13);
 else {
  FUNC_0(&VAR_10->dev, "No suitable probing method supported for address 0x%02X\n",
    VAR_11);
  VAR_12 = -VAR_0;
 }

 return VAR_12 >= 0;
}
