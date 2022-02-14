
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx90614_data {scalar_t__ wakeup_gpio; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct mlx90614_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct mlx90614_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct mlx90614_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);

 if (VAR_2->wakeup_gpio) {
  FUNC_4(&VAR_0->dev);
  if (!FUNC_6(&VAR_0->dev))
   FUNC_3(VAR_2);
  FUNC_5(&VAR_0->dev);
 }

 return 0;
}
