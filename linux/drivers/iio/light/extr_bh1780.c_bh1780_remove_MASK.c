
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct bh1780_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bh1780_data*,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct bh1780_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_2(VAR_2);
 struct bh1780_data *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 FUNC_3(VAR_3);
 FUNC_6(&VAR_2->dev);
 FUNC_7(&VAR_2->dev);
 FUNC_5(&VAR_2->dev);
 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_0);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_2->dev, "failed to power off\n");
  return VAR_5;
 }

 return 0;
}
