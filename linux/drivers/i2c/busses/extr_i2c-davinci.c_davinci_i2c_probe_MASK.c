
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_25__ {scalar_t__ of_node; } ;
struct platform_device {int id; TYPE_2__ dev; int name; } ;
struct i2c_bus_recovery_info {void* sda_gpiod; void* scl_gpiod; } ;
struct TYPE_24__ {scalar_t__ of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int nr; struct i2c_bus_recovery_info* bus_recovery_info; TYPE_1__ dev; int timeout; int * algo; int name; int class; int owner; } ;
struct davinci_i2c_platform_data {int dummy; } ;
struct davinci_i2c_dev {int irq; TYPE_2__* dev; TYPE_12__* pdata; struct i2c_adapter adapter; void* base; void* clk; int cmd_complete; } ;
struct TYPE_23__ {int bus_freq; scalar_t__ gpio_recovery; scalar_t__ has_pfunc; } ;


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
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_10 ;
 struct i2c_bus_recovery_info VAR_11 ;
 TYPE_12__ VAR_12 ;
 struct i2c_bus_recovery_info VAR_13 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 TYPE_12__* FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (TYPE_2__*,int *) ;
 void* FUNC_5 (TYPE_2__*,char*,int ) ;
 void* FUNC_6 (TYPE_2__*,struct resource*) ;
 void* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (TYPE_2__*,int,int ,int ,int ,struct davinci_i2c_dev*) ;
 int FUNC_9 (struct i2c_adapter*) ;
 int VAR_14 ;
 int FUNC_10 (struct davinci_i2c_dev*) ;
 int FUNC_11 (struct davinci_i2c_dev*) ;
 int VAR_15 ;
 int FUNC_12 (struct i2c_adapter*,struct davinci_i2c_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_12__*,TYPE_12__*,int) ;
 scalar_t__ FUNC_15 (scalar_t__,char*) ;
 int FUNC_16 (scalar_t__,char*,int*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct davinci_i2c_dev*) ;
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
 int FUNC_30 (int ,char*,int) ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_16)
{
 struct davinci_i2c_dev *VAR_17;
 struct i2c_adapter *VAR_18;
 struct resource *VAR_19;
 struct i2c_bus_recovery_info *VAR_20;
 int VAR_21, VAR_22;

 VAR_22 = FUNC_17(VAR_16, 0);
 if (VAR_22 <= 0) {
  if (!VAR_22)
   VAR_22 = -VAR_3;
  if (VAR_22 != -VAR_4)
   FUNC_2(&VAR_16->dev,
    "can't get irq resource ret=%d\n", VAR_22);
  return VAR_22;
 }

 VAR_17 = FUNC_7(&VAR_16->dev, sizeof(struct davinci_i2c_dev),
   VAR_5);
 if (!VAR_17) {
  FUNC_2(&VAR_16->dev, "Memory allocation failed\n");
  return -VAR_2;
 }

 FUNC_13(&VAR_17->cmd_complete);

 VAR_17->dev = &VAR_16->dev;
 VAR_17->irq = VAR_22;
 VAR_17->pdata = FUNC_3(&VAR_16->dev);
 FUNC_19(VAR_16, VAR_17);

 if (!VAR_17->pdata && VAR_16->dev.of_node) {
  u32 VAR_23;

  VAR_17->pdata = FUNC_7(&VAR_16->dev,
   sizeof(struct davinci_i2c_platform_data), VAR_5);
  if (!VAR_17->pdata)
   return -VAR_2;

  FUNC_14(VAR_17->pdata, &VAR_12,
   sizeof(struct davinci_i2c_platform_data));
  if (!FUNC_16(VAR_16->dev.of_node, "clock-frequency",
   &VAR_23))
   VAR_17->pdata->bus_freq = VAR_23 / 1000;

  VAR_17->pdata->has_pfunc =
   FUNC_15(VAR_16->dev.of_node,
           "ti,has-pfunc");
 } else if (!VAR_17->pdata) {
  VAR_17->pdata = &VAR_12;
 }

 VAR_17->clk = FUNC_4(&VAR_16->dev, ((void*)0));
 if (FUNC_0(VAR_17->clk))
  return FUNC_1(VAR_17->clk);

 VAR_19 = FUNC_18(VAR_16, VAR_9, 0);
 VAR_17->base = FUNC_6(&VAR_16->dev, VAR_19);
 if (FUNC_0(VAR_17->base)) {
  return FUNC_1(VAR_17->base);
 }

 FUNC_28(VAR_17->dev,
      VAR_0);
 FUNC_29(VAR_17->dev);

 FUNC_22(VAR_17->dev);

 VAR_21 = FUNC_23(VAR_17->dev);
 if (VAR_21 < 0) {
  FUNC_2(VAR_17->dev, "failed to runtime_get device: %d\n", VAR_21);
  FUNC_26(VAR_17->dev);
  return VAR_21;
 }

 FUNC_11(VAR_17);

 VAR_21 = FUNC_8(&VAR_16->dev, VAR_17->irq, VAR_15, 0,
   VAR_16->name, VAR_17);
 if (VAR_21) {
  FUNC_2(&VAR_16->dev, "failure requesting irq %i\n", VAR_17->irq);
  goto err_unuse_clocks;
 }

 VAR_21 = FUNC_10(VAR_17);
 if (VAR_21) {
  FUNC_2(&VAR_16->dev, "failed to register cpufreq\n");
  goto err_unuse_clocks;
 }

 VAR_18 = &VAR_17->adapter;
 FUNC_12(VAR_18, VAR_17);
 VAR_18->owner = VAR_10;
 VAR_18->class = VAR_8;
 FUNC_30(VAR_18->name, "DaVinci I2C adapter", sizeof(VAR_18->name));
 VAR_18->algo = &VAR_14;
 VAR_18->dev.parent = &VAR_16->dev;
 VAR_18->timeout = VAR_1;
 VAR_18->dev.of_node = VAR_16->dev.of_node;

 if (VAR_17->pdata->has_pfunc)
  VAR_18->bus_recovery_info = &VAR_13;
 else if (VAR_17->pdata->gpio_recovery) {
  VAR_20 = &VAR_11;
  VAR_18->bus_recovery_info = VAR_20;
  VAR_20->scl_gpiod = FUNC_5(&VAR_16->dev, "scl",
        VAR_7);
  if (FUNC_0(VAR_20->scl_gpiod)) {
   VAR_21 = FUNC_1(VAR_20->scl_gpiod);
   goto err_unuse_clocks;
  }
  VAR_20->sda_gpiod = FUNC_5(&VAR_16->dev, "sda", VAR_6);
  if (FUNC_0(VAR_20->sda_gpiod)) {
   VAR_21 = FUNC_1(VAR_20->sda_gpiod);
   goto err_unuse_clocks;
  }
 }

 VAR_18->nr = VAR_16->id;
 VAR_21 = FUNC_9(VAR_18);
 if (VAR_21)
  goto err_unuse_clocks;

 FUNC_24(VAR_17->dev);
 FUNC_25(VAR_17->dev);

 return 0;

err_unuse_clocks:
 FUNC_21(VAR_17->dev);
 FUNC_27(VAR_17->dev);
 FUNC_20(VAR_17->dev);

 return VAR_21;
}
