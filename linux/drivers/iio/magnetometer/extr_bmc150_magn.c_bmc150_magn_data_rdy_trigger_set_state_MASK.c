
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct bmc150_magn_data {int dready_trigger_on; int mutex; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bmc150_magn_data*) ;
 struct bmc150_magn_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iio_trigger *VAR_3,
        bool VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_2(VAR_3);
 struct bmc150_magn_data *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = 0;

 FUNC_3(&VAR_6->mutex);
 if (VAR_4 == VAR_6->dready_trigger_on)
  goto err_unlock;

 VAR_7 = FUNC_5(VAR_6->regmap, VAR_1,
     VAR_0,
     VAR_4 << VAR_2);
 if (VAR_7 < 0)
  goto err_unlock;

 VAR_6->dready_trigger_on = VAR_4;

 if (VAR_4) {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 < 0)
   goto err_unlock;
 }
 FUNC_4(&VAR_6->mutex);

 return 0;

err_unlock:
 FUNC_4(&VAR_6->mutex);
 return VAR_7;
}
