
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int u32 ;
struct stm32f7_i2c_setup {int rise_time; int fall_time; } ;
struct TYPE_24__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int timeout; int retries; int nr; TYPE_1__ dev; int * algo; int owner; int name; } ;
struct stm32f7_i2c_dev {struct reset_control* clk; TYPE_2__* dev; int dma; int complete; struct i2c_adapter adap; struct stm32f7_i2c_setup setup; void* speed; struct reset_control* base; } ;
struct resource {scalar_t__ start; } ;
struct reset_control {int dummy; } ;
struct TYPE_25__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (TYPE_2__*,char*,int*) ;
 struct reset_control* FUNC_7 (TYPE_2__*,int *) ;
 struct reset_control* FUNC_8 (TYPE_2__*,struct resource*) ;
 struct stm32f7_i2c_dev* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,struct stm32f7_i2c_dev*) ;
 int FUNC_11 (TYPE_2__*,int,int ,int ,int ,int ,struct stm32f7_i2c_dev*) ;
 struct reset_control* FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (struct i2c_adapter*) ;
 int FUNC_14 (struct i2c_adapter*,struct stm32f7_i2c_dev*) ;
 int FUNC_15 (int *) ;
 struct stm32f7_i2c_setup* FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (struct platform_device*,int) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct stm32f7_i2c_dev*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*,int ) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (struct reset_control*) ;
 int FUNC_32 (struct reset_control*) ;
 int FUNC_33 (int ,int,char*,scalar_t__*) ;
 int FUNC_34 (TYPE_2__*,scalar_t__,int ,int ) ;
 int VAR_15 ;
 int FUNC_35 (struct stm32f7_i2c_dev*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_36 (struct platform_device*,struct stm32f7_i2c_dev*) ;
 int FUNC_37 (struct stm32f7_i2c_dev*,struct stm32f7_i2c_setup*) ;
 int FUNC_38 (int) ;

__attribute__((used)) static int FUNC_39(struct platform_device *VAR_19)
{
 struct stm32f7_i2c_dev *VAR_20;
 const struct stm32f7_i2c_setup *VAR_21;
 struct resource *VAR_22;
 u32 VAR_23, VAR_24, VAR_25;
 struct i2c_adapter *VAR_26;
 struct reset_control *VAR_27;
 dma_addr_t VAR_28;
 int VAR_29, VAR_30, VAR_31;

 VAR_20 = FUNC_9(&VAR_19->dev, sizeof(*VAR_20), VAR_4);
 if (!VAR_20)
  return -VAR_2;

 VAR_22 = FUNC_18(VAR_19, VAR_6, 0);
 VAR_20->base = FUNC_8(&VAR_19->dev, VAR_22);
 if (FUNC_0(VAR_20->base))
  return FUNC_1(VAR_20->base);
 VAR_28 = (dma_addr_t)VAR_22->start;

 VAR_30 = FUNC_17(VAR_19, 0);
 if (VAR_30 <= 0) {
  if (VAR_30 != -VAR_3)
   FUNC_4(&VAR_19->dev, "Failed to get IRQ event: %d\n",
    VAR_30);
  return VAR_30 ? : -VAR_1;
 }

 VAR_29 = FUNC_17(VAR_19, 1);
 if (VAR_29 <= 0) {
  if (VAR_29 != -VAR_3)
   FUNC_4(&VAR_19->dev, "Failed to get IRQ error: %d\n",
    VAR_29);
  return VAR_29 ? : -VAR_1;
 }

 VAR_20->clk = FUNC_7(&VAR_19->dev, ((void*)0));
 if (FUNC_0(VAR_20->clk)) {
  FUNC_4(&VAR_19->dev, "Error: Missing controller clock\n");
  return FUNC_1(VAR_20->clk);
 }

 VAR_31 = FUNC_3(VAR_20->clk);
 if (VAR_31) {
  FUNC_4(&VAR_19->dev, "Failed to prepare_enable clock\n");
  return VAR_31;
 }

 VAR_20->speed = VAR_13;
 VAR_31 = FUNC_6(&VAR_19->dev, "clock-frequency",
           &VAR_23);
 if (!VAR_31 && VAR_23 >= 1000000) {
  VAR_20->speed = VAR_12;
  VAR_31 = FUNC_36(VAR_19, VAR_20);
  if (VAR_31)
   goto clk_free;
 } else if (!VAR_31 && VAR_23 >= 400000) {
  VAR_20->speed = VAR_11;
 } else if (!VAR_31 && VAR_23 >= 100000) {
  VAR_20->speed = VAR_13;
 }

 VAR_27 = FUNC_12(&VAR_19->dev, ((void*)0));
 if (FUNC_0(VAR_27)) {
  FUNC_4(&VAR_19->dev, "Error: Missing controller reset\n");
  VAR_31 = FUNC_1(VAR_27);
  goto clk_free;
 }
 FUNC_31(VAR_27);
 FUNC_38(2);
 FUNC_32(VAR_27);

 VAR_20->dev = &VAR_19->dev;

 VAR_31 = FUNC_11(&VAR_19->dev, VAR_30,
     VAR_17,
     VAR_18,
     VAR_7,
     VAR_19->name, VAR_20);
 if (VAR_31) {
  FUNC_4(&VAR_19->dev, "Failed to request irq event %i\n",
   VAR_30);
  goto clk_free;
 }

 VAR_31 = FUNC_10(&VAR_19->dev, VAR_29, VAR_16, 0,
          VAR_19->name, VAR_20);
 if (VAR_31) {
  FUNC_4(&VAR_19->dev, "Failed to request irq error %i\n",
   VAR_29);
  goto clk_free;
 }

 VAR_21 = FUNC_16(&VAR_19->dev);
 if (!VAR_21) {
  FUNC_4(&VAR_19->dev, "Can't get device data\n");
  VAR_31 = -VAR_0;
  goto clk_free;
 }
 VAR_20->setup = *VAR_21;

 VAR_31 = FUNC_6(VAR_20->dev, "i2c-scl-rising-time-ns",
           &VAR_24);
 if (!VAR_31)
  VAR_20->setup.rise_time = VAR_24;

 VAR_31 = FUNC_6(VAR_20->dev, "i2c-scl-falling-time-ns",
           &VAR_25);
 if (!VAR_31)
  VAR_20->setup.fall_time = VAR_25;

 VAR_31 = FUNC_37(VAR_20, &VAR_20->setup);
 if (VAR_31)
  goto clk_free;

 VAR_26 = &VAR_20->adap;
 FUNC_14(VAR_26, VAR_20);
 FUNC_33(VAR_26->name, sizeof(VAR_26->name), "STM32F7 I2C(%pa)",
   &VAR_22->start);
 VAR_26->owner = VAR_14;
 VAR_26->timeout = 2 * VAR_5;
 VAR_26->retries = 3;
 VAR_26->algo = &VAR_15;
 VAR_26->dev.parent = &VAR_19->dev;
 VAR_26->dev.of_node = VAR_19->dev.of_node;

 FUNC_15(&VAR_20->complete);


 VAR_20->dma = FUNC_34(VAR_20->dev, VAR_28,
          VAR_10,
          VAR_9);

 FUNC_19(VAR_19, VAR_20);

 FUNC_28(VAR_20->dev,
      VAR_8);
 FUNC_30(VAR_20->dev);
 FUNC_27(VAR_20->dev);
 FUNC_22(VAR_20->dev);

 FUNC_23(&VAR_19->dev);

 FUNC_35(VAR_20);

 VAR_31 = FUNC_13(VAR_26);
 if (VAR_31)
  goto pm_disable;

 FUNC_5(VAR_20->dev, "STM32F7 I2C-%d bus adapter\n", VAR_26->nr);

 FUNC_24(VAR_20->dev);
 FUNC_25(VAR_20->dev);

 return 0;

pm_disable:
 FUNC_26(VAR_20->dev);
 FUNC_20(VAR_20->dev);
 FUNC_29(VAR_20->dev);
 FUNC_21(VAR_20->dev);

clk_free:
 FUNC_2(VAR_20->clk);

 return VAR_31;
}
