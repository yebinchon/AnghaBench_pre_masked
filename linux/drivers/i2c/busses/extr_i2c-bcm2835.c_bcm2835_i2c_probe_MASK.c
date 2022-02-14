
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_11__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_10__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int quirks; TYPE_1__ dev; int * algo; int name; int class; int owner; } ;
struct clk {int dummy; } ;
struct bcm2835_i2c_dev {int irq; struct i2c_adapter adapter; struct clk* regs; int completion; TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct clk* FUNC_2 (TYPE_2__*,struct clk*,struct bcm2835_i2c_dev*) ;
 int FUNC_3 (struct bcm2835_i2c_dev*,int ,int ) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*,int) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 struct clk* FUNC_9 (TYPE_2__*,int *) ;
 struct clk* FUNC_10 (TYPE_2__*,struct resource*) ;
 struct bcm2835_i2c_dev* FUNC_11 (TYPE_2__*,int,int ) ;
 int FUNC_12 (int ,struct bcm2835_i2c_dev*) ;
 int FUNC_13 (struct i2c_adapter*) ;
 int FUNC_14 (struct i2c_adapter*,struct bcm2835_i2c_dev*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*) ;
 char* FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,int*) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct bcm2835_i2c_dev*) ;
 int FUNC_21 (int ,int ,int ,int ,struct bcm2835_i2c_dev*) ;
 int FUNC_22 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_12)
{
 struct bcm2835_i2c_dev *VAR_13;
 struct resource *VAR_14, *VAR_15;
 int VAR_16;
 struct i2c_adapter *VAR_17;
 struct clk *VAR_18;
 struct clk *VAR_19;
 u32 VAR_20;

 VAR_13 = FUNC_11(&VAR_12->dev, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_2;
 FUNC_20(VAR_12, VAR_13);
 VAR_13->dev = &VAR_12->dev;
 FUNC_15(&VAR_13->completion);

 VAR_14 = FUNC_19(VAR_12, VAR_7, 0);
 VAR_13->regs = FUNC_10(&VAR_12->dev, VAR_14);
 if (FUNC_0(VAR_13->regs))
  return FUNC_1(VAR_13->regs);

 VAR_19 = FUNC_9(&VAR_12->dev, ((void*)0));
 if (FUNC_0(VAR_19)) {
  if (FUNC_1(VAR_19) != -VAR_3)
   FUNC_6(&VAR_12->dev, "Could not get clock\n");
  return FUNC_1(VAR_19);
 }

 VAR_18 = FUNC_2(&VAR_12->dev, VAR_19, VAR_13);

 if (FUNC_0(VAR_18)) {
  FUNC_6(&VAR_12->dev, "Could not register clock\n");
  return FUNC_1(VAR_18);
 }

 VAR_16 = FUNC_18(VAR_12->dev.of_node, "clock-frequency",
       &VAR_20);
 if (VAR_16 < 0) {
  FUNC_8(&VAR_12->dev,
    "Could not read clock-frequency property\n");
  VAR_20 = 100000;
 }

 VAR_16 = FUNC_5(VAR_18, VAR_20);
 if (VAR_16 < 0) {
  FUNC_6(&VAR_12->dev, "Could not set clock frequency\n");
  return VAR_16;
 }

 VAR_16 = FUNC_4(VAR_18);
 if (VAR_16) {
  FUNC_6(&VAR_12->dev, "Couldn't prepare clock");
  return VAR_16;
 }

 VAR_15 = FUNC_19(VAR_12, VAR_6, 0);
 if (!VAR_15) {
  FUNC_6(&VAR_12->dev, "No IRQ resource\n");
  return -VAR_1;
 }
 VAR_13->irq = VAR_15->start;

 VAR_16 = FUNC_21(VAR_13->irq, VAR_11, VAR_8,
     FUNC_7(&VAR_12->dev), VAR_13);
 if (VAR_16) {
  FUNC_6(&VAR_12->dev, "Could not request IRQ\n");
  return -VAR_1;
 }

 VAR_17 = &VAR_13->adapter;
 FUNC_14(VAR_17, VAR_13);
 VAR_17->owner = VAR_9;
 VAR_17->class = VAR_5;
 FUNC_22(VAR_17->name, sizeof(VAR_17->name), "bcm2835 (%s)",
   FUNC_17(VAR_12->dev.of_node));
 VAR_17->algo = &VAR_10;
 VAR_17->dev.parent = &VAR_12->dev;
 VAR_17->dev.of_node = VAR_12->dev.of_node;
 VAR_17->quirks = FUNC_16(&VAR_12->dev);

 FUNC_3(VAR_13, VAR_0, 0);

 VAR_16 = FUNC_13(VAR_17);
 if (VAR_16)
  FUNC_12(VAR_13->irq, VAR_13);

 return VAR_16;
}
