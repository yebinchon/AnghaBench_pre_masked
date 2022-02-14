
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_sensor_data {int odr; TYPE_1__* sensor_settings; } ;
struct iio_dev {scalar_t__ currentmode; int mlock; } ;
struct TYPE_4__ {int shift; } ;
struct iio_chan_spec {TYPE_2__ scan_type; } ;
struct TYPE_3__ {int bootime; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_5 (struct iio_dev*,int) ;

int FUNC_6(struct iio_dev *VAR_2,
    struct iio_chan_spec const *VAR_3, int *VAR_4)
{
 int VAR_5;
 struct st_sensor_data *VAR_6 = FUNC_0(VAR_2);

 FUNC_2(&VAR_2->mlock);
 if (VAR_2->currentmode == VAR_1) {
  VAR_5 = -VAR_0;
  goto out;
 } else {
  VAR_5 = FUNC_5(VAR_2, 1);
  if (VAR_5 < 0)
   goto out;

  FUNC_1((VAR_6->sensor_settings->bootime * 1000) / VAR_6->odr);
  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
  if (VAR_5 < 0)
   goto out;

  *VAR_4 = *VAR_4 >> VAR_3->scan_type.shift;

  VAR_5 = FUNC_5(VAR_2, 0);
 }
out:
 FUNC_3(&VAR_2->mlock);

 return VAR_5;
}
