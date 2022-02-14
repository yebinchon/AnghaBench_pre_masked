
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kxcjk1013_data {int mutex; scalar_t__ motion_trig; scalar_t__ dready_trig; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct kxcjk1013_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct kxcjk1013_data*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_0(VAR_1);
 struct kxcjk1013_data *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 FUNC_8(&VAR_1->dev);
 FUNC_10(&VAR_1->dev);
 FUNC_9(&VAR_1->dev);

 if (VAR_3->dready_trig) {
  FUNC_4(VAR_2);
  FUNC_3(VAR_3->dready_trig);
  FUNC_3(VAR_3->motion_trig);
 }

 FUNC_6(&VAR_3->mutex);
 FUNC_5(VAR_3, VAR_0);
 FUNC_7(&VAR_3->mutex);

 return 0;
}
