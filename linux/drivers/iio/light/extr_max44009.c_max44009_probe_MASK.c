
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max44009_data {int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int name; int modes; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 int FUNC_3 (int *,scalar_t__,int *,int ,int,char*,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 struct max44009_data* FUNC_6 (struct iio_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_10,
     const struct i2c_device_id *VAR_11)
{
 struct max44009_data *VAR_12;
 struct iio_dev *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(&VAR_10->dev, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_13);
 FUNC_4(VAR_10, VAR_13);
 VAR_12->client = VAR_10;
 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->info = &VAR_8;
 VAR_13->modes = VAR_1;
 VAR_13->name = VAR_5;
 VAR_13->channels = VAR_7;
 VAR_13->num_channels = FUNC_0(VAR_7);
 FUNC_7(&VAR_12->lock);


 VAR_14 = FUNC_5(VAR_10, VAR_6);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_10->irq > 0) {
  VAR_14 = FUNC_3(&VAR_10->dev, VAR_10->irq,
      ((void*)0),
      VAR_9,
      VAR_4 |
      VAR_2 | VAR_3,
      "max44009_event",
      VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
 }

 return FUNC_2(&VAR_10->dev, VAR_13);
}
