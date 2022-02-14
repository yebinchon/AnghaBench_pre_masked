
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct nspire_keypad {scalar_t__ active_low; int scan_interval; int row_delay; struct input_dev* input; int reg_base; int clk; int row_shift; } ;
struct TYPE_9__ {int bustype; } ;
struct input_dev {char* name; int evbit; int close; int open; TYPE_1__ id; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,char*,struct resource*,int ,int ,char*) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 struct input_dev* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct resource*) ;
 struct nspire_keypad* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,int,int ,int ,char*,struct nspire_keypad*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct input_dev*) ;
 int FUNC_12 (struct input_dev*,int ,int ) ;
 int FUNC_13 (struct input_dev*,struct nspire_keypad*) ;
 int FUNC_14 (int *,int *,int ,int ,int *,struct input_dev*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (struct device_node const*,char*) ;
 int FUNC_16 (struct device_node const*,char*,int *) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_14)
{
 const struct device_node *VAR_15 = VAR_14->dev.of_node;
 struct nspire_keypad *VAR_16;
 struct input_dev *VAR_17;
 struct resource *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_19 = FUNC_17(VAR_14, 0);
 if (VAR_19 < 0)
  return -VAR_1;

 VAR_16 = FUNC_8(&VAR_14->dev, sizeof(struct nspire_keypad),
         VAR_6);
 if (!VAR_16) {
  FUNC_4(&VAR_14->dev, "failed to allocate keypad memory\n");
  return -VAR_2;
 }

 VAR_16->row_shift = FUNC_10(VAR_8);

 VAR_20 = FUNC_16(VAR_15, "scan-interval",
         &VAR_16->scan_interval);
 if (VAR_20) {
  FUNC_4(&VAR_14->dev, "failed to get scan-interval\n");
  return VAR_20;
 }

 VAR_20 = FUNC_16(VAR_15, "row-delay",
         &VAR_16->row_delay);
 if (VAR_20) {
  FUNC_4(&VAR_14->dev, "failed to get row-delay\n");
  return VAR_20;
 }

 VAR_16->active_low = FUNC_15(VAR_15, "active-low");

 VAR_16->clk = FUNC_5(&VAR_14->dev, ((void*)0));
 if (FUNC_0(VAR_16->clk)) {
  FUNC_4(&VAR_14->dev, "unable to get clock\n");
  return FUNC_1(VAR_16->clk);
 }

 VAR_18 = FUNC_18(VAR_14, VAR_7, 0);
 VAR_16->reg_base = FUNC_7(&VAR_14->dev, VAR_18);
 if (FUNC_0(VAR_16->reg_base))
  return FUNC_1(VAR_16->reg_base);

 VAR_16->input = VAR_17 = FUNC_6(&VAR_14->dev);
 if (!VAR_17) {
  FUNC_4(&VAR_14->dev, "failed to allocate input device\n");
  return -VAR_2;
 }

 FUNC_13(VAR_17, VAR_16);

 VAR_17->id.bustype = VAR_0;
 VAR_17->name = "nspire-keypad";
 VAR_17->open = VAR_13;
 VAR_17->close = VAR_11;

 FUNC_2(VAR_3, VAR_17->evbit);
 FUNC_2(VAR_5, VAR_17->evbit);
 FUNC_12(VAR_17, VAR_4, VAR_10);

 VAR_20 = FUNC_14(((void*)0), ((void*)0),
        VAR_9,
        VAR_8,
        ((void*)0), VAR_17);
 if (VAR_20) {
  FUNC_4(&VAR_14->dev, "building keymap failed\n");
  return VAR_20;
 }

 VAR_20 = FUNC_9(&VAR_14->dev, VAR_19, VAR_12, 0,
     "nspire_keypad", VAR_16);
 if (VAR_20) {
  FUNC_4(&VAR_14->dev, "allocate irq %d failed\n", VAR_19);
  return VAR_20;
 }

 VAR_20 = FUNC_11(VAR_17);
 if (VAR_20) {
  FUNC_4(&VAR_14->dev,
   "unable to register input device: %d\n", VAR_20);
  return VAR_20;
 }

 FUNC_3(&VAR_14->dev,
  "TI-NSPIRE keypad at %pR (scan_interval=%uus, row_delay=%uus%s)\n",
  VAR_18, VAR_16->row_delay, VAR_16->scan_interval,
  VAR_16->active_low ? ", active_low" : "");

 return 0;
}
