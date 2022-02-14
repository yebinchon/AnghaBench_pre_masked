
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {int (* brightness_set_blocking ) (TYPE_2__*,void*) ;void* max_brightness; void* brightness; void* name; } ;
struct tm2_touchkey_data {int num_keycodes; TYPE_2__ led_dev; TYPE_4__* variant; TYPE_6__* input_dev; TYPE_3__* keycodes; TYPE_3__* regulators; int vdd; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_26__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_5__ dev; int irq; int adapter; } ;
struct device_node {int dummy; } ;
struct TYPE_22__ {int bustype; } ;
struct TYPE_27__ {TYPE_1__ id; void* name; } ;
struct TYPE_25__ {scalar_t__ fixed_regulator; } ;
struct TYPE_24__ {char* supply; int consumer; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 int FUNC_2 (TYPE_5__*,int ,struct tm2_touchkey_data*) ;
 TYPE_6__* FUNC_3 (TYPE_5__*) ;
 struct tm2_touchkey_data* FUNC_4 (TYPE_5__*,int,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_5__*,int ,TYPE_3__*) ;
 int FUNC_7 (TYPE_5__*,int ,int *,int ,int ,void*,struct tm2_touchkey_data*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct i2c_client*,struct tm2_touchkey_data*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*,int ,TYPE_3__) ;
 TYPE_4__* FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (struct device_node*,char*,TYPE_3__*,int ,int ) ;
 int VAR_12 ;
 int FUNC_14 (TYPE_2__*,void*) ;
 int VAR_13 ;
 int FUNC_15 (struct tm2_touchkey_data*) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_14,
         const struct i2c_device_id *VAR_15)
{
 struct device_node *VAR_16 = VAR_14->dev.of_node;
 struct tm2_touchkey_data *VAR_17;
 int VAR_18;
 int VAR_19;

 if (!FUNC_8(VAR_14->adapter,
   VAR_5 | VAR_6)) {
  FUNC_1(&VAR_14->dev, "incompatible I2C adapter\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_4(&VAR_14->dev, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->client = VAR_14;
 FUNC_9(VAR_14, VAR_17);

 VAR_17->variant = FUNC_12(&VAR_14->dev);

 VAR_17->regulators[0].supply = "vcc";
 VAR_17->regulators[1].supply = "vdd";
 VAR_18 = FUNC_6(&VAR_14->dev,
     FUNC_0(VAR_17->regulators),
     VAR_17->regulators);
 if (VAR_18) {
  FUNC_1(&VAR_14->dev, "failed to get regulators: %d\n", VAR_18);
  return VAR_18;
 }


 VAR_17->vdd = VAR_17->regulators[1].consumer;

 VAR_17->num_keycodes = FUNC_13(VAR_16,
     "linux,keycodes", VAR_17->keycodes, 0,
     FUNC_0(VAR_17->keycodes));
 if (VAR_17->num_keycodes <= 0) {

  VAR_17->keycodes[0] = VAR_9;
  VAR_17->keycodes[1] = VAR_8;
  VAR_17->num_keycodes = 2;
 }

 VAR_18 = FUNC_15(VAR_17);
 if (VAR_18) {
  FUNC_1(&VAR_14->dev, "failed to power up device: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_2(&VAR_14->dev,
      VAR_13, VAR_17);
 if (VAR_18) {
  FUNC_1(&VAR_14->dev,
   "failed to install poweroff handler: %d\n", VAR_18);
  return VAR_18;
 }


 VAR_17->input_dev = FUNC_3(&VAR_14->dev);
 if (!VAR_17->input_dev) {
  FUNC_1(&VAR_14->dev, "failed to allocate input device\n");
  return -VAR_2;
 }

 VAR_17->input_dev->name = VAR_11;
 VAR_17->input_dev->id.bustype = VAR_0;

 for (VAR_19 = 0; VAR_19 < VAR_17->num_keycodes; VAR_19++)
  FUNC_11(VAR_17->input_dev, VAR_3,
         VAR_17->keycodes[VAR_19]);

 VAR_18 = FUNC_10(VAR_17->input_dev);
 if (VAR_18) {
  FUNC_1(&VAR_14->dev,
   "failed to register input device: %d\n", VAR_18);
  return VAR_18;
 }

 VAR_18 = FUNC_7(&VAR_14->dev, VAR_14->irq,
       ((void*)0), VAR_12,
       VAR_7,
       VAR_11, VAR_17);
 if (VAR_18) {
  FUNC_1(&VAR_14->dev,
   "failed to request threaded irq: %d\n", VAR_18);
  return VAR_18;
 }


 VAR_17->led_dev.name = VAR_11;
 VAR_17->led_dev.brightness = VAR_10;
 VAR_17->led_dev.max_brightness = VAR_10;
 VAR_17->led_dev.brightness_set_blocking =
     FUNC_14;

 VAR_18 = FUNC_5(&VAR_14->dev, &VAR_17->led_dev);
 if (VAR_18) {
  FUNC_1(&VAR_14->dev,
   "failed to register touchkey led: %d\n", VAR_18);
  return VAR_18;
 }

 if (VAR_17->variant->fixed_regulator)
  FUNC_14(&VAR_17->led_dev, VAR_10);

 return 0;
}
