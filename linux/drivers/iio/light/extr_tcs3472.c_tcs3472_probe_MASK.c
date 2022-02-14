
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcs3472_data {int control; int atime; int low_thresh; int high_thresh; int apers; int enable; struct i2c_client* client; int lock; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int name; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 (struct iio_dev*) ;
 struct tcs3472_data* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__,int *,int ,int,int ,struct iio_dev*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_21,
      const struct i2c_device_id *VAR_22)
{
 struct tcs3472_data *VAR_23;
 struct iio_dev *VAR_24;
 int VAR_25;

 VAR_24 = FUNC_2(&VAR_21->dev, sizeof(*VAR_23));
 if (VAR_24 == ((void*)0))
  return -VAR_1;

 VAR_23 = FUNC_9(VAR_24);
 FUNC_4(VAR_21, VAR_24);
 VAR_23->client = VAR_21;
 FUNC_12(&VAR_23->lock);

 VAR_24->dev.parent = &VAR_21->dev;
 VAR_24->info = &VAR_19;
 VAR_24->name = VAR_10;
 VAR_24->channels = VAR_17;
 VAR_24->num_channels = FUNC_0(VAR_17);
 VAR_24->modes = VAR_2;

 VAR_25 = FUNC_5(VAR_23->client, VAR_15);
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_25 == 0x44)
  FUNC_1(&VAR_21->dev, "TCS34721/34725 found\n");
 else if (VAR_25 == 0x4d)
  FUNC_1(&VAR_21->dev, "TCS34723/34727 found\n");
 else
  return -VAR_0;

 VAR_25 = FUNC_5(VAR_23->client, VAR_9);
 if (VAR_25 < 0)
  return VAR_25;
 VAR_23->control = VAR_25;

 VAR_25 = FUNC_5(VAR_23->client, VAR_8);
 if (VAR_25 < 0)
  return VAR_25;
 VAR_23->atime = VAR_25;

 VAR_25 = FUNC_6(VAR_23->client, VAR_7);
 if (VAR_25 < 0)
  return VAR_25;
 VAR_23->low_thresh = VAR_25;

 VAR_25 = FUNC_6(VAR_23->client, VAR_6);
 if (VAR_25 < 0)
  return VAR_25;
 VAR_23->high_thresh = VAR_25;

 VAR_23->apers = 1;
 VAR_25 = FUNC_7(VAR_23->client, VAR_16,
     VAR_23->apers);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_5(VAR_23->client, VAR_11);
 if (VAR_25 < 0)
  return VAR_25;


 VAR_23->enable = VAR_25 | VAR_14 | VAR_12;
 VAR_23->enable &= ~VAR_13;
 VAR_25 = FUNC_7(VAR_23->client, VAR_11,
  VAR_23->enable);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_11(VAR_24, ((void*)0),
  VAR_20, ((void*)0));
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_21->irq) {
  VAR_25 = FUNC_13(VAR_21->irq, ((void*)0),
        VAR_18,
        VAR_5 | VAR_4 |
        VAR_3,
        VAR_21->name, VAR_24);
  if (VAR_25)
   goto buffer_cleanup;
 }

 VAR_25 = FUNC_8(VAR_24);
 if (VAR_25 < 0)
  goto free_irq;

 return 0;

free_irq:
 FUNC_3(VAR_21->irq, VAR_24);
buffer_cleanup:
 FUNC_10(VAR_24);
 return VAR_25;
}
