
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jsa1212_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct jsa1212_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct jsa1212_data*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct jsa1212_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);

 return FUNC_3(VAR_2);
}
