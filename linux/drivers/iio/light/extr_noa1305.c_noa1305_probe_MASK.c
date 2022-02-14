
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct noa1305_priv {struct regmap* regmap; struct i2c_client* client; struct regmap* vin_reg; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ,struct noa1305_priv*) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct iio_dev*) ;
 struct regmap* FUNC_7 (struct i2c_client*,int *) ;
 struct regmap* FUNC_8 (int *,char*) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 struct noa1305_priv* FUNC_10 (struct iio_dev*) ;
 unsigned int FUNC_11 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (struct regmap*,int ,int *,int) ;
 int FUNC_13 (struct regmap*,int ,int ) ;
 int FUNC_14 (struct regmap*) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_16,
    const struct i2c_device_id *VAR_17)
{
 struct noa1305_priv *VAR_18;
 struct iio_dev *VAR_19;
 struct regmap *VAR_20;
 __le16 VAR_21;
 unsigned int VAR_22;
 int VAR_23;

 VAR_19 = FUNC_5(&VAR_16->dev, sizeof(*VAR_18));
 if (!VAR_19)
  return -VAR_1;

 VAR_20 = FUNC_7(VAR_16, &VAR_15);
 if (FUNC_1(VAR_20)) {
  FUNC_3(&VAR_16->dev, "Regmap initialization failed.\n");
  return FUNC_2(VAR_20);
 }

 VAR_18 = FUNC_10(VAR_19);

 VAR_18->vin_reg = FUNC_8(&VAR_16->dev, "vin");
 if (FUNC_1(VAR_18->vin_reg)) {
  FUNC_3(&VAR_16->dev, "get regulator vin failed\n");
  return FUNC_2(VAR_18->vin_reg);
 }

 VAR_23 = FUNC_14(VAR_18->vin_reg);
 if (VAR_23) {
  FUNC_3(&VAR_16->dev, "enable regulator vin failed\n");
  return VAR_23;
 }

 VAR_23 = FUNC_4(&VAR_16->dev, VAR_14, VAR_18);
 if (VAR_23) {
  FUNC_3(&VAR_16->dev, "addition of devm action failed\n");
  return VAR_23;
 }

 FUNC_9(VAR_16, VAR_19);
 VAR_18->client = VAR_16;
 VAR_18->regmap = VAR_20;

 VAR_23 = FUNC_12(VAR_20, VAR_7, &VAR_21, 2);
 if (VAR_23 < 0) {
  FUNC_3(&VAR_16->dev, "ID reading failed: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_22 = FUNC_11(VAR_21);
 if (VAR_22 != VAR_3) {
  FUNC_3(&VAR_16->dev, "Unknown device ID: 0x%x\n", VAR_22);
  return -VAR_0;
 }

 VAR_23 = FUNC_13(VAR_20, VAR_9,
      VAR_6);
 if (VAR_23 < 0) {
  FUNC_3(&VAR_16->dev, "Enabling power control failed\n");
  return VAR_23;
 }

 VAR_23 = FUNC_13(VAR_20, VAR_10, VAR_11);
 if (VAR_23 < 0) {
  FUNC_3(&VAR_16->dev, "Device reset failed\n");
  return VAR_23;
 }

 VAR_23 = FUNC_13(VAR_20, VAR_8,
      VAR_5);
 if (VAR_23 < 0) {
  FUNC_3(&VAR_16->dev, "Setting integration time failed\n");
  return VAR_23;
 }

 VAR_19->dev.parent = &VAR_16->dev;
 VAR_19->info = &VAR_13;
 VAR_19->channels = VAR_12;
 VAR_19->num_channels = FUNC_0(VAR_12);
 VAR_19->name = VAR_4;
 VAR_19->modes = VAR_2;

 VAR_23 = FUNC_6(&VAR_16->dev, VAR_19);
 if (VAR_23)
  FUNC_3(&VAR_16->dev, "registering device failed\n");

 return VAR_23;
}
