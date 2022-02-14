
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_11__ {int vendor; int product; unsigned int version; int bustype; } ;
struct TYPE_10__ {TYPE_5__* parent; } ;
struct input_dev {char* phys; int keycodesize; int keycodemax; scalar_t__* keycode; int swbit; int evbit; int keybit; TYPE_3__ id; TYPE_2__ dev; int name; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_13__ {TYPE_1__* driver; } ;
struct i2c_client {int irq; TYPE_5__ dev; int name; int adapter; } ;
struct adp5588_kpad_platform_data {unsigned short rows; unsigned short cols; int keymapsize; int gpimapsize; scalar_t__ repeat; TYPE_4__* gpimap; int keymap; } ;
struct adp5588_kpad {scalar_t__* keycode; int gpimapsize; int work; TYPE_4__* gpimap; int delay; struct input_dev* input; struct i2c_client* client; } ;
struct TYPE_12__ {unsigned short pin; scalar_t__ sw_evt; } ;
struct TYPE_9__ {int name; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct adp5588_kpad*) ;
 int VAR_21 ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct adp5588_kpad*) ;
 int FUNC_7 (struct i2c_client*) ;
 int VAR_22 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_5__*,char*,...) ;
 struct adp5588_kpad_platform_data* FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,char*,unsigned int,int ) ;
 int FUNC_12 (TYPE_5__*,int) ;
 int FUNC_13 (int ,struct adp5588_kpad*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct i2c_client*,struct adp5588_kpad*) ;
 struct input_dev* FUNC_16 () ;
 int FUNC_17 (struct input_dev*) ;
 int FUNC_18 (struct input_dev*) ;
 int FUNC_19 (struct input_dev*,struct adp5588_kpad*) ;
 int FUNC_20 (struct input_dev*) ;
 int FUNC_21 (struct adp5588_kpad*) ;
 struct adp5588_kpad* FUNC_22 (int,int ) ;
 int FUNC_23 (scalar_t__*,int ,int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int ,int ,int ,int ,struct adp5588_kpad*) ;

