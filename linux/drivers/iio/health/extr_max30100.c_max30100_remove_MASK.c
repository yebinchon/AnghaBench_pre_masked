
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30100_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct max30100_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct max30100_data*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct max30100_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_2, 0);

 return 0;
}
