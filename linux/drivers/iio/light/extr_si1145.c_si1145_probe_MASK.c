
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct si1145_data {int cmdlock; int lock; TYPE_2__* part_info; struct i2c_client* client; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int modes; int info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; int name; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;
struct TYPE_4__ {int part; int iio_info; int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (int *,struct iio_dev*,int *,int ,int *) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 struct si1145_data* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 (struct si1145_data*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_10 (struct iio_dev*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_9,
   const struct i2c_device_id *VAR_10)
{
 struct si1145_data *VAR_11;
 struct iio_dev *VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_12 = FUNC_2(&VAR_9->dev, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_7(VAR_12);
 FUNC_5(VAR_9, VAR_12);
 VAR_11->client = VAR_9;
 VAR_11->part_info = &VAR_7[VAR_10->driver_data];

 VAR_13 = VAR_16 = FUNC_6(VAR_11->client,
       VAR_3);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_14 = VAR_16 = FUNC_6(VAR_11->client,
      VAR_4);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_15 = VAR_16 = FUNC_6(VAR_11->client,
      VAR_5);
 if (VAR_16 < 0)
  return VAR_16;
 FUNC_1(&VAR_9->dev, "device ID part %#02hhx rev %#02hhx seq %#02hhx\n",
   VAR_13, VAR_14, VAR_15);
 if (VAR_13 != VAR_11->part_info->part) {
  FUNC_0(&VAR_9->dev, "part ID mismatch got %#02hhx, expected %#02x\n",
    VAR_13, VAR_11->part_info->part);
  return -VAR_0;
 }

 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->name = VAR_10->name;
 VAR_12->channels = VAR_11->part_info->channels;
 VAR_12->num_channels = VAR_11->part_info->num_channels;
 VAR_12->info = VAR_11->part_info->iio_info;
 VAR_12->modes = VAR_2;

 FUNC_8(&VAR_11->lock);
 FUNC_8(&VAR_11->cmdlock);

 VAR_16 = FUNC_9(VAR_11);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_4(&VAR_9->dev,
  VAR_12, ((void*)0),
  VAR_8, &VAR_6);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_9->irq) {
  VAR_16 = FUNC_10(VAR_12);
  if (VAR_16 < 0)
   return VAR_16;
 } else {
  FUNC_1(&VAR_9->dev, "no irq, using polling\n");
 }

 return FUNC_3(&VAR_9->dev, VAR_12);
}
