
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spear_kbd {int irq; int clk; scalar_t__ rep; int keycodes; int io_base; int suspended_rate; int mode; struct input_dev* input; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct matrix_keymap_data {int dummy; } ;
struct kbd_platform_data {int suspended_rate; scalar_t__ rep; int mode; struct matrix_keymap_data* keymap; } ;
struct TYPE_2__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {char* name; char* phys; int evbit; int close; int open; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 struct kbd_platform_data* FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *) ;
 struct input_dev* FUNC_9 (int *) ;
 int FUNC_10 (int *,struct resource*) ;
 struct spear_kbd* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int,int ,int ,char*,struct spear_kbd*) ;
 int FUNC_13 (struct input_dev*) ;
 int FUNC_14 (struct input_dev*,int ,int ) ;
 int FUNC_15 (struct input_dev*,struct spear_kbd*) ;
 int FUNC_16 (struct matrix_keymap_data const*,int *,int ,int ,int ,struct input_dev*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct spear_kbd*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_20 (struct platform_device*,struct spear_kbd*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_12)
{
 struct kbd_platform_data *VAR_13 = FUNC_6(&VAR_12->dev);
 const struct matrix_keymap_data *VAR_14 = VAR_13 ? VAR_13->keymap : ((void*)0);
 struct spear_kbd *VAR_15;
 struct input_dev *VAR_16;
 struct resource *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = FUNC_17(VAR_12, 0);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_15 = FUNC_11(&VAR_12->dev, sizeof(*VAR_15), VAR_4);
 if (!VAR_15) {
  FUNC_5(&VAR_12->dev, "not enough memory for driver data\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_9(&VAR_12->dev);
 if (!VAR_16) {
  FUNC_5(&VAR_12->dev, "unable to allocate input device\n");
  return -VAR_1;
 }

 VAR_15->input = VAR_16;
 VAR_15->irq = VAR_18;

 if (!VAR_13) {
  VAR_19 = FUNC_20(VAR_12, VAR_15);
  if (VAR_19)
   return VAR_19;
 } else {
  VAR_15->mode = VAR_13->mode;
  VAR_15->rep = VAR_13->rep;
  VAR_15->suspended_rate = VAR_13->suspended_rate;
 }

 VAR_17 = FUNC_18(VAR_12, VAR_5, 0);
 VAR_15->io_base = FUNC_10(&VAR_12->dev, VAR_17);
 if (FUNC_0(VAR_15->io_base))
  return FUNC_1(VAR_15->io_base);

 VAR_15->clk = FUNC_8(&VAR_12->dev, ((void*)0));
 if (FUNC_0(VAR_15->clk))
  return FUNC_1(VAR_15->clk);

 VAR_16->name = "Spear Keyboard";
 VAR_16->phys = "keyboard/input0";
 VAR_16->id.bustype = VAR_0;
 VAR_16->id.vendor = 0x0001;
 VAR_16->id.product = 0x0001;
 VAR_16->id.version = 0x0100;
 VAR_16->open = VAR_11;
 VAR_16->close = VAR_9;

 VAR_19 = FUNC_16(VAR_14, ((void*)0), VAR_8, VAR_7,
        VAR_15->keycodes, VAR_16);
 if (VAR_19) {
  FUNC_5(&VAR_12->dev, "Failed to build keymap\n");
  return VAR_19;
 }

 if (VAR_15->rep)
  FUNC_2(VAR_3, VAR_16->evbit);
 FUNC_14(VAR_16, VAR_2, VAR_6);

 FUNC_15(VAR_16, VAR_15);

 VAR_19 = FUNC_12(&VAR_12->dev, VAR_18, VAR_10, 0,
   "keyboard", VAR_15);
 if (VAR_19) {
  FUNC_5(&VAR_12->dev, "request_irq failed\n");
  return VAR_19;
 }

 VAR_19 = FUNC_3(VAR_15->clk);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_13(VAR_16);
 if (VAR_19) {
  FUNC_5(&VAR_12->dev, "Unable to register keyboard device\n");
  FUNC_4(VAR_15->clk);
  return VAR_19;
 }

 FUNC_7(&VAR_12->dev, 1);
 FUNC_19(VAR_12, VAR_15);

 return 0;
}
