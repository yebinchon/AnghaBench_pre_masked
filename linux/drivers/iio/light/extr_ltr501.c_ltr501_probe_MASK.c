
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct ltr501_data {TYPE_2__* chip_info; struct regmap* regmap; struct regmap* reg_ps_prst; struct regmap* reg_als_prst; struct regmap* reg_ps_rate; struct regmap* reg_als_rate; struct regmap* reg_ps_intr; struct regmap* reg_als_intr; struct regmap* reg_it; int lock_ps; int lock_als; struct i2c_client* client; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {char const* name; int info; int modes; int num_channels; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {char* name; int driver_data; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct TYPE_4__ {int partid; int info_no_irq; int no_channels; int channels; int info; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int VAR_5 ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (int *,char*,...) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,struct regmap*,int ) ;
 struct regmap* FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,scalar_t__,int *,int ,int,char*,struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct ltr501_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*,int *,int ,int *) ;
 TYPE_2__* VAR_6 ;
 int FUNC_13 (struct ltr501_data*) ;
 int VAR_7 ;
 char* FUNC_14 (int *,int*) ;
 int FUNC_15 (struct ltr501_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_17,
   const struct i2c_device_id *VAR_18)
{
 struct ltr501_data *VAR_19;
 struct iio_dev *VAR_20;
 struct regmap *VAR_21;
 int VAR_22, VAR_23, VAR_24 = 0;
 const char *VAR_25 = ((void*)0);

 VAR_20 = FUNC_4(&VAR_17->dev, sizeof(*VAR_19));
 if (!VAR_20)
  return -VAR_1;

 VAR_21 = FUNC_6(VAR_17, &VAR_8);
 if (FUNC_1(VAR_21)) {
  FUNC_3(&VAR_17->dev, "Regmap initialization failed.\n");
  return FUNC_2(VAR_21);
 }

 VAR_19 = FUNC_10(VAR_20);
 FUNC_8(VAR_17, VAR_20);
 VAR_19->client = VAR_17;
 VAR_19->regmap = VAR_21;
 FUNC_16(&VAR_19->lock_als);
 FUNC_16(&VAR_19->lock_ps);

 VAR_19->reg_it = FUNC_5(&VAR_17->dev, VAR_21,
            VAR_13);
 if (FUNC_1(VAR_19->reg_it)) {
  FUNC_3(&VAR_17->dev, "Integ time reg field init failed.\n");
  return FUNC_2(VAR_19->reg_it);
 }

 VAR_19->reg_als_intr = FUNC_5(&VAR_17->dev, VAR_21,
           VAR_10);
 if (FUNC_1(VAR_19->reg_als_intr)) {
  FUNC_3(&VAR_17->dev, "ALS intr mode reg field init failed\n");
  return FUNC_2(VAR_19->reg_als_intr);
 }

 VAR_19->reg_ps_intr = FUNC_5(&VAR_17->dev, VAR_21,
          VAR_14);
 if (FUNC_1(VAR_19->reg_ps_intr)) {
  FUNC_3(&VAR_17->dev, "PS intr mode reg field init failed.\n");
  return FUNC_2(VAR_19->reg_ps_intr);
 }

 VAR_19->reg_als_rate = FUNC_5(&VAR_17->dev, VAR_21,
           VAR_12);
 if (FUNC_1(VAR_19->reg_als_rate)) {
  FUNC_3(&VAR_17->dev, "ALS samp rate field init failed.\n");
  return FUNC_2(VAR_19->reg_als_rate);
 }

 VAR_19->reg_ps_rate = FUNC_5(&VAR_17->dev, VAR_21,
          VAR_16);
 if (FUNC_1(VAR_19->reg_ps_rate)) {
  FUNC_3(&VAR_17->dev, "PS samp rate field init failed.\n");
  return FUNC_2(VAR_19->reg_ps_rate);
 }

 VAR_19->reg_als_prst = FUNC_5(&VAR_17->dev, VAR_21,
           VAR_11);
 if (FUNC_1(VAR_19->reg_als_prst)) {
  FUNC_3(&VAR_17->dev, "ALS prst reg field init failed\n");
  return FUNC_2(VAR_19->reg_als_prst);
 }

 VAR_19->reg_ps_prst = FUNC_5(&VAR_17->dev, VAR_21,
          VAR_15);
 if (FUNC_1(VAR_19->reg_ps_prst)) {
  FUNC_3(&VAR_17->dev, "PS prst reg field init failed.\n");
  return FUNC_2(VAR_19->reg_ps_prst);
 }

 VAR_22 = FUNC_17(VAR_19->regmap, VAR_5, &VAR_23);
 if (VAR_22 < 0)
  return VAR_22;

 if (VAR_18) {
  VAR_25 = VAR_18->name;
  VAR_24 = VAR_18->driver_data;
 } else if (FUNC_0(&VAR_17->dev)) {
  VAR_25 = FUNC_14(&VAR_17->dev, &VAR_24);
 } else {
  return -VAR_0;
 }

 VAR_19->chip_info = &VAR_6[VAR_24];

 if ((VAR_23 >> 4) != VAR_19->chip_info->partid)
  return -VAR_0;

 VAR_20->dev.parent = &VAR_17->dev;
 VAR_20->info = VAR_19->chip_info->info;
 VAR_20->channels = VAR_19->chip_info->channels;
 VAR_20->num_channels = VAR_19->chip_info->no_channels;
 VAR_20->name = VAR_25;
 VAR_20->modes = VAR_2;

 VAR_22 = FUNC_13(VAR_19);
 if (VAR_22 < 0)
  return VAR_22;

 if (VAR_17->irq > 0) {
  VAR_22 = FUNC_7(&VAR_17->dev, VAR_17->irq,
      ((void*)0), VAR_7,
      VAR_4 |
      VAR_3,
      "ltr501_thresh_event",
      VAR_20);
  if (VAR_22) {
   FUNC_3(&VAR_17->dev, "request irq (%d) failed\n",
    VAR_17->irq);
   return VAR_22;
  }
 } else {
  VAR_20->info = VAR_19->chip_info->info_no_irq;
 }

 VAR_22 = FUNC_12(VAR_20, ((void*)0),
      VAR_9, ((void*)0));
 if (VAR_22)
  goto powerdown_on_error;

 VAR_22 = FUNC_9(VAR_20);
 if (VAR_22)
  goto error_unreg_buffer;

 return 0;

error_unreg_buffer:
 FUNC_11(VAR_20);
powerdown_on_error:
 FUNC_15(VAR_19);
 return VAR_22;
}
