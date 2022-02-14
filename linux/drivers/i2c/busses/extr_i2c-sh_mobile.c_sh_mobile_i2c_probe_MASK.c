
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int retries; int nr; int name; TYPE_1__ dev; int * quirks; int * algo; int owner; } ;
struct sh_mobile_i2c_data {int clks_per_count; int bus_speed; int wait; int lock; struct i2c_adapter adap; int dma_tx; int dma_rx; int dma_direction; int sg; int flags; int reg; struct resource* res; TYPE_2__* dev; int clk; } ;
struct sh_mobile_dt_config {int clks_per_count; int (* setup ) (struct sh_mobile_i2c_data*) ;} ;
struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 struct sh_mobile_i2c_data* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (struct i2c_adapter*) ;
 int FUNC_9 (struct i2c_adapter*,struct sh_mobile_i2c_data*) ;
 int FUNC_10 (int *) ;
 struct sh_mobile_dt_config* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,char*,int *) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct sh_mobile_i2c_data*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (struct resource*) ;
 int FUNC_19 (int *,int) ;
 int VAR_8 ;
 int FUNC_20 (struct platform_device*,struct sh_mobile_i2c_data*) ;
 int FUNC_21 (struct sh_mobile_i2c_data*) ;
 int VAR_9 ;
 int FUNC_22 (struct sh_mobile_i2c_data*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int ,int) ;
 int FUNC_25 (struct sh_mobile_i2c_data*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_10)
{
 struct sh_mobile_i2c_data *VAR_11;
 struct i2c_adapter *VAR_12;
 struct resource *VAR_13;
 const struct sh_mobile_dt_config *VAR_14;
 int VAR_15;
 u32 VAR_16;

 VAR_11 = FUNC_7(&VAR_10->dev, sizeof(struct sh_mobile_i2c_data), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->clk = FUNC_5(&VAR_10->dev, ((void*)0));
 if (FUNC_1(VAR_11->clk)) {
  FUNC_3(&VAR_10->dev, "cannot get clock\n");
  return FUNC_2(VAR_11->clk);
 }

 VAR_15 = FUNC_20(VAR_10, VAR_11);
 if (VAR_15)
  return VAR_15;

 VAR_11->dev = &VAR_10->dev;
 FUNC_14(VAR_10, VAR_11);

 VAR_13 = FUNC_13(VAR_10, VAR_5, 0);

 VAR_11->res = VAR_13;
 VAR_11->reg = FUNC_6(&VAR_10->dev, VAR_13);
 if (FUNC_1(VAR_11->reg))
  return FUNC_2(VAR_11->reg);

 VAR_15 = FUNC_12(VAR_10->dev.of_node, "clock-frequency", &VAR_16);
 VAR_11->bus_speed = (VAR_15 || !VAR_16) ? VAR_6 : VAR_16;
 VAR_11->clks_per_count = 1;


 if (FUNC_18(VAR_13) > 0x17)
  VAR_11->flags |= VAR_4;

 FUNC_15(&VAR_10->dev);
 FUNC_16(&VAR_10->dev);

 VAR_14 = FUNC_11(&VAR_10->dev);
 if (VAR_14) {
  VAR_11->clks_per_count = VAR_14->clks_per_count;
  VAR_15 = VAR_14->setup(VAR_11);
 } else {
  VAR_15 = FUNC_21(VAR_11);
 }

 FUNC_17(&VAR_10->dev);
 if (VAR_15)
  return VAR_15;


 FUNC_19(&VAR_11->sg, 1);
 VAR_11->dma_direction = VAR_0;
 VAR_11->dma_rx = VAR_11->dma_tx = FUNC_0(-VAR_2);


 VAR_12 = &VAR_11->adap;
 FUNC_9(VAR_12, VAR_11);

 VAR_12->owner = VAR_7;
 VAR_12->algo = &VAR_8;
 VAR_12->quirks = &VAR_9;
 VAR_12->dev.parent = &VAR_10->dev;
 VAR_12->retries = 5;
 VAR_12->nr = VAR_10->id;
 VAR_12->dev.of_node = VAR_10->dev.of_node;

 FUNC_24(VAR_12->name, VAR_10->name, sizeof(VAR_12->name));

 FUNC_23(&VAR_11->lock);
 FUNC_10(&VAR_11->wait);

 VAR_15 = FUNC_8(VAR_12);
 if (VAR_15 < 0) {
  FUNC_22(VAR_11);
  return VAR_15;
 }

 FUNC_4(&VAR_10->dev, "I2C adapter %d, bus speed %lu Hz\n", VAR_12->nr, VAR_11->bus_speed);

 return 0;
}
