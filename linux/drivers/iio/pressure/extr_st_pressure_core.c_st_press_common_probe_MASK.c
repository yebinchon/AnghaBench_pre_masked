
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct st_sensors_platform_data {int dummy; } ;
struct st_sensor_fullscale_avl {int dummy; } ;
struct st_sensor_data {scalar_t__ irq; TYPE_8__* sensor_settings; int odr; struct st_sensor_fullscale_avl* current_fullscale; scalar_t__ num_data_channels; TYPE_1__* dev; } ;
struct iio_dev {int name; int dev; scalar_t__ num_channels; int channels; int * info; int modes; } ;
struct TYPE_14__ {scalar_t__ addr; } ;
struct TYPE_13__ {scalar_t__ addr; } ;
struct TYPE_15__ {TYPE_6__ int2; TYPE_5__ int1; } ;
struct TYPE_12__ {TYPE_3__* odr_avl; } ;
struct TYPE_10__ {int * fs_avl; } ;
struct TYPE_16__ {TYPE_7__ drdy_irq; TYPE_4__ odr; TYPE_2__ fs; scalar_t__ num_ch; int ch; } ;
struct TYPE_11__ {int hz; } ;
struct TYPE_9__ {scalar_t__ platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct st_sensor_data* FUNC_2 (struct iio_dev*) ;
 int VAR_3 ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,struct st_sensors_platform_data*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;

int FUNC_11(struct iio_dev *VAR_4)
{
 struct st_sensor_data *VAR_5 = FUNC_2(VAR_4);
 struct st_sensors_platform_data *VAR_6 =
  (struct st_sensors_platform_data *)VAR_5->dev->platform_data;
 int VAR_7;

 VAR_4->modes = VAR_0;
 VAR_4->info = &VAR_3;

 VAR_7 = FUNC_9(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_10(VAR_4);
 if (VAR_7 < 0)
  goto st_press_power_off;







 VAR_5->num_data_channels = VAR_5->sensor_settings->num_ch - 1;
 VAR_4->channels = VAR_5->sensor_settings->ch;
 VAR_4->num_channels = VAR_5->sensor_settings->num_ch;

 VAR_5->current_fullscale =
  (struct st_sensor_fullscale_avl *)
   &VAR_5->sensor_settings->fs.fs_avl[0];

 VAR_5->odr = VAR_5->sensor_settings->odr.odr_avl[0].hz;


 if (!VAR_6 && (VAR_5->sensor_settings->drdy_irq.int1.addr ||
         VAR_5->sensor_settings->drdy_irq.int2.addr))
  VAR_6 = (struct st_sensors_platform_data *)&VAR_2;

 VAR_7 = FUNC_7(VAR_4, VAR_6);
 if (VAR_7 < 0)
  goto st_press_power_off;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 < 0)
  goto st_press_power_off;

 if (VAR_5->irq > 0) {
  VAR_7 = FUNC_5(VAR_4,
        VAR_1);
  if (VAR_7 < 0)
   goto st_press_probe_trigger_error;
 }

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7)
  goto st_press_device_register_error;

 FUNC_0(&VAR_4->dev, "registered pressure sensor %s\n",
   VAR_4->name);

 return VAR_7;

st_press_device_register_error:
 if (VAR_5->irq > 0)
  FUNC_6(VAR_4);
st_press_probe_trigger_error:
 FUNC_4(VAR_4);
st_press_power_off:
 FUNC_8(VAR_4);

 return VAR_7;
}
