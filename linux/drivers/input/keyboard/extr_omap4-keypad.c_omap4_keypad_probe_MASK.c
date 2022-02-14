
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct omap4_keypad {int irq; int reg_offset; int irqreg_offset; unsigned int row_shift; unsigned int rows; scalar_t__ base; struct omap4_keypad* keymap; struct input_dev* input; int cols; int no_autorepeat; } ;
struct TYPE_4__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_3__ {int * parent; } ;
struct input_dev {int evbit; int close; int open; TYPE_2__ id; TYPE_1__ dev; int name; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,struct omap4_keypad*) ;
 unsigned int FUNC_5 (int ) ;
 struct input_dev* FUNC_6 () ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ,int ) ;
 int FUNC_10 (struct input_dev*,struct omap4_keypad*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (scalar_t__) ;
 struct omap4_keypad* FUNC_13 (unsigned int,int,int ) ;
 int FUNC_14 (struct omap4_keypad*) ;
 struct omap4_keypad* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int *,unsigned int,int ,struct omap4_keypad*,struct input_dev*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (int *,struct omap4_keypad*) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct omap4_keypad*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int ) ;
 struct resource* FUNC_26 (int ,int ,int ) ;
 int FUNC_27 (int,int ,int ,int ,char*,struct omap4_keypad*) ;
 int FUNC_28 (struct resource*) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_15)
{
 struct omap4_keypad *VAR_16;
 struct input_dev *VAR_17;
 struct resource *VAR_18;
 unsigned int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_18 = FUNC_19(VAR_15, VAR_7, 0);
 if (!VAR_18) {
  FUNC_2(&VAR_15->dev, "no base address specified\n");
  return -VAR_2;
 }

 VAR_21 = FUNC_18(VAR_15, 0);
 if (!VAR_21) {
  FUNC_2(&VAR_15->dev, "no keyboard irq assigned\n");
  return -VAR_2;
 }

 VAR_16 = FUNC_15(sizeof(struct omap4_keypad), VAR_6);
 if (!VAR_16) {
  FUNC_2(&VAR_15->dev, "keypad_data memory allocation failed\n");
  return -VAR_3;
 }

 VAR_16->irq = VAR_21;

 VAR_22 = FUNC_17(&VAR_15->dev, VAR_16);
 if (VAR_22)
  goto err_free_keypad;

 VAR_18 = FUNC_26(VAR_18->start, FUNC_28(VAR_18), VAR_15->name);
 if (!VAR_18) {
  FUNC_2(&VAR_15->dev, "can't request mem region\n");
  VAR_22 = -VAR_1;
  goto err_free_keypad;
 }

 VAR_16->base = FUNC_11(VAR_18->start, FUNC_28(VAR_18));
 if (!VAR_16->base) {
  FUNC_2(&VAR_15->dev, "can't ioremap mem resource\n");
  VAR_22 = -VAR_3;
  goto err_release_mem;
 }






 FUNC_22(&VAR_15->dev);
 VAR_22 = FUNC_23(&VAR_15->dev);
 if (VAR_22) {
  FUNC_2(&VAR_15->dev, "pm_runtime_get_sync() failed\n");
  goto err_unmap;
 }
 VAR_20 = FUNC_0(VAR_16->base + VAR_10);
 VAR_20 &= 0x03 << 30;
 VAR_20 >>= 30;
 switch (VAR_20) {
 case 129:
  VAR_16->reg_offset = 0x00;
  VAR_16->irqreg_offset = 0x00;
  break;
 case 128:
  VAR_16->reg_offset = 0x10;
  VAR_16->irqreg_offset = 0x0c;
  break;
 default:
  FUNC_2(&VAR_15->dev,
   "Keypad reports unsupported revision %d", VAR_20);
  VAR_22 = -VAR_2;
  goto err_pm_put_sync;
 }


 VAR_16->input = VAR_17 = FUNC_6();
 if (!VAR_17) {
  VAR_22 = -VAR_3;
  goto err_pm_put_sync;
 }

 VAR_17->name = VAR_15->name;
 VAR_17->dev.parent = &VAR_15->dev;
 VAR_17->id.bustype = VAR_0;
 VAR_17->id.vendor = 0x0001;
 VAR_17->id.product = 0x0001;
 VAR_17->id.version = 0x0001;

 VAR_17->open = VAR_14;
 VAR_17->close = VAR_11;

 FUNC_9(VAR_17, VAR_4, VAR_9);
 if (!VAR_16->no_autorepeat)
  FUNC_1(VAR_5, VAR_17->evbit);

 FUNC_10(VAR_17, VAR_16);

 VAR_16->row_shift = FUNC_5(VAR_16->cols);
 VAR_19 = VAR_16->rows << VAR_16->row_shift;
 VAR_16->keymap = FUNC_13(VAR_19,
          sizeof(VAR_16->keymap[0]),
          VAR_6);
 if (!VAR_16->keymap) {
  FUNC_2(&VAR_15->dev, "Not enough memory for keymap\n");
  VAR_22 = -VAR_3;
  goto err_free_input;
 }

 VAR_22 = FUNC_16(((void*)0), ((void*)0),
        VAR_16->rows, VAR_16->cols,
        VAR_16->keymap, VAR_17);
 if (VAR_22) {
  FUNC_2(&VAR_15->dev, "failed to build keymap\n");
  goto err_free_keymap;
 }

 VAR_22 = FUNC_27(VAR_16->irq, VAR_12,
         VAR_13, VAR_8,
         "omap4-keypad", VAR_16);
 if (VAR_22) {
  FUNC_2(&VAR_15->dev, "failed to register interrupt\n");
  goto err_free_keymap;
 }

 FUNC_3(&VAR_15->dev, 1);
 FUNC_24(&VAR_15->dev);

 VAR_22 = FUNC_8(VAR_16->input);
 if (VAR_22 < 0) {
  FUNC_2(&VAR_15->dev, "failed to register input device\n");
  goto err_pm_disable;
 }

 FUNC_20(VAR_15, VAR_16);
 return 0;

err_pm_disable:
 FUNC_21(&VAR_15->dev);
 FUNC_4(VAR_16->irq, VAR_16);
err_free_keymap:
 FUNC_14(VAR_16->keymap);
err_free_input:
 FUNC_7(VAR_17);
err_pm_put_sync:
 FUNC_24(&VAR_15->dev);
err_unmap:
 FUNC_12(VAR_16->base);
err_release_mem:
 FUNC_25(VAR_18->start, FUNC_28(VAR_18));
err_free_keypad:
 FUNC_14(VAR_16);
 return VAR_22;
}
