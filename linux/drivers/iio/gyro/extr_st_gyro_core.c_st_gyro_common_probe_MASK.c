
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_sensors_platform_data {int dummy; } ;
struct st_sensor_fullscale_avl {int dummy; } ;
struct st_sensor_data {scalar_t__ irq; TYPE_4__* sensor_settings; int odr; struct st_sensor_fullscale_avl* current_fullscale; int num_data_channels; } ;
struct iio_dev {int name; int dev; int num_channels; int channels; int * info; int modes; } ;
struct TYPE_7__ {TYPE_2__* odr_avl; } ;
struct TYPE_5__ {int * fs_avl; } ;
struct TYPE_8__ {TYPE_3__ odr; TYPE_1__ fs; int ch; } ;
struct TYPE_6__ {int hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iio_dev*) ;
 struct st_sensor_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,struct st_sensors_platform_data*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;

int FUNC_11(struct iio_dev *VAR_6)
{
 struct st_sensor_data *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_6->modes = VAR_0;
 VAR_6->info = &VAR_4;

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8 < 0)
  goto st_gyro_power_off;

 VAR_7->num_data_channels = VAR_1;
 VAR_6->channels = VAR_7->sensor_settings->ch;
 VAR_6->num_channels = VAR_3;

 VAR_7->current_fullscale = (struct st_sensor_fullscale_avl *)
     &VAR_7->sensor_settings->fs.fs_avl[0];
 VAR_7->odr = VAR_7->sensor_settings->odr.odr_avl[0].hz;

 VAR_8 = FUNC_7(VAR_6,
    (struct st_sensors_platform_data *)&VAR_5);
 if (VAR_8 < 0)
  goto st_gyro_power_off;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 < 0)
  goto st_gyro_power_off;

 if (VAR_7->irq > 0) {
  VAR_8 = FUNC_5(VAR_6,
        VAR_2);
  if (VAR_8 < 0)
   goto st_gyro_probe_trigger_error;
 }

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8)
  goto st_gyro_device_register_error;

 FUNC_0(&VAR_6->dev, "registered gyroscope %s\n",
   VAR_6->name);

 return 0;

st_gyro_device_register_error:
 if (VAR_7->irq > 0)
  FUNC_6(VAR_6);
st_gyro_probe_trigger_error:
 FUNC_4(VAR_6);
st_gyro_power_off:
 FUNC_8(VAR_6);

 return VAR_8;
}
