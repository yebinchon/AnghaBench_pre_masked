
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
struct i2c_device_id {int dummy; } ;
struct TYPE_18__ {int of_node; } ;
struct i2c_client {TYPE_6__ dev; int name; int irq; int addr; int adapter; } ;
struct elants_data {int keep_power_in_suspend; int x_max; int y_max; TYPE_2__* input; int y_res; int x_res; void* reset_gpio; void* vccio; void* vcc33; struct i2c_client* client; int cmd_done; int sysfs_mutex; } ;
struct TYPE_16__ {int bustype; } ;
struct TYPE_17__ {char* name; int evbit; int keybit; TYPE_1__ id; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_26 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*,char*,...) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (TYPE_6__*,int (*) (struct elants_data*),struct elants_data*) ;
 int FUNC_6 (TYPE_6__*,int *) ;
 void* FUNC_7 (TYPE_6__*,char*,int ) ;
 TYPE_2__* FUNC_8 (TYPE_6__*) ;
 struct elants_data* FUNC_9 (TYPE_6__*,int,int ) ;
 void* FUNC_10 (TYPE_6__*,char*) ;
 int FUNC_11 (TYPE_6__*,int ,int *,int ,unsigned long,int ,struct elants_data*) ;
 int VAR_27 ;
 int FUNC_12 (struct elants_data*) ;
 int VAR_28 ;
 int FUNC_13 (struct elants_data*) ;
 int FUNC_14 (struct elants_data*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct i2c_client*,struct elants_data*) ;
 scalar_t__ FUNC_17 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_2__*,int ,int ) ;
 int FUNC_20 (TYPE_2__*,int ,int) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,int ,int ,int,int ,int ) ;
 unsigned long FUNC_23 (int ) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct i2c_client *VAR_29,
       const struct i2c_device_id *VAR_30)
{
 union i2c_smbus_data VAR_31;
 struct elants_data *VAR_32;
 unsigned long VAR_33;
 int VAR_34;

 if (!FUNC_15(VAR_29->adapter, VAR_19)) {
  FUNC_3(&VAR_29->dev,
   "%s: i2c check functionality error\n", VAR_9);
  return -VAR_13;
 }

 VAR_32 = FUNC_9(&VAR_29->dev, sizeof(struct elants_data), VAR_17);
 if (!VAR_32)
  return -VAR_11;

 FUNC_24(&VAR_32->sysfs_mutex);
 FUNC_18(&VAR_32->cmd_done);

 VAR_32->client = VAR_29;
 FUNC_16(VAR_29, VAR_32);

 VAR_32->vcc33 = FUNC_10(&VAR_29->dev, "vcc33");
 if (FUNC_0(VAR_32->vcc33)) {
  VAR_34 = FUNC_1(VAR_32->vcc33);
  if (VAR_34 != -VAR_14)
   FUNC_3(&VAR_29->dev,
    "Failed to get 'vcc33' regulator: %d\n",
    VAR_34);
  return VAR_34;
 }

 VAR_32->vccio = FUNC_10(&VAR_29->dev, "vccio");
 if (FUNC_0(VAR_32->vccio)) {
  VAR_34 = FUNC_1(VAR_32->vccio);
  if (VAR_34 != -VAR_14)
   FUNC_3(&VAR_29->dev,
    "Failed to get 'vccio' regulator: %d\n",
    VAR_34);
  return VAR_34;
 }

 VAR_32->reset_gpio = FUNC_7(&VAR_29->dev, "reset", VAR_18);
 if (FUNC_0(VAR_32->reset_gpio)) {
  VAR_34 = FUNC_1(VAR_32->reset_gpio);

  if (VAR_34 == -VAR_14)
   return VAR_34;

  if (VAR_34 != -VAR_10 && VAR_34 != -VAR_12) {
   FUNC_3(&VAR_29->dev,
    "failed to get reset gpio: %d\n",
    VAR_34);
   return VAR_34;
  }

  VAR_32->keep_power_in_suspend = 1;
 }

 VAR_34 = FUNC_14(VAR_32);
 if (VAR_34)
  return VAR_34;

 VAR_34 = FUNC_5(&VAR_29->dev, FUNC_13, VAR_32);
 if (VAR_34) {
  FUNC_3(&VAR_29->dev,
   "failed to install power off action: %d\n", VAR_34);
  FUNC_13(VAR_32);
  return VAR_34;
 }


 if (FUNC_17(VAR_29->adapter, VAR_29->addr, 0,
      VAR_21, 0, VAR_20, &VAR_31) < 0) {
  FUNC_3(&VAR_29->dev, "nothing at this address\n");
  return -VAR_13;
 }

 VAR_34 = FUNC_12(VAR_32);
 if (VAR_34) {
  FUNC_3(&VAR_29->dev, "failed to initialize: %d\n", VAR_34);
  return VAR_34;
 }

 VAR_32->input = FUNC_8(&VAR_29->dev);
 if (!VAR_32->input) {
  FUNC_3(&VAR_29->dev, "Failed to allocate input device\n");
  return -VAR_11;
 }

 VAR_32->input->name = "Elan Touchscreen";
 VAR_32->input->id.bustype = VAR_8;

 FUNC_2(VAR_7, VAR_32->input->keybit);
 FUNC_2(VAR_15, VAR_32->input->evbit);
 FUNC_2(VAR_16, VAR_32->input->evbit);


 FUNC_22(VAR_32->input, VAR_5, 0, VAR_32->x_max, 0, 0);
 FUNC_22(VAR_32->input, VAR_6, 0, VAR_32->y_max, 0, 0);
 FUNC_22(VAR_32->input, VAR_4, 0, 255, 0, 0);
 FUNC_19(VAR_32->input, VAR_5, VAR_32->x_res);
 FUNC_19(VAR_32->input, VAR_6, VAR_32->y_res);


 VAR_34 = FUNC_20(VAR_32->input, VAR_26,
        VAR_22 | VAR_23);
 if (VAR_34) {
  FUNC_3(&VAR_29->dev,
   "failed to initialize MT slots: %d\n", VAR_34);
  return VAR_34;
 }

 FUNC_22(VAR_32->input, VAR_0, 0, VAR_32->x_max, 0, 0);
 FUNC_22(VAR_32->input, VAR_1, 0, VAR_32->y_max, 0, 0);
 FUNC_22(VAR_32->input, VAR_3, 0, 255, 0, 0);
 FUNC_22(VAR_32->input, VAR_2, 0, 255, 0, 0);
 FUNC_19(VAR_32->input, VAR_0, VAR_32->x_res);
 FUNC_19(VAR_32->input, VAR_1, VAR_32->y_res);

 VAR_34 = FUNC_21(VAR_32->input);
 if (VAR_34) {
  FUNC_3(&VAR_29->dev,
   "unable to register input device: %d\n", VAR_34);
  return VAR_34;
 }






 VAR_33 = FUNC_23(VAR_29->irq);
 if (!VAR_33)
  VAR_33 = VAR_25;

 VAR_34 = FUNC_11(&VAR_29->dev, VAR_29->irq,
       ((void*)0), VAR_28,
       VAR_33 | VAR_24,
       VAR_29->name, VAR_32);
 if (VAR_34) {
  FUNC_3(&VAR_29->dev, "Failed to register interrupt\n");
  return VAR_34;
 }





 if (!VAR_29->dev.of_node)
  FUNC_4(&VAR_29->dev, 1);

 VAR_34 = FUNC_6(&VAR_29->dev, &VAR_27);
 if (VAR_34) {
  FUNC_3(&VAR_29->dev, "failed to create sysfs attributes: %d\n",
   VAR_34);
  return VAR_34;
 }

 return 0;
}
