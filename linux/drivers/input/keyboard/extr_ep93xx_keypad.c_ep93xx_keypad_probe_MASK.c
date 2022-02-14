
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct matrix_keymap_data {int dummy; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int bustype; } ;
struct input_dev {int evbit; TYPE_2__ dev; int close; int open; TYPE_1__ id; int name; } ;
struct ep93xx_keypad {int * mmio_base; int clk; int irq; TYPE_3__* pdata; int keycodes; struct input_dev* input_dev; } ;
struct TYPE_6__ {int flags; struct matrix_keymap_data* keymap_data; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct platform_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int ,struct ep93xx_keypad*) ;
 struct input_dev* FUNC_10 () ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*) ;
 int FUNC_13 (struct input_dev*,struct ep93xx_keypad*) ;
 int * FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ep93xx_keypad*) ;
 struct ep93xx_keypad* FUNC_17 (int,int ) ;
 int FUNC_18 (struct matrix_keymap_data const*,int *,int ,int ,int ,struct input_dev*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct ep93xx_keypad*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ,int ,int ,struct ep93xx_keypad*) ;
 struct resource* FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (struct resource*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_14)
{
 struct ep93xx_keypad *VAR_15;
 const struct matrix_keymap_data *VAR_16;
 struct input_dev *VAR_17;
 struct resource *VAR_18;
 int VAR_19;

 VAR_15 = FUNC_17(sizeof(struct ep93xx_keypad), VAR_9);
 if (!VAR_15)
  return -VAR_3;

 VAR_15->pdata = FUNC_5(&VAR_14->dev);
 if (!VAR_15->pdata) {
  VAR_19 = -VAR_2;
  goto failed_free;
 }

 VAR_16 = VAR_15->pdata->keymap_data;
 if (!VAR_16) {
  VAR_19 = -VAR_2;
  goto failed_free;
 }

 VAR_15->irq = FUNC_19(VAR_14, 0);
 if (!VAR_15->irq) {
  VAR_19 = -VAR_4;
  goto failed_free;
 }

 VAR_18 = FUNC_20(VAR_14, VAR_10, 0);
 if (!VAR_18) {
  VAR_19 = -VAR_4;
  goto failed_free;
 }

 VAR_18 = FUNC_24(VAR_18->start, FUNC_25(VAR_18), VAR_14->name);
 if (!VAR_18) {
  VAR_19 = -VAR_1;
  goto failed_free;
 }

 VAR_15->mmio_base = FUNC_14(VAR_18->start, FUNC_25(VAR_18));
 if (VAR_15->mmio_base == ((void*)0)) {
  VAR_19 = -VAR_4;
  goto failed_free_mem;
 }

 VAR_19 = FUNC_7(VAR_14);
 if (VAR_19)
  goto failed_free_io;

 VAR_15->clk = FUNC_3(&VAR_14->dev, ((void*)0));
 if (FUNC_0(VAR_15->clk)) {
  VAR_19 = FUNC_1(VAR_15->clk);
  goto failed_free_gpio;
 }

 VAR_17 = FUNC_10();
 if (!VAR_17) {
  VAR_19 = -VAR_3;
  goto failed_put_clk;
 }

 VAR_15->input_dev = VAR_17;

 VAR_17->name = VAR_14->name;
 VAR_17->id.bustype = VAR_0;
 VAR_17->open = VAR_13;
 VAR_17->close = VAR_11;
 VAR_17->dev.parent = &VAR_14->dev;

 VAR_19 = FUNC_18(VAR_16, ((void*)0),
      VAR_7, VAR_6,
      VAR_15->keycodes, VAR_17);
 if (VAR_19)
  goto failed_free_dev;

 if (VAR_15->pdata->flags & VAR_5)
  FUNC_2(VAR_8, VAR_17->evbit);
 FUNC_13(VAR_17, VAR_15);

 VAR_19 = FUNC_23(VAR_15->irq, VAR_12,
     0, VAR_14->name, VAR_15);
 if (VAR_19)
  goto failed_free_dev;

 VAR_19 = FUNC_12(VAR_17);
 if (VAR_19)
  goto failed_free_irq;

 FUNC_21(VAR_14, VAR_15);
 FUNC_6(&VAR_14->dev, 1);

 return 0;

failed_free_irq:
 FUNC_9(VAR_15->irq, VAR_15);
failed_free_dev:
 FUNC_11(VAR_17);
failed_put_clk:
 FUNC_4(VAR_15->clk);
failed_free_gpio:
 FUNC_8(VAR_14);
failed_free_io:
 FUNC_15(VAR_15->mmio_base);
failed_free_mem:
 FUNC_22(VAR_18->start, FUNC_25(VAR_18));
failed_free:
 FUNC_16(VAR_15);
 return VAR_19;
}
