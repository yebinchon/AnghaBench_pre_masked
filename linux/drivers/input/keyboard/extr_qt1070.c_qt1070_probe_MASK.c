
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qt1070_data {struct input_dev* input; int * keycodes; scalar_t__ irq; struct i2c_client* client; } ;
struct TYPE_7__ {int bustype; } ;
struct TYPE_6__ {TYPE_5__* parent; } ;
struct input_dev {char* name; int keycodesize; int keycodemax; int keybit; int evbit; int * keycode; TYPE_2__ id; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {TYPE_3__* driver; } ;
struct i2c_client {scalar_t__ irq; TYPE_5__ dev; TYPE_4__* adapter; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (int *) ;
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
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,char*,...) ;
 int FUNC_4 (scalar_t__,struct qt1070_data*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (struct i2c_client*,struct qt1070_data*) ;
 struct input_dev* FUNC_7 () ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct qt1070_data*) ;
 struct qt1070_data* FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct i2c_client*) ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_14 (struct i2c_client*,int ) ;
 int FUNC_15 (struct i2c_client*,int ,int) ;
 int FUNC_16 (scalar_t__,int *,int ,int,int ,struct qt1070_data*) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_16,
    const struct i2c_device_id *VAR_17)
{
 struct qt1070_data *VAR_18;
 struct input_dev *VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_21 = FUNC_5(VAR_16->adapter, VAR_8);
 if (!VAR_21) {
  FUNC_3(&VAR_16->dev, "%s adapter not supported\n",
   FUNC_2(&VAR_16->adapter->dev));
  return -VAR_4;
 }

 if (!VAR_16->irq) {
  FUNC_3(&VAR_16->dev, "please assign the irq to this device\n");
  return -VAR_3;
 }


 if (!FUNC_13(VAR_16))
  return -VAR_4;

 VAR_18 = FUNC_11(sizeof(struct qt1070_data), VAR_7);
 VAR_19 = FUNC_7();
 if (!VAR_18 || !VAR_19) {
  FUNC_3(&VAR_16->dev, "insufficient memory\n");
  VAR_21 = -VAR_5;
  goto err_free_mem;
 }

 VAR_18->client = VAR_16;
 VAR_18->input = VAR_19;
 VAR_18->irq = VAR_16->irq;

 VAR_19->name = "AT42QT1070 QTouch Sensor";
 VAR_19->dev.parent = &VAR_16->dev;
 VAR_19->id.bustype = VAR_0;


 VAR_19->keycode = VAR_18->keycodes;
 VAR_19->keycodesize = sizeof(VAR_18->keycodes[0]);
 VAR_19->keycodemax = FUNC_0(VAR_15);

 FUNC_1(VAR_6, VAR_19->evbit);

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_15); VAR_20++) {
  VAR_18->keycodes[VAR_20] = VAR_15[VAR_20];
  FUNC_1(VAR_15[VAR_20], VAR_19->keybit);
 }


 FUNC_15(VAR_16, VAR_1, 1);
 FUNC_12(VAR_11);


 FUNC_15(VAR_16, VAR_13, 1);
 FUNC_12(VAR_12);

 VAR_21 = FUNC_16(VAR_16->irq, ((void*)0), VAR_14,
       VAR_10 | VAR_9,
       VAR_16->dev.driver->name, VAR_18);
 if (VAR_21) {
  FUNC_3(&VAR_16->dev, "fail to request irq\n");
  goto err_free_mem;
 }


 VAR_21 = FUNC_9(VAR_18->input);
 if (VAR_21) {
  FUNC_3(&VAR_16->dev, "Failed to register input device\n");
  goto err_free_irq;
 }

 FUNC_6(VAR_16, VAR_18);


 FUNC_14(VAR_16, VAR_2);

 return 0;

err_free_irq:
 FUNC_4(VAR_16->irq, VAR_18);
err_free_mem:
 FUNC_8(VAR_19);
 FUNC_10(VAR_18);
 return VAR_21;
}
