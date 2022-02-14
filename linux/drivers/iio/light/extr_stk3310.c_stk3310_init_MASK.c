
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk3310_data {int reg_int_ps; int regmap; struct i2c_client* client; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 struct stk3310_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (struct stk3310_data*,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_8)
{
 int VAR_9;
 int VAR_10;
 u8 VAR_11;
 struct stk3310_data *VAR_12 = FUNC_1(VAR_8);
 struct i2c_client *VAR_13 = VAR_12->client;

 VAR_9 = FUNC_3(VAR_12->regmap, VAR_3, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_10 != VAR_1 &&
     VAR_10 != VAR_6 &&
     VAR_10 != VAR_7) {
  FUNC_0(&VAR_13->dev, "invalid chip id: 0x%x\n", VAR_10);
  return -VAR_0;
 }

 VAR_11 = VAR_4 | VAR_5;
 VAR_9 = FUNC_4(VAR_12, VAR_11);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_13->dev, "failed to enable sensor");
  return VAR_9;
 }


 VAR_9 = FUNC_2(VAR_12->reg_int_ps, VAR_2);
 if (VAR_9 < 0)
  FUNC_0(&VAR_13->dev, "failed to enable interrupts!\n");

 return VAR_9;
}
