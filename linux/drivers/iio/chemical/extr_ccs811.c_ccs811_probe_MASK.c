
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct iio_dev {TYPE_3__* trig; int id; int name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {scalar_t__ irq; int dev; int adapter; } ;
struct ccs811_data {TYPE_3__* drdy_trig; int lock; struct i2c_client* client; } ;
struct TYPE_9__ {int * parent; } ;
struct TYPE_10__ {int * ops; TYPE_2__ dev; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int *,char*,...) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 TYPE_3__* FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,scalar_t__,int ,int *,int,char*,struct iio_dev*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (struct i2c_client*,int ,int ) ;
 int FUNC_10 (struct iio_dev*) ;
 struct ccs811_data* FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (struct iio_dev*) ;
 int FUNC_17 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_21,
   const struct i2c_device_id *VAR_22)
{
 struct iio_dev *VAR_23;
 struct ccs811_data *VAR_24;
 int VAR_25;

 if (!FUNC_6(VAR_21->adapter, VAR_12
         | VAR_10
         | VAR_11))
  return -VAR_9;


 VAR_25 = FUNC_8(VAR_21, VAR_0);
 if (VAR_25 < 0)
  return VAR_25;

 if (VAR_25 != VAR_1) {
  FUNC_2(&VAR_21->dev, "hardware id doesn't match CCS81x\n");
  return -VAR_7;
 }

 VAR_25 = FUNC_8(VAR_21, VAR_2);
 if (VAR_25 < 0)
  return VAR_25;

 if ((VAR_25 & VAR_3) != VAR_4) {
  FUNC_2(&VAR_21->dev, "no CCS811 sensor\n");
  return -VAR_7;
 }

 VAR_23 = FUNC_3(&VAR_21->dev, sizeof(*VAR_24));
 if (!VAR_23)
  return -VAR_8;

 VAR_25 = FUNC_1(VAR_21);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_24 = FUNC_11(VAR_23);
 FUNC_7(VAR_21, VAR_23);
 VAR_24->client = VAR_21;

 FUNC_18(&VAR_24->lock);

 VAR_23->dev.parent = &VAR_21->dev;
 VAR_23->name = VAR_22->name;
 VAR_23->info = &VAR_18;
 VAR_23->modes = VAR_13;

 VAR_23->channels = VAR_16;
 VAR_23->num_channels = FUNC_0(VAR_16);

 if (VAR_21->irq > 0) {
  VAR_25 = FUNC_5(&VAR_21->dev, VAR_21->irq,
      VAR_17,
      ((void*)0),
      VAR_15 |
      VAR_14,
      "ccs811_irq", VAR_23);
  if (VAR_25) {
   FUNC_2(&VAR_21->dev, "irq request error %d\n", -VAR_25);
   goto err_poweroff;
  }

  VAR_24->drdy_trig = FUNC_4(&VAR_21->dev,
        "%s-dev%d",
        VAR_23->name,
        VAR_23->id);
  if (!VAR_24->drdy_trig) {
   VAR_25 = -VAR_8;
   goto err_poweroff;
  }

  VAR_24->drdy_trig->dev.parent = &VAR_21->dev;
  VAR_24->drdy_trig->ops = &VAR_20;
  FUNC_14(VAR_24->drdy_trig, VAR_23);
  VAR_23->trig = VAR_24->drdy_trig;
  FUNC_12(VAR_23->trig);
  VAR_25 = FUNC_13(VAR_24->drdy_trig);
  if (VAR_25)
   goto err_poweroff;
 }

 VAR_25 = FUNC_17(VAR_23, ((void*)0),
      VAR_19, ((void*)0));

 if (VAR_25 < 0) {
  FUNC_2(&VAR_21->dev, "triggered buffer setup failed\n");
  goto err_trigger_unregister;
 }

 VAR_25 = FUNC_10(VAR_23);
 if (VAR_25 < 0) {
  FUNC_2(&VAR_21->dev, "unable to register iio device\n");
  goto err_buffer_cleanup;
 }
 return 0;

err_buffer_cleanup:
 FUNC_16(VAR_23);
err_trigger_unregister:
 if (VAR_24->drdy_trig)
  FUNC_15(VAR_24->drdy_trig);
err_poweroff:
 FUNC_9(VAR_21, VAR_5, VAR_6);

 return VAR_25;
}
