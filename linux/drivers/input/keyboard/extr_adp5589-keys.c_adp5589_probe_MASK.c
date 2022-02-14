
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_14__ {int vendor; int product; unsigned int version; int bustype; } ;
struct TYPE_13__ {TYPE_5__* parent; } ;
struct input_dev {char* phys; int keycodesize; int keycodemax; scalar_t__* keycode; int swbit; int evbit; int keybit; TYPE_4__ id; TYPE_3__ dev; int name; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_15__ {TYPE_1__* driver; } ;
struct i2c_client {int irq; TYPE_5__ dev; int name; int adapter; } ;
struct adp5589_kpad_platform_data {int keypad_en_mask; int keymapsize; int gpimapsize; scalar_t__ repeat; TYPE_2__* gpimap; int keymap; } ;
struct adp5589_kpad {int support_row5; int is_adp5585; scalar_t__* keycode; int gpimapsize; TYPE_2__* gpimap; struct input_dev* input; struct i2c_client* client; TYPE_9__* var; } ;
struct TYPE_16__ {int row_mask; int col_shift; int keymapsize; int gpimapsize_max; unsigned short gpi_pin_base; unsigned short gpi_pin_end; unsigned short gpi_pin_row_base; } ;
struct TYPE_12__ {unsigned short pin; scalar_t__ sw_evt; } ;
struct TYPE_11__ {int name; } ;





 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct adp5589_kpad*) ;
 int VAR_15 ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct adp5589_kpad*) ;
 int FUNC_5 (struct adp5589_kpad*) ;
 TYPE_9__ VAR_16 ;
 TYPE_9__ VAR_17 ;
 int FUNC_6 (TYPE_5__*,char*,...) ;
 struct adp5589_kpad_platform_data* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,char*,unsigned int,int ) ;
 int FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (int ,struct adp5589_kpad*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct i2c_client*,struct adp5589_kpad*) ;
 struct input_dev* FUNC_13 () ;
 int FUNC_14 (struct input_dev*) ;
 int FUNC_15 (struct input_dev*) ;
 int FUNC_16 (struct input_dev*,struct adp5589_kpad*) ;
 int FUNC_17 (struct input_dev*) ;
 int FUNC_18 (struct adp5589_kpad*) ;
 struct adp5589_kpad* FUNC_19 (int,int ) ;
 int FUNC_20 (scalar_t__*,int ,int) ;
 int FUNC_21 (int ,int *,int ,int,int ,struct adp5589_kpad*) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_18,
    const struct i2c_device_id *VAR_19)
{
 struct adp5589_kpad *VAR_20;
 const struct adp5589_kpad_platform_data *VAR_21 =
  FUNC_7(&VAR_18->dev);
 struct input_dev *VAR_22;
 unsigned int VAR_23;
 int VAR_24, VAR_25;
 int VAR_26;

 if (!FUNC_11(VAR_18->adapter,
         VAR_10)) {
  FUNC_6(&VAR_18->dev, "SMBUS Byte Data not Supported\n");
  return -VAR_4;
 }

 if (!VAR_21) {
  FUNC_6(&VAR_18->dev, "no platform data?\n");
  return -VAR_3;
 }

 VAR_20 = FUNC_19(sizeof(*VAR_20), VAR_9);
 if (!VAR_20)
  return -VAR_5;

 switch (VAR_19->driver_data) {
 case 129:
  VAR_20->support_row5 = 1;

 case 130:
  VAR_20->is_adp5585 = 1;
  VAR_20->var = &VAR_16;
  break;
 case 128:
  VAR_20->support_row5 = 1;
  VAR_20->var = &VAR_17;
  break;
 }

 if (!((VAR_21->keypad_en_mask & VAR_20->var->row_mask) &&
   (VAR_21->keypad_en_mask >> VAR_20->var->col_shift)) ||
   !VAR_21->keymap) {
  FUNC_6(&VAR_18->dev, "no rows, cols or keymap from pdata\n");
  VAR_26 = -VAR_3;
  goto err_free_mem;
 }

 if (VAR_21->keymapsize != VAR_20->var->keymapsize) {
  FUNC_6(&VAR_18->dev, "invalid keymapsize\n");
  VAR_26 = -VAR_3;
  goto err_free_mem;
 }

 if (!VAR_21->gpimap && VAR_21->gpimapsize) {
  FUNC_6(&VAR_18->dev, "invalid gpimap from pdata\n");
  VAR_26 = -VAR_3;
  goto err_free_mem;
 }

 if (VAR_21->gpimapsize > VAR_20->var->gpimapsize_max) {
  FUNC_6(&VAR_18->dev, "invalid gpimapsize\n");
  VAR_26 = -VAR_3;
  goto err_free_mem;
 }

 for (VAR_25 = 0; VAR_25 < VAR_21->gpimapsize; VAR_25++) {
  unsigned short VAR_27 = VAR_21->gpimap[VAR_25].pin;

  if (VAR_27 < VAR_20->var->gpi_pin_base ||
    VAR_27 > VAR_20->var->gpi_pin_end) {
   FUNC_6(&VAR_18->dev, "invalid gpi pin data\n");
   VAR_26 = -VAR_3;
   goto err_free_mem;
  }

  if ((1 << (VAR_27 - VAR_20->var->gpi_pin_row_base)) &
    VAR_21->keypad_en_mask) {
   FUNC_6(&VAR_18->dev, "invalid gpi row/col data\n");
   VAR_26 = -VAR_3;
   goto err_free_mem;
  }
 }

 if (!VAR_18->irq) {
  FUNC_6(&VAR_18->dev, "no IRQ?\n");
  VAR_26 = -VAR_3;
  goto err_free_mem;
 }

 VAR_22 = FUNC_13();
 if (!VAR_22) {
  VAR_26 = -VAR_5;
  goto err_free_mem;
 }

 VAR_20->client = VAR_18;
 VAR_20->input = VAR_22;

 VAR_24 = FUNC_3(VAR_18, VAR_1);
 if (VAR_24 < 0) {
  VAR_26 = VAR_24;
  goto err_free_input;
 }

 VAR_23 = (u8) VAR_24 & VAR_0;

 VAR_22->name = VAR_18->name;
 VAR_22->phys = "adp5589-keys/input0";
 VAR_22->dev.parent = &VAR_18->dev;

 FUNC_16(VAR_22, VAR_20);

 VAR_22->id.bustype = VAR_2;
 VAR_22->id.vendor = 0x0001;
 VAR_22->id.product = 0x0001;
 VAR_22->id.version = VAR_23;

 VAR_22->keycodesize = sizeof(VAR_20->keycode[0]);
 VAR_22->keycodemax = VAR_21->keymapsize;
 VAR_22->keycode = VAR_20->keycode;

 FUNC_20(VAR_20->keycode, VAR_21->keymap,
        VAR_21->keymapsize * VAR_22->keycodesize);

 VAR_20->gpimap = VAR_21->gpimap;
 VAR_20->gpimapsize = VAR_21->gpimapsize;


 FUNC_1(VAR_6, VAR_22->evbit);

 if (VAR_21->repeat)
  FUNC_1(VAR_7, VAR_22->evbit);

 for (VAR_25 = 0; VAR_25 < VAR_22->keycodemax; VAR_25++)
  if (VAR_20->keycode[VAR_25] <= VAR_13)
   FUNC_1(VAR_20->keycode[VAR_25], VAR_22->keybit);
 FUNC_0(VAR_14, VAR_22->keybit);

 if (VAR_20->gpimapsize)
  FUNC_1(VAR_8, VAR_22->evbit);
 for (VAR_25 = 0; VAR_25 < VAR_20->gpimapsize; VAR_25++)
  FUNC_1(VAR_20->gpimap[VAR_25].sw_evt, VAR_22->swbit);

 VAR_26 = FUNC_15(VAR_22);
 if (VAR_26) {
  FUNC_6(&VAR_18->dev, "unable to register input device\n");
  goto err_free_input;
 }

 VAR_26 = FUNC_21(VAR_18->irq, ((void*)0), VAR_15,
         VAR_12 | VAR_11,
         VAR_18->dev.driver->name, VAR_20);
 if (VAR_26) {
  FUNC_6(&VAR_18->dev, "irq %d busy?\n", VAR_18->irq);
  goto err_unreg_dev;
 }

 VAR_26 = FUNC_5(VAR_20);
 if (VAR_26)
  goto err_free_irq;

 if (VAR_20->gpimapsize)
  FUNC_4(VAR_20);

 VAR_26 = FUNC_2(VAR_20);
 if (VAR_26)
  goto err_free_irq;

 FUNC_9(&VAR_18->dev, 1);
 FUNC_12(VAR_18, VAR_20);

 FUNC_8(&VAR_18->dev, "Rev.%d keypad, irq %d\n", VAR_23, VAR_18->irq);
 return 0;

err_free_irq:
 FUNC_10(VAR_18->irq, VAR_20);
err_unreg_dev:
 FUNC_17(VAR_22);
 VAR_22 = ((void*)0);
err_free_input:
 FUNC_14(VAR_22);
err_free_mem:
 FUNC_18(VAR_20);

 return VAR_26;
}
