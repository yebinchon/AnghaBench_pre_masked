
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
struct TYPE_9__ {int y_res; int x_res; int y_max; int x_max; } ;
struct raydium_data {TYPE_3__* input; TYPE_2__ info; int report_data; int pkg_size; void* reset_gpio; void* vccio; void* avdd; struct i2c_client* client; int sysfs_mutex; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; int irq; int addr; int adapter; } ;
struct TYPE_8__ {int bustype; } ;
struct TYPE_10__ {char* name; TYPE_1__ id; } ;


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
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_16 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int (*) (struct raydium_data*),struct raydium_data*) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (int *,char*,int ) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 struct raydium_data* FUNC_8 (int *,int,int ) ;
 void* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int ,int *,int ,int ,int ,struct raydium_data*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct i2c_client*,struct raydium_data*) ;
 scalar_t__ FUNC_13 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_14 (TYPE_3__*,int ,int ) ;
 int FUNC_15 (TYPE_3__*,int ,int) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,int ,int ,int,int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int VAR_17 ;
 int FUNC_20 (struct raydium_data*) ;
 int VAR_18 ;
 int FUNC_21 (struct raydium_data*) ;
 int FUNC_22 (struct raydium_data*) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_19,
        const struct i2c_device_id *VAR_20)
{
 union i2c_smbus_data VAR_21;
 struct raydium_data *VAR_22;
 int VAR_23;

 if (!FUNC_11(VAR_19->adapter, VAR_10)) {
  FUNC_2(&VAR_19->dev,
   "i2c check functionality error (need I2C_FUNC_I2C)\n");
  return -VAR_6;
 }

 VAR_22 = FUNC_8(&VAR_19->dev, sizeof(*VAR_22), VAR_8);
 if (!VAR_22)
  return -VAR_5;

 FUNC_19(&VAR_22->sysfs_mutex);

 VAR_22->client = VAR_19;
 FUNC_12(VAR_19, VAR_22);

 VAR_22->avdd = FUNC_9(&VAR_19->dev, "avdd");
 if (FUNC_0(VAR_22->avdd)) {
  VAR_23 = FUNC_1(VAR_22->avdd);
  if (VAR_23 != -VAR_7)
   FUNC_2(&VAR_19->dev,
    "Failed to get 'avdd' regulator: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_22->vccio = FUNC_9(&VAR_19->dev, "vccio");
 if (FUNC_0(VAR_22->vccio)) {
  VAR_23 = FUNC_1(VAR_22->vccio);
  if (VAR_23 != -VAR_7)
   FUNC_2(&VAR_19->dev,
    "Failed to get 'vccio' regulator: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_22->reset_gpio = FUNC_5(&VAR_19->dev, "reset",
       VAR_9);
 if (FUNC_0(VAR_22->reset_gpio)) {
  VAR_23 = FUNC_1(VAR_22->reset_gpio);
  if (VAR_23 != -VAR_7)
   FUNC_2(&VAR_19->dev,
    "failed to get reset gpio: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_22(VAR_22);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_3(&VAR_19->dev, FUNC_21, VAR_22);
 if (VAR_23) {
  FUNC_2(&VAR_19->dev,
   "failed to install power off action: %d\n", VAR_23);
  FUNC_21(VAR_22);
  return VAR_23;
 }


 if (FUNC_13(VAR_19->adapter, VAR_19->addr, 0,
      VAR_12, 0, VAR_11, &VAR_21) < 0) {
  FUNC_2(&VAR_19->dev, "nothing at this address\n");
  return -VAR_6;
 }

 VAR_23 = FUNC_20(VAR_22);
 if (VAR_23) {
  FUNC_2(&VAR_19->dev, "failed to initialize: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_22->report_data = FUNC_7(&VAR_19->dev,
           VAR_22->pkg_size, VAR_8);
 if (!VAR_22->report_data)
  return -VAR_5;

 VAR_22->input = FUNC_6(&VAR_19->dev);
 if (!VAR_22->input) {
  FUNC_2(&VAR_19->dev, "Failed to allocate input device\n");
  return -VAR_5;
 }

 VAR_22->input->name = "Raydium Touchscreen";
 VAR_22->input->id.bustype = VAR_4;

 FUNC_17(VAR_22->input, VAR_0,
        0, FUNC_18(VAR_22->info.x_max), 0, 0);
 FUNC_17(VAR_22->input, VAR_1,
        0, FUNC_18(VAR_22->info.y_max), 0, 0);
 FUNC_14(VAR_22->input, VAR_0, VAR_22->info.x_res);
 FUNC_14(VAR_22->input, VAR_1, VAR_22->info.y_res);

 FUNC_17(VAR_22->input, VAR_3, 0, 255, 0, 0);
 FUNC_17(VAR_22->input, VAR_2, 0, 255, 0, 0);

 VAR_23 = FUNC_15(VAR_22->input, VAR_16,
        VAR_13 | VAR_14);
 if (VAR_23) {
  FUNC_2(&VAR_19->dev,
   "failed to initialize MT slots: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_16(VAR_22->input);
 if (VAR_23) {
  FUNC_2(&VAR_19->dev,
   "unable to register input device: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_10(&VAR_19->dev, VAR_19->irq,
       ((void*)0), VAR_18,
       VAR_15, VAR_19->name, VAR_22);
 if (VAR_23) {
  FUNC_2(&VAR_19->dev, "Failed to register interrupt\n");
  return VAR_23;
 }

 VAR_23 = FUNC_4(&VAR_19->dev,
       &VAR_17);
 if (VAR_23) {
  FUNC_2(&VAR_19->dev, "failed to create sysfs attributes: %d\n",
   VAR_23);
  return VAR_23;
 }

 return 0;
}
