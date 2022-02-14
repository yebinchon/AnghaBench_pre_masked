
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_sensors_platform_data {int dummy; } ;
struct st_sensor_fullscale_avl {int dummy; } ;
struct st_sensor_data {scalar_t__ irq; TYPE_5__* sensor_settings; int odr; struct st_sensor_fullscale_avl* current_fullscale; int num_data_channels; TYPE_1__* dev; } ;
struct iio_dev {int num_channels; int name; int dev; struct iio_chan_spec* channels; int * info; int modes; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_9__ {TYPE_3__* odr_avl; } ;
struct TYPE_7__ {int * fs_avl; } ;
struct TYPE_10__ {TYPE_4__ odr; TYPE_2__ fs; int ch; } ;
struct TYPE_8__ {int hz; } ;
struct TYPE_6__ {scalar_t__ platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct iio_dev*,struct iio_chan_spec*) ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct iio_chan_spec* FUNC_3 (int *,int ,size_t,int ) ;
 int FUNC_4 (struct iio_dev*) ;
 struct st_sensor_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int ) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*,struct st_sensors_platform_data*) ;
 int FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*) ;

int FUNC_14(struct iio_dev *VAR_8)
{
 struct st_sensor_data *VAR_9 = FUNC_5(VAR_8);
 struct st_sensors_platform_data *VAR_10 =
  (struct st_sensors_platform_data *)VAR_9->dev->platform_data;
 struct iio_chan_spec *VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_8->modes = VAR_2;
 VAR_8->info = &VAR_6;

 VAR_13 = FUNC_12(VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_13(VAR_8);
 if (VAR_13 < 0)
  goto st_accel_power_off;

 VAR_9->num_data_channels = VAR_3;
 VAR_8->num_channels = VAR_5;

 VAR_12 = VAR_8->num_channels * sizeof(struct iio_chan_spec);
 VAR_11 = FUNC_3(&VAR_8->dev,
    VAR_9->sensor_settings->ch,
    VAR_12, VAR_1);
 if (!VAR_11) {
  VAR_13 = -VAR_0;
  goto st_accel_power_off;
 }

 if (FUNC_0(VAR_8, VAR_11))
  FUNC_2(&VAR_8->dev,
    "failed to apply ACPI orientation data: %d\n", VAR_13);

 VAR_8->channels = VAR_11;
 VAR_9->current_fullscale = (struct st_sensor_fullscale_avl *)
     &VAR_9->sensor_settings->fs.fs_avl[0];
 VAR_9->odr = VAR_9->sensor_settings->odr.odr_avl[0].hz;

 if (!VAR_10)
  VAR_10 = (struct st_sensors_platform_data *)&VAR_7;

 VAR_13 = FUNC_10(VAR_8, VAR_10);
 if (VAR_13 < 0)
  goto st_accel_power_off;

 VAR_13 = FUNC_6(VAR_8);
 if (VAR_13 < 0)
  goto st_accel_power_off;

 if (VAR_9->irq > 0) {
  VAR_13 = FUNC_8(VAR_8,
       VAR_4);
  if (VAR_13 < 0)
   goto st_accel_probe_trigger_error;
 }

 VAR_13 = FUNC_4(VAR_8);
 if (VAR_13)
  goto st_accel_device_register_error;

 FUNC_1(&VAR_8->dev, "registered accelerometer %s\n",
   VAR_8->name);

 return 0;

st_accel_device_register_error:
 if (VAR_9->irq > 0)
  FUNC_9(VAR_8);
st_accel_probe_trigger_error:
 FUNC_7(VAR_8);
st_accel_power_off:
 FUNC_11(VAR_8);

 return VAR_13;
}
