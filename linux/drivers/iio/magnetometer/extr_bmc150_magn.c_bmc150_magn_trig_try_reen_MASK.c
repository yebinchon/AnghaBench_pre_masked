
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct bmc150_magn_data {int mutex; int dready_trigger_on; } ;


 int FUNC_0 (struct bmc150_magn_data*) ;
 struct bmc150_magn_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_trigger *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_2(VAR_0);
 struct bmc150_magn_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (!VAR_2->dready_trigger_on)
  return 0;

 FUNC_3(&VAR_2->mutex);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_4(&VAR_2->mutex);

 return VAR_3;
}
