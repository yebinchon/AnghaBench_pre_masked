
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct bma180_data {int mutex; TYPE_1__* part_info; scalar_t__ trig; } ;
struct TYPE_2__ {int (* chip_disable ) (struct bma180_data*) ;} ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct bma180_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bma180_data*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct bma180_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_5(VAR_1);
 if (VAR_2->trig) {
  FUNC_4(VAR_2->trig);
  FUNC_3(VAR_2->trig);
 }

 FUNC_6(&VAR_2->mutex);
 VAR_2->part_info->chip_disable(VAR_2);
 FUNC_7(&VAR_2->mutex);

 return 0;
}
