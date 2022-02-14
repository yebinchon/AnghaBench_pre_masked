
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int vdd_reg; int vddio_reg; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct mma8452_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct mma8452_data*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct mma8452_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);

 FUNC_6(&VAR_0->dev);
 FUNC_8(&VAR_0->dev);
 FUNC_7(&VAR_0->dev);

 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(FUNC_2(VAR_1));

 FUNC_9(VAR_2->vddio_reg);
 FUNC_9(VAR_2->vdd_reg);

 return 0;
}