__attribute__((used)) static int FUNC_26(struct i2c_client *VAR_23,
    const struct i2c_device_id *VAR_24)
{
 struct adp5588_kpad *VAR_25;
 const struct adp5588_kpad_platform_data *VAR_26 =
   FUNC_10(&VAR_23->dev);
 struct input_dev *VAR_27;
 unsigned int VAR_28;
 int VAR_29, VAR_30;
 int VAR_31;

 if (!FUNC_14(VAR_23->adapter,
     VAR_17)) {
  FUNC_9(&VAR_23->dev, "SMBUS Byte Data not Supported\n");
  return -VAR_6;
 }

 if (!VAR_26) {
  FUNC_9(&VAR_23->dev, "no platform data?\n");
  return -VAR_5;
 }

 if (!VAR_26->rows || !VAR_26->cols || !VAR_26->keymap) {
  FUNC_9(&VAR_23->dev, "no rows, cols or keymap from pdata\n");
  return -VAR_5;
 }

 if (VAR_26->keymapsize != VAR_2) {
  FUNC_9(&VAR_23->dev, "invalid keymapsize\n");
  return -VAR_5;
 }

 if (!VAR_26->gpimap && VAR_26->gpimapsize) {
  FUNC_9(&VAR_23->dev, "invalid gpimap from pdata\n");
  return -VAR_5;
 }

 if (VAR_26->gpimapsize > VAR_1) {
  FUNC_9(&VAR_23->dev, "invalid gpimapsize\n");
  return -VAR_5;
 }

 for (VAR_30 = 0; VAR_30 < VAR_26->gpimapsize; VAR_30++) {
  unsigned short VAR_32 = VAR_26->gpimap[VAR_30].pin;

  if (VAR_32 < VAR_12 || VAR_32 > VAR_14) {
   FUNC_9(&VAR_23->dev, "invalid gpi pin data\n");
   return -VAR_5;
  }

  if (VAR_32 <= VAR_16) {
   if (VAR_32 - VAR_15 + 1 <= VAR_26->rows) {
    FUNC_9(&VAR_23->dev, "invalid gpi row data\n");
    return -VAR_5;
   }
  } else {
   if (VAR_32 - VAR_13 + 1 <= VAR_26->cols) {
    FUNC_9(&VAR_23->dev, "invalid gpi col data\n");
    return -VAR_5;
   }
  }
 }

 if (!VAR_23->irq) {
  FUNC_9(&VAR_23->dev, "no IRQ?\n");
  return -VAR_5;
 }

 VAR_25 = FUNC_22(sizeof(*VAR_25), VAR_11);
 VAR_27 = FUNC_16();
 if (!VAR_25 || !VAR_27) {
  VAR_31 = -VAR_7;
  goto err_free_mem;
 }

 VAR_25->client = VAR_23;
 VAR_25->input = VAR_27;
 FUNC_0(&VAR_25->work, VAR_22);

 VAR_29 = FUNC_5(VAR_23, VAR_4);
 if (VAR_29 < 0) {
  VAR_31 = VAR_29;
  goto err_free_mem;
 }

 VAR_28 = (u8) VAR_29 & VAR_0;
 if (FUNC_1(VAR_28))
  VAR_25->delay = FUNC_24(30);

 VAR_27->name = VAR_23->name;
 VAR_27->phys = "adp5588-keys/input0";
 VAR_27->dev.parent = &VAR_23->dev;

 FUNC_19(VAR_27, VAR_25);

 VAR_27->id.bustype = VAR_3;
 VAR_27->id.vendor = 0x0001;
 VAR_27->id.product = 0x0001;
 VAR_27->id.version = VAR_28;

 VAR_27->keycodesize = sizeof(VAR_25->keycode[0]);
 VAR_27->keycodemax = VAR_26->keymapsize;
 VAR_27->keycode = VAR_25->keycode;

 FUNC_23(VAR_25->keycode, VAR_26->keymap,
  VAR_26->keymapsize * VAR_27->keycodesize);

 VAR_25->gpimap = VAR_26->gpimap;
 VAR_25->gpimapsize = VAR_26->gpimapsize;


 FUNC_3(VAR_8, VAR_27->evbit);

 if (VAR_26->repeat)
  FUNC_3(VAR_9, VAR_27->evbit);

 for (VAR_30 = 0; VAR_30 < VAR_27->keycodemax; VAR_30++)
  if (VAR_25->keycode[VAR_30] <= VAR_19)
   FUNC_3(VAR_25->keycode[VAR_30], VAR_27->keybit);
 FUNC_2(VAR_20, VAR_27->keybit);

 if (VAR_25->gpimapsize)
  FUNC_3(VAR_10, VAR_27->evbit);
 for (VAR_30 = 0; VAR_30 < VAR_25->gpimapsize; VAR_30++)
  FUNC_3(VAR_25->gpimap[VAR_30].sw_evt, VAR_27->swbit);

 VAR_31 = FUNC_18(VAR_27);
 if (VAR_31) {
  FUNC_9(&VAR_23->dev, "unable to register input device\n");
  goto err_free_mem;
 }

 VAR_31 = FUNC_25(VAR_23->irq, VAR_21,
       VAR_18,
       VAR_23->dev.driver->name, VAR_25);
 if (VAR_31) {
  FUNC_9(&VAR_23->dev, "irq %d busy?\n", VAR_23->irq);
  goto err_unreg_dev;
 }

 VAR_31 = FUNC_7(VAR_23);
 if (VAR_31)
  goto err_free_irq;

 if (VAR_25->gpimapsize)
  FUNC_6(VAR_25);

 VAR_31 = FUNC_4(VAR_25);
 if (VAR_31)
  goto err_free_irq;

 FUNC_12(&VAR_23->dev, 1);
 FUNC_15(VAR_23, VAR_25);

 FUNC_11(&VAR_23->dev, "Rev.%d keypad, irq %d\n", VAR_28, VAR_23->irq);
 return 0;

 err_free_irq:
 FUNC_13(VAR_23->irq, VAR_25);
 FUNC_8(&VAR_25->work);
 err_unreg_dev:
 FUNC_20(VAR_27);
 VAR_27 = ((void*)0);
 err_free_mem:
 FUNC_17(VAR_27);
 FUNC_21(VAR_25);

 return VAR_31;
}
