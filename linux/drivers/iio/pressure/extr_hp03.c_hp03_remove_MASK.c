
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct hp03_priv {int eeprom_client; int eeprom_regmap; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 struct hp03_priv* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct hp03_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 FUNC_4(VAR_2->eeprom_regmap);
 FUNC_1(VAR_2->eeprom_client);

 return 0;
}
