
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qt2160_data {struct input_dev* input; int * keycodes; int dwork; struct i2c_client* client; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; int keycodesize; int keycodemax; int keybit; int evbit; int * keycode; TYPE_1__ id; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; TYPE_2__* adapter; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (scalar_t__,struct qt2160_data*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct i2c_client*,struct qt2160_data*) ;
 struct input_dev* FUNC_9 () ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct qt2160_data*) ;
 struct qt2160_data* FUNC_13 (int,int ) ;
 int FUNC_14 (struct i2c_client*) ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_15 (struct qt2160_data*) ;
 int FUNC_16 (struct qt2160_data*) ;
 int FUNC_17 (struct qt2160_data*) ;
 int VAR_12 ;
 int FUNC_18 (struct i2c_client*,int ,int) ;
 int FUNC_19 (scalar_t__,int ,int ,char*,struct qt2160_data*) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_13,
   const struct i2c_device_id *VAR_14)
{
 struct qt2160_data *VAR_15;
 struct input_dev *VAR_16;
 int VAR_17;
 int VAR_18;


 VAR_18 = FUNC_7(VAR_13->adapter,
   VAR_6);
 if (!VAR_18) {
  FUNC_5(&VAR_13->dev, "%s adapter not supported\n",
    FUNC_4(&VAR_13->adapter->dev));
  return -VAR_1;
 }

 if (!FUNC_14(VAR_13))
  return -VAR_1;


 VAR_15 = FUNC_13(sizeof(struct qt2160_data), VAR_5);
 VAR_16 = FUNC_9();
 if (!VAR_15 || !VAR_16) {
  FUNC_5(&VAR_13->dev, "insufficient memory\n");
  VAR_18 = -VAR_2;
  goto err_free_mem;
 }

 VAR_15->client = VAR_13;
 VAR_15->input = VAR_16;
 FUNC_1(&VAR_15->dwork, VAR_12);

 VAR_16->name = "AT42QT2160 Touch Sense Keyboard";
 VAR_16->id.bustype = VAR_0;

 VAR_16->keycode = VAR_15->keycodes;
 VAR_16->keycodesize = sizeof(VAR_15->keycodes[0]);
 VAR_16->keycodemax = FUNC_0(VAR_11);

 FUNC_3(VAR_3, VAR_16->evbit);
 FUNC_2(VAR_4, VAR_16->evbit);
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_11); VAR_17++) {
  VAR_15->keycodes[VAR_17] = VAR_11[VAR_17];
  FUNC_3(VAR_11[VAR_17], VAR_16->keybit);
 }
 FUNC_2(VAR_8, VAR_16->keybit);


 VAR_18 = FUNC_18(VAR_13, VAR_9, 1);
 if (VAR_18) {
  FUNC_5(&VAR_13->dev, "failed to calibrate device\n");
  goto err_free_mem;
 }

 if (VAR_13->irq) {
  VAR_18 = FUNC_19(VAR_13->irq, VAR_10,
        VAR_7, "qt2160", VAR_15);
  if (VAR_18) {
   FUNC_5(&VAR_13->dev,
    "failed to allocate irq %d\n", VAR_13->irq);
   goto err_free_mem;
  }
 }

 VAR_18 = FUNC_15(VAR_15);
 if (VAR_18) {
  FUNC_5(&VAR_13->dev, "Failed to register leds\n");
  goto err_free_irq;
 }

 VAR_18 = FUNC_11(VAR_15->input);
 if (VAR_18) {
  FUNC_5(&VAR_13->dev,
   "Failed to register input device\n");
  goto err_unregister_leds;
 }

 FUNC_8(VAR_13, VAR_15);
 FUNC_16(VAR_15);

 return 0;

err_unregister_leds:
 FUNC_17(VAR_15);
err_free_irq:
 if (VAR_13->irq)
  FUNC_6(VAR_13->irq, VAR_15);
err_free_mem:
 FUNC_10(VAR_16);
 FUNC_12(VAR_15);
 return VAR_18;
}
