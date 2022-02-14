
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vz89x_data {TYPE_2__* chip; int lock; scalar_t__ last_update; struct i2c_client* client; int xfer; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; int adapter; } ;
struct TYPE_4__ {int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 struct vz89x_data* FUNC_5 (struct iio_dev*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *) ;
 struct of_device_id* FUNC_7 (int ,int *) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_13,
         const struct i2c_device_id *VAR_14)
{
 struct iio_dev *VAR_15;
 struct vz89x_data *VAR_16;
 const struct of_device_id *VAR_17;
 int VAR_18;

 VAR_15 = FUNC_1(&VAR_13->dev, sizeof(*VAR_16));
 if (!VAR_15)
  return -VAR_0;
 VAR_16 = FUNC_5(VAR_15);

 if (FUNC_3(VAR_13->adapter, VAR_3))
  VAR_16->xfer = VAR_10;
 else if (FUNC_3(VAR_13->adapter,
    VAR_5 | VAR_4))
  VAR_16->xfer = VAR_12;
 else
  return -VAR_1;

 VAR_17 = FUNC_7(VAR_9, &VAR_13->dev);
 if (!VAR_17)
  VAR_18 = VAR_14->driver_data;
 else
  VAR_18 = (unsigned long)VAR_17->data;

 FUNC_4(VAR_13, VAR_15);
 VAR_16->client = VAR_13;
 VAR_16->chip = &VAR_8[VAR_18];
 VAR_16->last_update = VAR_7 - VAR_2;
 FUNC_6(&VAR_16->lock);

 VAR_15->dev.parent = &VAR_13->dev;
 VAR_15->info = &VAR_11;
 VAR_15->name = FUNC_0(&VAR_13->dev);
 VAR_15->modes = VAR_6;

 VAR_15->channels = VAR_16->chip->channels;
 VAR_15->num_channels = VAR_16->chip->num_channels;

 return FUNC_2(&VAR_13->dev, VAR_15);
}
