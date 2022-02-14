
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; struct device* parent; } ;
struct i2c_adapter {int retries; int name; int * quirks; int * bus_recovery_info; TYPE_1__ dev; int class; int * algo; int nr; } ;
struct rcar_i2c_priv {int devtype; int irq; int flags; void* rstc; void* dma_tx; void* dma_rx; int dma_direction; int sg; struct i2c_adapter adap; int wait; void* io; int res; void* clk; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; int name; int id; } ;
struct i2c_timings {int dummy; } ;
typedef enum rcar_i2c_type { ____Placeholder_rcar_i2c_type } rcar_i2c_type ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_9 ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,int *) ;
 void* FUNC_8 (struct device*,int ) ;
 struct rcar_i2c_priv* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int ,int ,int ,int ,struct rcar_i2c_priv*) ;
 void* FUNC_11 (struct device*,int *) ;
 int FUNC_12 (struct i2c_adapter*) ;
 int FUNC_13 (struct device*,struct i2c_timings*,int) ;
 int FUNC_14 (struct i2c_adapter*,struct rcar_i2c_priv*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct device*) ;
 scalar_t__ FUNC_17 (int ,char*) ;
 int FUNC_18 (struct platform_device*,int ) ;
 int FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct rcar_i2c_priv*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_25 (struct rcar_i2c_priv*,struct i2c_timings*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_26 (void*) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int ,int ,int) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_14)
{
 struct rcar_i2c_priv *VAR_15;
 struct i2c_adapter *VAR_16;
 struct device *VAR_17 = &VAR_14->dev;
 struct i2c_timings VAR_18;
 int VAR_19;


 FUNC_0(VAR_9 < 3, "Invalid min DMA length");

 VAR_15 = FUNC_9(VAR_17, sizeof(struct rcar_i2c_priv), VAR_4);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->clk = FUNC_7(VAR_17, ((void*)0));
 if (FUNC_2(VAR_15->clk)) {
  FUNC_4(VAR_17, "cannot get clock\n");
  return FUNC_3(VAR_15->clk);
 }

 VAR_15->res = FUNC_19(VAR_14, VAR_8, 0);

 VAR_15->io = FUNC_8(VAR_17, VAR_15->res);
 if (FUNC_2(VAR_15->io))
  return FUNC_3(VAR_15->io);

 VAR_15->devtype = (enum rcar_i2c_type)FUNC_16(VAR_17);
 FUNC_15(&VAR_15->wait);

 VAR_16 = &VAR_15->adap;
 VAR_16->nr = VAR_14->id;
 VAR_16->algo = &VAR_10;
 VAR_16->class = VAR_5;
 VAR_16->retries = 3;
 VAR_16->dev.parent = VAR_17;
 VAR_16->dev.of_node = VAR_17->of_node;
 VAR_16->bus_recovery_info = &VAR_11;
 VAR_16->quirks = &VAR_13;
 FUNC_14(VAR_16, VAR_15);
 FUNC_28(VAR_16->name, VAR_14->name, sizeof(VAR_16->name));

 FUNC_13(VAR_17, &VAR_18, 0);


 FUNC_27(&VAR_15->sg, 1);
 VAR_15->dma_direction = VAR_0;
 VAR_15->dma_rx = VAR_15->dma_tx = FUNC_1(-VAR_3);


 FUNC_22(VAR_17);
 FUNC_23(VAR_17);
 VAR_19 = FUNC_25(VAR_15, &VAR_18);
 if (VAR_19 < 0)
  goto out_pm_put;

 if (VAR_15->devtype == VAR_6) {
  VAR_15->rstc = FUNC_11(&VAR_14->dev, ((void*)0));
  if (!FUNC_2(VAR_15->rstc)) {
   VAR_19 = FUNC_26(VAR_15->rstc);
   if (VAR_19 < 0)
    VAR_15->rstc = FUNC_1(-VAR_2);
  }
 }


 if (FUNC_17(VAR_17->of_node, "multi-master"))
  VAR_15->flags |= VAR_7;
 else
  FUNC_24(VAR_17);


 VAR_15->irq = FUNC_18(VAR_14, 0);
 VAR_19 = FUNC_10(VAR_17, VAR_15->irq, VAR_12, 0, FUNC_6(VAR_17), VAR_15);
 if (VAR_19 < 0) {
  FUNC_4(VAR_17, "cannot get irq %d\n", VAR_15->irq);
  goto out_pm_disable;
 }

 FUNC_20(VAR_14, VAR_15);

 VAR_19 = FUNC_12(VAR_16);
 if (VAR_19 < 0)
  goto out_pm_disable;

 FUNC_5(VAR_17, "probed\n");

 return 0;

 out_pm_put:
 FUNC_24(VAR_17);
 out_pm_disable:
 FUNC_21(VAR_17);
 return VAR_19;
}
