
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int regmap; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct ina2xx_chip_info* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_2);
 struct ina2xx_chip_info *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_3);


 return FUNC_3(VAR_4->regmap, VAR_0,
      VAR_1, 0);
}
