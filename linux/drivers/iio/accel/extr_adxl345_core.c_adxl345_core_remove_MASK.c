
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct adxl345_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct adxl345_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(struct device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_0(VAR_2);
 struct adxl345_data *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_3);

 return FUNC_3(VAR_4->regmap, VAR_1,
       VAR_0);
}
