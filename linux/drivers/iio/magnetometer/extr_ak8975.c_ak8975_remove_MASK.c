
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct ak8975_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ak8975_data*) ;
 int FUNC_1 (struct ak8975_data*,int ) ;
 struct iio_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ak8975_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_2(VAR_1);
 struct ak8975_data *VAR_3 = FUNC_4(VAR_2);

 FUNC_7(&VAR_1->dev);
 FUNC_8(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);
 FUNC_3(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3);

 return 0;
}
