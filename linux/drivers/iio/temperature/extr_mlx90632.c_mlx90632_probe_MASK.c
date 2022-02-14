
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mlx90632_data {int emissivity; struct regmap* regmap; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (int *,char*,unsigned int) ;
 int FUNC_4 (int *,char*,...) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 struct regmap* FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 struct mlx90632_data* FUNC_9 (struct iio_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (struct mlx90632_data*) ;
 int FUNC_11 (struct mlx90632_data*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_12,
     const struct i2c_device_id *VAR_13)
{
 struct iio_dev *VAR_14;
 struct mlx90632_data *VAR_15;
 struct regmap *VAR_16;
 int VAR_17;
 unsigned int VAR_18;

 VAR_14 = FUNC_5(&VAR_12->dev, sizeof(*VAR_15));
 if (!VAR_14) {
  FUNC_4(&VAR_12->dev, "Failed to allocate device\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_6(VAR_12, &VAR_11);
 if (FUNC_1(VAR_16)) {
  VAR_17 = FUNC_2(VAR_16);
  FUNC_4(&VAR_12->dev, "Failed to allocate regmap: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_15 = FUNC_9(VAR_14);
 FUNC_7(VAR_12, VAR_14);
 VAR_15->client = VAR_12;
 VAR_15->regmap = VAR_16;

 FUNC_12(&VAR_15->lock);
 VAR_14->dev.parent = &VAR_12->dev;
 VAR_14->name = VAR_13->name;
 VAR_14->modes = VAR_2;
 VAR_14->info = &VAR_10;
 VAR_14->channels = VAR_9;
 VAR_14->num_channels = FUNC_0(VAR_9);

 VAR_17 = FUNC_11(VAR_15);
 if (VAR_17 < 0) {
  FUNC_4(&VAR_12->dev, "Wakeup failed: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_18(VAR_15->regmap, VAR_5, &VAR_18);
 if (VAR_17 < 0) {
  FUNC_4(&VAR_12->dev, "read of version failed: %d\n", VAR_17);
  return VAR_17;
 }
 if (VAR_18 == VAR_7) {
  FUNC_3(&VAR_12->dev,
   "Detected Medical EEPROM calibration %x\n", VAR_18);
 } else if (VAR_18 == VAR_6) {
  FUNC_3(&VAR_12->dev,
   "Detected Consumer EEPROM calibration %x\n", VAR_18);
 } else if ((VAR_18 & VAR_3) == VAR_4) {
  FUNC_3(&VAR_12->dev,
   "Detected Unknown EEPROM calibration %x\n", VAR_18);
 } else {
  FUNC_4(&VAR_12->dev,
   "Wrong DSP version %x (expected %x)\n",
   VAR_18, VAR_4);
  return -VAR_1;
 }

 VAR_15->emissivity = 1000;

 FUNC_13(&VAR_12->dev);
 VAR_17 = FUNC_15(&VAR_12->dev);
 if (VAR_17 < 0) {
  FUNC_10(VAR_15);
  return VAR_17;
 }
 FUNC_14(&VAR_12->dev);
 FUNC_16(&VAR_12->dev, VAR_8);
 FUNC_17(&VAR_12->dev);

 return FUNC_8(VAR_14);
}
