
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmp007_data {int config; int status_mask; struct i2c_client* client; int lock; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int * info; int modes; TYPE_1__ dev; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; scalar_t__ irq; int adapter; } ;


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
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__,int *,int ,int,int ,struct iio_dev*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 (struct iio_dev*) ;
 struct tmp007_data* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (int *) ;
 int VAR_16 ;
 int FUNC_11 (struct i2c_client*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (struct tmp007_data*) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_19,
   const struct i2c_device_id *VAR_20)
{
 struct tmp007_data *VAR_21;
 struct iio_dev *VAR_22;
 int VAR_23;

 if (!FUNC_4(VAR_19->adapter, VAR_3))
  return -VAR_2;

 if (!FUNC_11(VAR_19)) {
  FUNC_1(&VAR_19->dev, "TMP007 not found\n");
  return -VAR_0;
 }

 VAR_22 = FUNC_2(&VAR_19->dev, sizeof(*VAR_21));
 if (!VAR_22)
  return -VAR_1;

 VAR_21 = FUNC_9(VAR_22);
 FUNC_5(VAR_19, VAR_22);
 VAR_21->client = VAR_19;
 FUNC_10(&VAR_21->lock);

 VAR_22->dev.parent = &VAR_19->dev;
 VAR_22->name = "tmp007";
 VAR_22->modes = VAR_4;
 VAR_22->info = &VAR_17;

 VAR_22->channels = VAR_16;
 VAR_22->num_channels = FUNC_0(VAR_16);
 VAR_23 = FUNC_6(VAR_21->client, VAR_7);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_21->config = VAR_23;
 VAR_21->config |= (VAR_9 | VAR_8 | VAR_10);

 VAR_23 = FUNC_7(VAR_21->client, VAR_7,
     VAR_21->config);
 if (VAR_23 < 0)
  return VAR_23;
 VAR_23 = FUNC_6(VAR_21->client, VAR_13);
 if (VAR_23 < 0)
  goto error_powerdown;

 VAR_21->status_mask = VAR_23;
 VAR_21->status_mask |= (VAR_14 | VAR_15
    | VAR_11 | VAR_12);

 VAR_23 = FUNC_7(VAR_21->client, VAR_13, VAR_21->status_mask);
 if (VAR_23 < 0)
  goto error_powerdown;

 if (VAR_19->irq) {
  VAR_23 = FUNC_3(&VAR_19->dev, VAR_19->irq,
    ((void*)0), VAR_18,
    VAR_6 | VAR_5,
    VAR_20->name, VAR_22);
  if (VAR_23) {
   FUNC_1(&VAR_19->dev, "irq request error %d\n", -VAR_23);
   goto error_powerdown;
  }
 }

 return FUNC_8(VAR_22);

error_powerdown:
 FUNC_12(VAR_21);

 return VAR_23;
}
