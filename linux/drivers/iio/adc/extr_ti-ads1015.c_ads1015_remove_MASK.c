
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct ads1015_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ads1015_data*,int ) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ads1015_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_1(VAR_1);
 struct ads1015_data *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 FUNC_4(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);
 FUNC_5(&VAR_1->dev);


 return FUNC_0(VAR_3, VAR_0);
}
