
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max30102_data {int chip_id; int regmap; int lock; struct i2c_client* client; struct iio_dev* indio_dev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int available_scan_masks; void* num_channels; void* channels; TYPE_1__ dev; int * setup_ops; int * info; int name; } ;
struct iio_buffer {int dummy; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,char*,...) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 struct iio_buffer* FUNC_6 (int *) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (int *,scalar_t__,int *,int ,int,char*,struct iio_dev*) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*,struct iio_buffer*) ;
 int FUNC_11 (struct iio_dev*) ;
 struct max30102_data* FUNC_12 (struct iio_dev*) ;

 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_13 (struct max30102_data*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (struct max30102_data*,int ,int) ;

 void* VAR_18 ;
 int VAR_19 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_20,
     const struct i2c_device_id *VAR_21)
{
 struct max30102_data *VAR_22;
 struct iio_buffer *VAR_23;
 struct iio_dev *VAR_24;
 int VAR_25;
 unsigned int VAR_26;

 VAR_24 = FUNC_5(&VAR_20->dev, sizeof(*VAR_22));
 if (!VAR_24)
  return -VAR_2;

 VAR_23 = FUNC_6(&VAR_20->dev);
 if (!VAR_23)
  return -VAR_2;

 FUNC_10(VAR_24, VAR_23);

 VAR_24->name = VAR_7;
 VAR_24->info = &VAR_14;
 VAR_24->modes = (VAR_3 | VAR_4);
 VAR_24->setup_ops = &VAR_12;
 VAR_24->dev.parent = &VAR_20->dev;

 VAR_22 = FUNC_12(VAR_24);
 VAR_22->indio_dev = VAR_24;
 VAR_22->client = VAR_20;
 VAR_22->chip_id = VAR_21->driver_data;

 FUNC_15(&VAR_22->lock);
 FUNC_9(VAR_20, VAR_24);

 switch (VAR_22->chip_id) {
 case 128:
  VAR_24->channels = VAR_18;
  VAR_24->num_channels = FUNC_0(VAR_18);
  VAR_24->available_scan_masks = VAR_19;
  break;
 case 129:
  VAR_24->channels = VAR_13;
  VAR_24->num_channels = FUNC_0(VAR_13);
  VAR_24->available_scan_masks = VAR_17;
  break;
 default:
  return -VAR_1;
 }

 VAR_22->regmap = FUNC_7(VAR_20, &VAR_16);
 if (FUNC_1(VAR_22->regmap)) {
  FUNC_4(&VAR_20->dev, "regmap initialization failed\n");
  return FUNC_2(VAR_22->regmap);
 }


 VAR_25 = FUNC_16(VAR_22->regmap, VAR_10, &VAR_26);
 if (VAR_25)
  return VAR_25;
 if (VAR_26 != VAR_8)
  return -VAR_1;


 VAR_25 = FUNC_16(VAR_22->regmap, VAR_11, &VAR_26);
 if (VAR_25)
  return VAR_25;
 FUNC_3(&VAR_20->dev, "max3010x revision %02x\n", VAR_26);


 VAR_25 = FUNC_14(VAR_22, VAR_9,
         0);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_13(VAR_22);
 if (VAR_25)
  return VAR_25;

 if (VAR_20->irq <= 0) {
  FUNC_4(&VAR_20->dev, "no valid irq defined\n");
  return -VAR_0;
 }

 VAR_25 = FUNC_8(&VAR_20->dev, VAR_20->irq,
     ((void*)0), VAR_15,
     VAR_6 | VAR_5,
     "max30102_irq", VAR_24);
 if (VAR_25) {
  FUNC_4(&VAR_20->dev, "request irq (%d) failed\n", VAR_20->irq);
  return VAR_25;
 }

 return FUNC_11(VAR_24);
}
