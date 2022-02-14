
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct apds9300_data {int dummy; } ;


 int FUNC_0 (struct apds9300_data*,int ) ;
 int FUNC_1 (struct apds9300_data*,int ) ;
 struct iio_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct apds9300_data* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_2(VAR_0);
 struct apds9300_data *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_1);


 FUNC_0(VAR_2, 0);
 FUNC_1(VAR_2, 0);

 return 0;
}
