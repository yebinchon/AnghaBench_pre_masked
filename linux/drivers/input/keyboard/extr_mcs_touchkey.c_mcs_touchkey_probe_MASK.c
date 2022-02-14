
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int press_invert; int baseval; int pressbit; int status_reg; } ;
struct mcs_touchkey_data {unsigned int* keycodes; int (* poweron ) (int) ;TYPE_1__ chip; struct input_dev* input_dev; struct i2c_client* client; } ;
struct mcs_platform_data {int keymap_size; int (* poweron ) (int) ;int (* cfg_pin ) () ;int * keymap; scalar_t__ key_maxval; int no_autorepeat; } ;
struct TYPE_10__ {TYPE_5__* parent; } ;
struct TYPE_9__ {int bustype; } ;
struct input_dev {char* name; unsigned int* keycode; int keycodesize; int keybit; scalar_t__ keycodemax; int * evbit; TYPE_3__ dev; TYPE_2__ id; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_12__ {TYPE_4__* driver; } ;
struct i2c_client {int irq; TYPE_5__ dev; } ;
struct TYPE_11__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_18 ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (TYPE_5__*,char*,...) ;
 struct mcs_platform_data* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,char*,int) ;
 int FUNC_7 (int ,struct mcs_touchkey_data*) ;
 int FUNC_8 (struct i2c_client*,struct mcs_touchkey_data*) ;
 int FUNC_9 (struct i2c_client*,unsigned int) ;
 struct input_dev* FUNC_10 () ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*) ;
 int FUNC_13 (struct input_dev*,int ,int ) ;
 int FUNC_14 (struct input_dev*,struct mcs_touchkey_data*) ;
 int VAR_19 ;
 int FUNC_15 (struct mcs_touchkey_data*) ;
 struct mcs_touchkey_data* FUNC_16 (int ,int ) ;
 int VAR_20 ;
 int FUNC_17 (int ,int *,int ,int,int ,struct mcs_touchkey_data*) ;
 int FUNC_18 (struct mcs_touchkey_data*,int ,scalar_t__) ;
 int FUNC_19 () ;
 int FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_21,
  const struct i2c_device_id *VAR_22)
{
 const struct mcs_platform_data *VAR_23;
 struct mcs_touchkey_data *VAR_24;
 struct input_dev *VAR_25;
 unsigned int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;

 VAR_23 = FUNC_5(&VAR_21->dev);
 if (!VAR_23) {
  FUNC_4(&VAR_21->dev, "no platform data defined\n");
  return -VAR_1;
 }

 VAR_24 = FUNC_16(FUNC_18(VAR_24, VAR_19, VAR_23->key_maxval + 1),
         VAR_6);
 VAR_25 = FUNC_10();
 if (!VAR_24 || !VAR_25) {
  FUNC_4(&VAR_21->dev, "Failed to allocate memory\n");
  VAR_28 = -VAR_2;
  goto err_free_mem;
 }

 VAR_24->client = VAR_21;
 VAR_24->input_dev = VAR_25;

 if (VAR_22->driver_data == VAR_9) {
  VAR_24->chip.status_reg = VAR_12;
  VAR_24->chip.pressbit = VAR_13;
  VAR_24->chip.baseval = VAR_10;
  VAR_26 = VAR_11;
 } else {
  VAR_24->chip.status_reg = VAR_16;
  VAR_24->chip.pressbit = VAR_17;
  VAR_24->chip.press_invert = 1;
  VAR_24->chip.baseval = VAR_14;
  VAR_26 = VAR_15;
 }

 VAR_27 = FUNC_9(VAR_21, VAR_26);
 if (VAR_27 < 0) {
  VAR_28 = VAR_27;
  FUNC_4(&VAR_21->dev, "i2c read error[%d]\n", VAR_28);
  goto err_free_mem;
 }
 FUNC_6(&VAR_21->dev, "Firmware version: %d\n", VAR_27);

 VAR_25->name = "MELFAS MCS Touchkey";
 VAR_25->id.bustype = VAR_0;
 VAR_25->dev.parent = &VAR_21->dev;
 VAR_25->evbit[0] = FUNC_0(VAR_3);
 if (!VAR_23->no_autorepeat)
  VAR_25->evbit[0] |= FUNC_0(VAR_5);
 VAR_25->keycode = VAR_24->keycodes;
 VAR_25->keycodesize = sizeof(VAR_24->keycodes[0]);
 VAR_25->keycodemax = VAR_23->key_maxval + 1;

 for (VAR_29 = 0; VAR_29 < VAR_23->keymap_size; VAR_29++) {
  unsigned int VAR_30 = FUNC_2(VAR_23->keymap[VAR_29]);
  unsigned int VAR_31 = FUNC_1(VAR_23->keymap[VAR_29]);

  VAR_24->keycodes[VAR_30] = VAR_31;
  FUNC_3(VAR_31, VAR_25->keybit);
 }

 FUNC_13(VAR_25, VAR_4, VAR_18);
 FUNC_14(VAR_25, VAR_24);

 if (VAR_23->cfg_pin)
  VAR_23->cfg_pin();

 if (VAR_23->poweron) {
  VAR_24->poweron = VAR_23->poweron;
  VAR_24->poweron(1);
 }

 VAR_28 = FUNC_17(VAR_21->irq, ((void*)0), VAR_20,
         VAR_8 | VAR_7,
         VAR_21->dev.driver->name, VAR_24);
 if (VAR_28) {
  FUNC_4(&VAR_21->dev, "Failed to register interrupt\n");
  goto err_free_mem;
 }

 VAR_28 = FUNC_12(VAR_25);
 if (VAR_28)
  goto err_free_irq;

 FUNC_8(VAR_21, VAR_24);
 return 0;

err_free_irq:
 FUNC_7(VAR_21->irq, VAR_24);
err_free_mem:
 FUNC_11(VAR_25);
 FUNC_15(VAR_24);
 return VAR_28;
}
