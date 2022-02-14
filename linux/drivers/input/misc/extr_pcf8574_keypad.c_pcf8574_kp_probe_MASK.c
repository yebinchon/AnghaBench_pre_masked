
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kp_data {scalar_t__* btncode; int laststate; int phys; int name; struct i2c_client* client; struct input_dev* idev; } ;
struct TYPE_2__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {scalar_t__* keycode; int keycodesize; int keycodemax; TYPE_1__ id; int phys; int name; int keybit; int * evbit; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ,struct kp_data*) ;
 int FUNC_6 (struct i2c_client*,struct kp_data*) ;
 scalar_t__ FUNC_7 (struct i2c_client*,int) ;
 struct input_dev* FUNC_8 () ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct kp_data*) ;
 struct kp_data* FUNC_12 (int,int ) ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (struct kp_data*) ;
 int FUNC_14 (int ,int *,int ,int,char*,struct kp_data*) ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_12, const struct i2c_device_id *VAR_13)
{
 int VAR_14, VAR_15;
 struct input_dev *VAR_16;
 struct kp_data *VAR_17;

 if (FUNC_7(VAR_12, 240) < 0) {
  FUNC_4(&VAR_12->dev, "probe: write fail\n");
  return -VAR_2;
 }

 VAR_17 = FUNC_12(sizeof(*VAR_17), VAR_5);
 if (!VAR_17)
  return -VAR_3;

 VAR_16 = FUNC_8();
 if (!VAR_16) {
  FUNC_4(&VAR_12->dev, "Can't allocate input device\n");
  VAR_15 = -VAR_3;
  goto fail_allocate;
 }

 VAR_17->idev = VAR_16;
 VAR_17->client = VAR_12;

 VAR_16->evbit[0] = FUNC_1(VAR_4);
 VAR_16->keycode = VAR_17->btncode;
 VAR_16->keycodesize = sizeof(VAR_17->btncode[0]);
 VAR_16->keycodemax = FUNC_0(VAR_17->btncode);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_10); VAR_14++) {
  if (VAR_17->btncode[VAR_14] <= VAR_8) {
   VAR_17->btncode[VAR_14] = VAR_10[VAR_14];
   FUNC_3(VAR_17->btncode[VAR_14], VAR_16->keybit);
  }
 }
 FUNC_2(VAR_9, VAR_16->keybit);

 FUNC_15(VAR_17->name, VAR_1);
 FUNC_15(VAR_17->phys, "kp_data/input0");

 VAR_16->name = VAR_17->name;
 VAR_16->phys = VAR_17->phys;
 VAR_16->id.bustype = VAR_0;
 VAR_16->id.vendor = 0x0001;
 VAR_16->id.product = 0x0001;
 VAR_16->id.version = 0x0100;

 VAR_17->laststate = FUNC_13(VAR_17);

 VAR_15 = FUNC_14(VAR_12->irq, ((void*)0), VAR_11,
       VAR_7 | VAR_6,
       VAR_1, VAR_17);
 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "IRQ %d is not free\n", VAR_12->irq);
  goto fail_free_device;
 }

 VAR_15 = FUNC_10(VAR_16);
 if (VAR_15) {
  FUNC_4(&VAR_12->dev, "input_register_device() failed\n");
  goto fail_free_irq;
 }

 FUNC_6(VAR_12, VAR_17);
 return 0;

 fail_free_irq:
 FUNC_5(VAR_12->irq, VAR_17);
 fail_free_device:
 FUNC_9(VAR_16);
 fail_allocate:
 FUNC_11(VAR_17);

 return VAR_15;
}
