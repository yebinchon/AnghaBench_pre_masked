
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2);

 FUNC_3(&VAR_1->dev);
 FUNC_4(&VAR_1->dev);

 return FUNC_2(VAR_2, VAR_0);
}
