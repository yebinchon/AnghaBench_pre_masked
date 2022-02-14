
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int trigger_enabled; int mutex; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 struct sx9500_data* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sx9500_data*) ;
 int FUNC_5 (struct sx9500_data*) ;

__attribute__((used)) static int FUNC_6(struct iio_trigger *VAR_0,
        bool VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_1(VAR_0);
 struct sx9500_data *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_2(&VAR_3->mutex);

 if (VAR_1)
  VAR_4 = FUNC_5(VAR_3);
 else
  VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0)
  goto out;

 VAR_3->trigger_enabled = VAR_1;

out:
 FUNC_3(&VAR_3->mutex);

 return VAR_4;
}
