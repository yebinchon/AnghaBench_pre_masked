
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
struct goodix_ts_data {int cfg_name; int id; scalar_t__ gpiod_rst; scalar_t__ gpiod_int; int chip; int avdd28; int vddio; int contact_size; int firmware_loading_complete; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,struct goodix_ts_data*) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 struct goodix_ts_data* FUNC_4 (int *,int,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct goodix_ts_data*) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct goodix_ts_data*) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (struct goodix_ts_data*) ;
 int FUNC_10 (struct goodix_ts_data*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct i2c_client*,struct goodix_ts_data*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int,int ,int *,int ,struct goodix_ts_data*,int ) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_8,
      const struct i2c_device_id *VAR_9)
{
 struct goodix_ts_data *VAR_10;
 int VAR_11;

 FUNC_0(&VAR_8->dev, "I2C Address: 0x%02x\n", VAR_8->addr);

 if (!FUNC_11(VAR_8->adapter, VAR_4)) {
  FUNC_1(&VAR_8->dev, "I2C check functionality failed.\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->client = VAR_8;
 FUNC_12(VAR_8, VAR_10);
 FUNC_13(&VAR_10->firmware_loading_complete);
 VAR_10->contact_size = VAR_3;

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_15(VAR_10->avdd28);
 if (VAR_11) {
  FUNC_1(&VAR_8->dev,
   "Failed to enable AVDD28 regulator: %d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_15(VAR_10->vddio);
 if (VAR_11) {
  FUNC_1(&VAR_8->dev,
   "Failed to enable VDDIO regulator: %d\n",
   VAR_11);
  FUNC_14(VAR_10->avdd28);
  return VAR_11;
 }

 VAR_11 = FUNC_2(&VAR_8->dev,
      VAR_7, VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_10->gpiod_int && VAR_10->gpiod_rst) {

  VAR_11 = FUNC_10(VAR_10);
  if (VAR_11) {
   FUNC_1(&VAR_8->dev, "Controller reset failed.\n");
   return VAR_11;
  }
 }

 VAR_11 = FUNC_8(VAR_8);
 if (VAR_11) {
  FUNC_1(&VAR_8->dev, "I2C communication failure: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11) {
  FUNC_1(&VAR_8->dev, "Read version failed.\n");
  return VAR_11;
 }

 VAR_10->chip = FUNC_6(VAR_10->id);

 if (VAR_10->gpiod_int && VAR_10->gpiod_rst) {

  VAR_10->cfg_name = FUNC_3(&VAR_8->dev, VAR_2,
           "goodix_%d_cfg.bin", VAR_10->id);
  if (!VAR_10->cfg_name)
   return -VAR_0;

  VAR_11 = FUNC_16(VAR_5, 1, VAR_10->cfg_name,
      &VAR_8->dev, VAR_2, VAR_10,
      VAR_6);
  if (VAR_11) {
   FUNC_1(&VAR_8->dev,
    "Failed to invoke firmware loader: %d\n",
    VAR_11);
   return VAR_11;
  }

  return 0;
 } else {
  VAR_11 = FUNC_5(VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
