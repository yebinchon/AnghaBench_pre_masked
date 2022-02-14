
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {scalar_t__ i2cmux; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 struct iio_dev* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 struct mpu3050* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(&VAR_0->dev);
 struct mpu3050 *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->i2cmux)
  FUNC_1(VAR_2->i2cmux);

 return FUNC_3(&VAR_0->dev);
}
