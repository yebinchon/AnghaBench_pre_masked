
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct apds9960_data {int dummy; } ;


 int FUNC_0 (struct apds9960_data*,int ) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct apds9960_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct apds9960_data *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 FUNC_4(&VAR_0->dev);
 FUNC_5(&VAR_0->dev);
 FUNC_0(VAR_2, 0);

 return 0;
}
