
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct silead_ts_data {int gpio_power; TYPE_1__* regulators; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {scalar_t__ irq; int name; int adapter; struct device dev; } ;
struct TYPE_4__ {char* supply; } ;


 int FUNC_0 (TYPE_1__*) ;
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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,int ,struct silead_ts_data*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct silead_ts_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int ,TYPE_1__*) ;
 int FUNC_8 (struct device*,scalar_t__,int *,int ,int ,int ,struct silead_ts_data*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct i2c_client*,struct silead_ts_data*) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_12 (struct i2c_client*) ;
 int FUNC_13 (struct silead_ts_data*) ;
 int FUNC_14 (struct silead_ts_data*,struct i2c_device_id const*) ;
 int FUNC_15 (struct i2c_client*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_12,
      const struct i2c_device_id *VAR_13)
{
 struct silead_ts_data *VAR_14;
 struct device *VAR_15 = &VAR_12->dev;
 int VAR_16;

 if (!FUNC_9(VAR_12->adapter,
         VAR_6 |
         VAR_7 |
         VAR_8)) {
  FUNC_3(VAR_15, "I2C functionality check failed\n");
  return -VAR_2;
 }

 VAR_14 = FUNC_6(VAR_15, sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_1;

 FUNC_10(VAR_12, VAR_14);
 VAR_14->client = VAR_12;

 VAR_16 = FUNC_14(VAR_14, VAR_13);
 if (VAR_16)
  return VAR_16;

 FUNC_12(VAR_12);


 if (VAR_12->irq <= 0)
  return -VAR_0;

 VAR_14->regulators[0].supply = "vddio";
 VAR_14->regulators[1].supply = "avdd";
 VAR_16 = FUNC_7(VAR_15, FUNC_0(VAR_14->regulators),
     VAR_14->regulators);
 if (VAR_16)
  return VAR_16;





 VAR_16 = FUNC_11(FUNC_0(VAR_14->regulators),
          VAR_14->regulators);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_4(VAR_15, VAR_10, VAR_14);
 if (VAR_16)
  return VAR_16;


 VAR_14->gpio_power = FUNC_5(VAR_15, "power", VAR_5);
 if (FUNC_1(VAR_14->gpio_power)) {
  if (FUNC_2(VAR_14->gpio_power) != -VAR_3)
   FUNC_3(VAR_15, "Shutdown GPIO request failed\n");
  return FUNC_2(VAR_14->gpio_power);
 }

 VAR_16 = FUNC_15(VAR_12);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_13(VAR_14);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_8(VAR_15, VAR_12->irq,
       ((void*)0), VAR_11,
       VAR_9, VAR_12->name, VAR_14);
 if (VAR_16) {
  if (VAR_16 != -VAR_3)
   FUNC_3(VAR_15, "IRQ request failed %d\n", VAR_16);
  return VAR_16;
 }

 return 0;
}
