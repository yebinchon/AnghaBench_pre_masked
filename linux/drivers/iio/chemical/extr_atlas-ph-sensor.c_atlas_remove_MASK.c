
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct atlas_data {int trig; } ;


 int FUNC_0 (struct atlas_data*,int ) ;
 struct iio_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct atlas_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct atlas_data *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(VAR_2->trig);

 FUNC_6(&VAR_0->dev);
 FUNC_8(&VAR_0->dev);
 FUNC_7(&VAR_0->dev);

 return FUNC_0(VAR_2, 0);
}
