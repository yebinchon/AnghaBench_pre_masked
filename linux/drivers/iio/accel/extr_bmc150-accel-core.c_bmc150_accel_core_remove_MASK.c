
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct bmc150_accel_data {int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bmc150_accel_data*,int ,int ) ;
 int FUNC_1 (struct bmc150_accel_data*,scalar_t__) ;
 struct iio_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct bmc150_accel_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;

int FUNC_11(struct device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_2(VAR_2);
 struct bmc150_accel_data *VAR_4 = FUNC_4(VAR_3);

 FUNC_3(VAR_3);

 FUNC_8(VAR_2);
 FUNC_10(VAR_2);
 FUNC_9(VAR_2);

 FUNC_1(VAR_4, VAR_1 - 1);

 FUNC_5(VAR_3);

 FUNC_6(&VAR_4->mutex);
 FUNC_0(VAR_4, VAR_0, 0);
 FUNC_7(&VAR_4->mutex);

 return 0;
}
