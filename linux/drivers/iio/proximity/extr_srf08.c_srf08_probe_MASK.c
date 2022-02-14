
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct srf08_data {int sensor_type; TYPE_2__* chip_info; int lock; struct i2c_client* client; } ;
struct TYPE_5__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; TYPE_1__ dev; int name; int * info; } ;
struct i2c_device_id {int name; scalar_t__ driver_data; } ;
struct i2c_client {int dev; int adapter; } ;
typedef enum srf08_sensor_type { ____Placeholder_srf08_sensor_type } srf08_sensor_type ;
struct TYPE_6__ {scalar_t__ sensitivity_default; scalar_t__ range_default; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*,int ,int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int VAR_7 ;
 struct srf08_data* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct srf08_data*,scalar_t__) ;
 int FUNC_10 (struct srf08_data*,scalar_t__) ;
 TYPE_2__ VAR_14 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_15,
      const struct i2c_device_id *VAR_16)
{
 struct iio_dev *VAR_17;
 struct srf08_data *VAR_18;
 int VAR_19;

 if (!FUNC_5(VAR_15->adapter,
     VAR_3 |
     VAR_5 |
     VAR_4))
  return -VAR_1;

 VAR_17 = FUNC_2(&VAR_15->dev, sizeof(*VAR_18));
 if (!VAR_17)
  return -VAR_2;

 VAR_18 = FUNC_7(VAR_17);
 FUNC_6(VAR_15, VAR_17);
 VAR_18->client = VAR_15;
 VAR_18->sensor_type = (enum srf08_sensor_type)VAR_16->driver_data;

 switch (VAR_18->sensor_type) {
 case 130:
  VAR_18->chip_info = &VAR_8;
  VAR_17->info = &VAR_9;
  break;
 case 129:
  VAR_18->chip_info = &VAR_11;
  VAR_17->info = &VAR_12;
  break;
 case 128:
  VAR_18->chip_info = &VAR_14;
  VAR_17->info = &VAR_12;
  break;
 default:
  return -VAR_0;
 }

 VAR_17->name = VAR_16->name;
 VAR_17->dev.parent = &VAR_15->dev;
 VAR_17->modes = VAR_6;
 VAR_17->channels = VAR_10;
 VAR_17->num_channels = FUNC_0(VAR_10);

 FUNC_8(&VAR_18->lock);

 VAR_19 = FUNC_4(&VAR_15->dev, VAR_17,
   VAR_7, VAR_13, ((void*)0));
 if (VAR_19 < 0) {
  FUNC_1(&VAR_15->dev, "setup of iio triggered buffer failed\n");
  return VAR_19;
 }

 if (VAR_18->chip_info->range_default) {







  VAR_19 = FUNC_9(VAR_18,
     VAR_18->chip_info->range_default);
  if (VAR_19 < 0)
   return VAR_19;
 }

 if (VAR_18->chip_info->sensitivity_default) {







  VAR_19 = FUNC_10(VAR_18,
    VAR_18->chip_info->sensitivity_default);
  if (VAR_19 < 0)
   return VAR_19;
 }

 return FUNC_3(&VAR_15->dev, VAR_17);
}
