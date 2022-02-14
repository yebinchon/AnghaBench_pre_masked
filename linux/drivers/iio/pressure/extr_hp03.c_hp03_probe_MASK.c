
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {int modes; int * info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int name; } ;
struct device {int dummy; } ;
struct i2c_client {int adapter; struct device dev; } ;
struct hp03_priv {int eeprom_client; int eeprom_regmap; int xclr_gpio; int lock; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int ,int ) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iio_dev*) ;
 struct hp03_priv* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_7,
        const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct iio_dev *VAR_10;
 struct hp03_priv *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(VAR_9, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_10(VAR_10);
 VAR_11->client = VAR_7;
 FUNC_11(&VAR_11->lock);

 VAR_10->dev.parent = VAR_9;
 VAR_10->name = VAR_8->name;
 VAR_10->channels = VAR_4;
 VAR_10->num_channels = FUNC_0(VAR_4);
 VAR_10->info = &VAR_5;
 VAR_10->modes = VAR_3;

 VAR_11->xclr_gpio = FUNC_4(VAR_9, "xclr", 0, VAR_1);
 if (FUNC_1(VAR_11->xclr_gpio)) {
  FUNC_3(VAR_9, "Failed to claim XCLR GPIO\n");
  VAR_12 = FUNC_2(VAR_11->xclr_gpio);
  return VAR_12;
 }






 VAR_11->eeprom_client = FUNC_6(VAR_7->adapter, VAR_2);
 if (FUNC_1(VAR_11->eeprom_client)) {
  FUNC_3(VAR_9, "New EEPROM I2C device failed\n");
  return FUNC_2(VAR_11->eeprom_client);
 }

 VAR_11->eeprom_regmap = FUNC_13(VAR_11->eeprom_client,
           &VAR_6);
 if (FUNC_1(VAR_11->eeprom_regmap)) {
  FUNC_3(VAR_9, "Failed to allocate EEPROM regmap\n");
  VAR_12 = FUNC_2(VAR_11->eeprom_regmap);
  goto err_cleanup_eeprom_client;
 }

 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12) {
  FUNC_3(VAR_9, "Failed to register IIO device\n");
  goto err_cleanup_eeprom_regmap;
 }

 FUNC_7(VAR_7, VAR_10);

 return 0;

err_cleanup_eeprom_regmap:
 FUNC_12(VAR_11->eeprom_regmap);

err_cleanup_eeprom_client:
 FUNC_8(VAR_11->eeprom_client);
 return VAR_12;
}
