
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {struct device_node* of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int timeout; TYPE_1__ dev; int * algo; scalar_t__ retries; int owner; int name; } ;
struct stm32f4_i2c_dev {struct reset_control* clk; TYPE_2__* dev; int complete; struct i2c_adapter adap; int speed; struct reset_control* base; } ;
struct resource {int start; } ;
struct reset_control {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (struct reset_control*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 struct reset_control* FUNC_7 (TYPE_2__*,int *) ;
 struct reset_control* FUNC_8 (TYPE_2__*,struct resource*) ;
 struct stm32f4_i2c_dev* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,struct stm32f4_i2c_dev*) ;
 struct reset_control* FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (struct i2c_adapter*) ;
 int FUNC_13 (struct i2c_adapter*,struct stm32f4_i2c_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct device_node*,int) ;
 int FUNC_16 (struct device_node*,char*,int*) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct stm32f4_i2c_dev*) ;
 int FUNC_19 (struct reset_control*) ;
 int FUNC_20 (struct reset_control*) ;
 int FUNC_21 (int ,int,char*,int *) ;
 int VAR_8 ;
 int FUNC_22 (struct stm32f4_i2c_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_11)
{
 struct device_node *VAR_12 = VAR_11->dev.of_node;
 struct stm32f4_i2c_dev *VAR_13;
 struct resource *VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 struct i2c_adapter *VAR_18;
 struct reset_control *VAR_19;
 int VAR_20;

 VAR_13 = FUNC_9(&VAR_11->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_17(VAR_11, VAR_4, 0);
 VAR_13->base = FUNC_8(&VAR_11->dev, VAR_14);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 VAR_15 = FUNC_15(VAR_12, 0);
 if (!VAR_15) {
  FUNC_5(&VAR_11->dev, "IRQ event missing or invalid\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_15(VAR_12, 1);
 if (!VAR_16) {
  FUNC_5(&VAR_11->dev, "IRQ error missing or invalid\n");
  return -VAR_0;
 }

 VAR_13->clk = FUNC_7(&VAR_11->dev, ((void*)0));
 if (FUNC_0(VAR_13->clk)) {
  FUNC_5(&VAR_11->dev, "Error: Missing controller clock\n");
  return FUNC_1(VAR_13->clk);
 }
 VAR_20 = FUNC_4(VAR_13->clk);
 if (VAR_20) {
  FUNC_5(VAR_13->dev, "Failed to prepare_enable clock\n");
  return VAR_20;
 }

 VAR_19 = FUNC_11(&VAR_11->dev, ((void*)0));
 if (FUNC_0(VAR_19)) {
  FUNC_5(&VAR_11->dev, "Error: Missing controller reset\n");
  VAR_20 = FUNC_1(VAR_19);
  goto clk_free;
 }
 FUNC_19(VAR_19);
 FUNC_23(2);
 FUNC_20(VAR_19);

 VAR_13->speed = VAR_6;
 VAR_20 = FUNC_16(VAR_12, "clock-frequency", &VAR_17);
 if (!VAR_20 && VAR_17 >= 400000)
  VAR_13->speed = VAR_5;

 VAR_13->dev = &VAR_11->dev;

 VAR_20 = FUNC_10(&VAR_11->dev, VAR_15, VAR_10, 0,
          VAR_11->name, VAR_13);
 if (VAR_20) {
  FUNC_5(&VAR_11->dev, "Failed to request irq event %i\n",
   VAR_15);
  goto clk_free;
 }

 VAR_20 = FUNC_10(&VAR_11->dev, VAR_16, VAR_9, 0,
          VAR_11->name, VAR_13);
 if (VAR_20) {
  FUNC_5(&VAR_11->dev, "Failed to request irq error %i\n",
   VAR_16);
  goto clk_free;
 }

 VAR_20 = FUNC_22(VAR_13);
 if (VAR_20)
  goto clk_free;

 VAR_18 = &VAR_13->adap;
 FUNC_13(VAR_18, VAR_13);
 FUNC_21(VAR_18->name, sizeof(VAR_18->name), "STM32 I2C(%pa)", &VAR_14->start);
 VAR_18->owner = VAR_7;
 VAR_18->timeout = 2 * VAR_3;
 VAR_18->retries = 0;
 VAR_18->algo = &VAR_8;
 VAR_18->dev.parent = &VAR_11->dev;
 VAR_18->dev.of_node = VAR_11->dev.of_node;

 FUNC_14(&VAR_13->complete);

 VAR_20 = FUNC_12(VAR_18);
 if (VAR_20)
  goto clk_free;

 FUNC_18(VAR_11, VAR_13);

 FUNC_2(VAR_13->clk);

 FUNC_6(VAR_13->dev, "STM32F4 I2C driver registered\n");

 return 0;

clk_free:
 FUNC_3(VAR_13->clk);
 return VAR_20;
}
