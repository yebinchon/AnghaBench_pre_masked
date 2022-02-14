
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ina2xx_platform_data {unsigned int shunt_uohms; } ;
struct ina2xx_chip_info {int avg; TYPE_2__* config; int state_lock; int regmap; } ;
struct TYPE_9__ {scalar_t__ of_node; TYPE_1__* parent; } ;
struct iio_dev {int modes; TYPE_3__ dev; int * setup_ops; int name; int * info; void* num_channels; void* channels; } ;
struct iio_buffer {int dummy; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
typedef enum ina2xx_ids { ____Placeholder_ina2xx_ids } ina2xx_ids ;
struct TYPE_8__ {unsigned int config_default; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct ina2xx_platform_data* FUNC_4 (TYPE_1__*) ;
 struct iio_dev* FUNC_5 (TYPE_1__*,int) ;
 struct iio_buffer* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*,struct iio_buffer*) ;
 int FUNC_10 (struct iio_dev*) ;
 struct ina2xx_chip_info* FUNC_11 (struct iio_dev*) ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct ina2xx_chip_info*,int ,unsigned int*) ;
 int FUNC_13 (struct ina2xx_chip_info*,int ,unsigned int*) ;
 int FUNC_14 (struct ina2xx_chip_info*,int ,unsigned int*) ;
 int FUNC_15 (struct ina2xx_chip_info*,int ,unsigned int*) ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (struct ina2xx_chip_info*,int ,unsigned int*) ;
 int FUNC_17 (struct ina2xx_chip_info*,int ,unsigned int*) ;
 int FUNC_18 (struct ina2xx_chip_info*,int ,unsigned int*) ;
 TYPE_2__* VAR_14 ;
 int FUNC_19 (struct ina2xx_chip_info*,unsigned int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (TYPE_1__*) ;
 scalar_t__ FUNC_22 (scalar_t__,char*,unsigned int*) ;
 int FUNC_23 (struct ina2xx_chip_info*,unsigned int) ;

__attribute__((used)) static int FUNC_24(struct i2c_client *VAR_17,
   const struct i2c_device_id *VAR_18)
{
 struct ina2xx_chip_info *VAR_19;
 struct iio_dev *VAR_20;
 struct iio_buffer *VAR_21;
 unsigned int VAR_22;
 enum ina2xx_ids VAR_23;
 int VAR_24;

 VAR_20 = FUNC_5(&VAR_17->dev, sizeof(*VAR_19));
 if (!VAR_20)
  return -VAR_0;

 VAR_19 = FUNC_11(VAR_20);


 FUNC_8(VAR_17, VAR_20);

 VAR_19->regmap = FUNC_7(VAR_17, &VAR_15);
 if (FUNC_1(VAR_19->regmap)) {
  FUNC_3(&VAR_17->dev, "failed to allocate register map\n");
  return FUNC_2(VAR_19->regmap);
 }

 if (VAR_17->dev.of_node)
  VAR_23 = (enum ina2xx_ids)FUNC_21(&VAR_17->dev);
 else
  VAR_23 = VAR_18->driver_data;
 VAR_19->config = &VAR_14[VAR_23];

 FUNC_20(&VAR_19->state_lock);

 if (FUNC_22(VAR_17->dev.of_node,
     "shunt-resistor", &VAR_22) < 0) {
  struct ina2xx_platform_data *VAR_25 =
      FUNC_4(&VAR_17->dev);

  if (VAR_25)
   VAR_22 = VAR_25->shunt_uohms;
  else
   VAR_22 = VAR_6;
 }

 VAR_24 = FUNC_23(VAR_19, VAR_22);
 if (VAR_24)
  return VAR_24;


 VAR_22 = VAR_19->config->config_default;

 if (VAR_18->driver_data == VAR_11) {
  FUNC_16(VAR_19, VAR_4, &VAR_22);
  FUNC_17(VAR_19, VAR_5, &VAR_22);
  FUNC_18(VAR_19, VAR_5, &VAR_22);
 } else {
  VAR_19->avg = 1;
  FUNC_12(VAR_19, VAR_2, &VAR_22);
  FUNC_13(VAR_19, VAR_2, &VAR_22);
  FUNC_14(VAR_19, VAR_1, &VAR_22);
  FUNC_15(VAR_19, VAR_3, &VAR_22);
 }

 VAR_24 = FUNC_19(VAR_19, VAR_22);
 if (VAR_24) {
  FUNC_3(&VAR_17->dev, "error configuring the device\n");
  return VAR_24;
 }

 VAR_20->modes = VAR_8 | VAR_7;
 VAR_20->dev.parent = &VAR_17->dev;
 VAR_20->dev.of_node = VAR_17->dev.of_node;
 if (VAR_18->driver_data == VAR_11) {
  VAR_20->channels = VAR_12;
  VAR_20->num_channels = FUNC_0(VAR_12);
  VAR_20->info = &VAR_13;
 } else {
  VAR_20->channels = VAR_9;
  VAR_20->num_channels = FUNC_0(VAR_9);
  VAR_20->info = &VAR_10;
 }
 VAR_20->name = VAR_18->name;
 VAR_20->setup_ops = &VAR_16;

 VAR_21 = FUNC_6(&VAR_20->dev);
 if (!VAR_21)
  return -VAR_0;

 FUNC_9(VAR_20, VAR_21);

 return FUNC_10(VAR_20);
}
