
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int * info; int modes; int name; int num_channels; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;
struct apds9300_data {int mutex; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct apds9300_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct apds9300_data*,int ) ;
 int FUNC_3 (int *,char*,int) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__,int *,int ,int,int ,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct apds9300_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_10,
  const struct i2c_device_id *VAR_11)
{
 struct apds9300_data *VAR_12;
 struct iio_dev *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(&VAR_10->dev, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_2;

 VAR_12 = FUNC_8(VAR_13);
 FUNC_6(VAR_10, VAR_13);
 VAR_12->client = VAR_10;

 VAR_14 = FUNC_1(VAR_12);
 if (VAR_14 < 0)
  goto err;

 FUNC_9(&VAR_12->mutex);

 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->channels = VAR_6;
 VAR_13->num_channels = FUNC_0(VAR_6);
 VAR_13->name = VAR_0;
 VAR_13->modes = VAR_3;

 if (VAR_10->irq)
  VAR_13->info = &VAR_7;
 else
  VAR_13->info = &VAR_8;

 if (VAR_10->irq) {
  VAR_14 = FUNC_5(&VAR_10->dev, VAR_10->irq,
    ((void*)0), VAR_9,
    VAR_5 | VAR_4,
    VAR_1, VAR_13);
  if (VAR_14) {
   FUNC_3(&VAR_10->dev, "irq request error %d\n", -VAR_14);
   goto err;
  }
 }

 VAR_14 = FUNC_7(VAR_13);
 if (VAR_14 < 0)
  goto err;

 return 0;

err:

 FUNC_2(VAR_12, 0);
 return VAR_14;
}
