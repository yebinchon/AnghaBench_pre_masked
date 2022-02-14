
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_19__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {struct cdns_platform_data* data; } ;
struct cdns_platform_data {int quirks; } ;
struct TYPE_18__ {TYPE_2__* parent; int of_node; } ;
struct TYPE_20__ {int retries; int name; TYPE_1__ dev; struct cdns_i2c* algo_data; int timeout; int * algo; int owner; } ;
struct TYPE_17__ {int notifier_call; } ;
struct cdns_i2c {int irq; int i2c_clk; int clk; TYPE_8__ adap; int input_clk; TYPE_16__ clk_rate_change_nb; TYPE_2__* dev; int xfer_done; int membase; int quirks; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,struct cdns_i2c*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_16__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (TYPE_2__*,char*,int,unsigned long,int) ;
 int FUNC_10 (TYPE_2__*,char*) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,struct resource*) ;
 struct cdns_i2c* FUNC_13 (TYPE_2__*,int,int ) ;
 int FUNC_14 (TYPE_2__*,int,int ,int ,int ,struct cdns_i2c*) ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (int *) ;
 struct of_device_id* FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,char*,int*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct cdns_i2c*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*,int ) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (int ,int,char*,unsigned long) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_20)
{
 struct resource *VAR_21;
 struct cdns_i2c *VAR_22;
 int VAR_23;
 const struct of_device_id *VAR_24;

 VAR_22 = FUNC_13(&VAR_20->dev, sizeof(*VAR_22), VAR_13);
 if (!VAR_22)
  return -VAR_12;

 VAR_22->dev = &VAR_20->dev;
 FUNC_21(VAR_20, VAR_22);

 VAR_24 = FUNC_17(VAR_19, VAR_20->dev.of_node);
 if (VAR_24 && VAR_24->data) {
  const struct cdns_platform_data *VAR_25 = VAR_24->data;
  VAR_22->quirks = VAR_25->quirks;
 }

 VAR_21 = FUNC_20(VAR_20, VAR_14, 0);
 VAR_22->membase = FUNC_12(&VAR_20->dev, VAR_21);
 if (FUNC_0(VAR_22->membase))
  return FUNC_1(VAR_22->membase);

 VAR_22->irq = FUNC_19(VAR_20, 0);

 VAR_22->adap.owner = VAR_15;
 VAR_22->adap.dev.of_node = VAR_20->dev.of_node;
 VAR_22->adap.algo = &VAR_16;
 VAR_22->adap.timeout = VAR_6;
 VAR_22->adap.retries = 3;
 VAR_22->adap.algo_data = VAR_22;
 VAR_22->adap.dev.parent = &VAR_20->dev;
 FUNC_16(&VAR_22->xfer_done);
 FUNC_28(VAR_22->adap.name, sizeof(VAR_22->adap.name),
   "Cadence I2C at %08lx", (unsigned long)VAR_21->start);

 VAR_22->clk = FUNC_11(&VAR_20->dev, ((void*)0));
 if (FUNC_0(VAR_22->clk)) {
  FUNC_8(&VAR_20->dev, "input clock not found.\n");
  return FUNC_1(VAR_22->clk);
 }
 VAR_23 = FUNC_7(VAR_22->clk);
 if (VAR_23)
  FUNC_8(&VAR_20->dev, "Unable to enable clock.\n");

 FUNC_23(VAR_22->dev);
 FUNC_25(VAR_22->dev, VAR_9);
 FUNC_27(VAR_22->dev);
 FUNC_24(VAR_22->dev);

 VAR_22->clk_rate_change_nb.notifier_call = VAR_17;
 if (FUNC_6(VAR_22->clk, &VAR_22->clk_rate_change_nb))
  FUNC_10(&VAR_20->dev, "Unable to register clock notifier.\n");
 VAR_22->input_clk = FUNC_5(VAR_22->clk);

 VAR_23 = FUNC_18(VAR_20->dev.of_node, "clock-frequency",
   &VAR_22->i2c_clk);
 if (VAR_23 || (VAR_22->i2c_clk > VAR_5))
  VAR_22->i2c_clk = VAR_4;

 FUNC_3(VAR_0 | VAR_2 | VAR_1,
     VAR_3);

 VAR_23 = FUNC_2(VAR_22->input_clk, VAR_22);
 if (VAR_23) {
  FUNC_8(&VAR_20->dev, "invalid SCL clock: %u Hz\n", VAR_22->i2c_clk);
  VAR_23 = -VAR_11;
  goto err_clk_dis;
 }

 VAR_23 = FUNC_14(&VAR_20->dev, VAR_22->irq, VAR_18, 0,
     VAR_10, VAR_22);
 if (VAR_23) {
  FUNC_8(&VAR_20->dev, "cannot get irq %d\n", VAR_22->irq);
  goto err_clk_dis;
 }
 FUNC_3(VAR_7, VAR_8);

 VAR_23 = FUNC_15(&VAR_22->adap);
 if (VAR_23 < 0)
  goto err_clk_dis;

 FUNC_9(&VAR_20->dev, "%u kHz mmio %08lx irq %d\n",
   VAR_22->i2c_clk / 1000, (unsigned long)VAR_21->start, VAR_22->irq);

 return 0;

err_clk_dis:
 FUNC_4(VAR_22->clk);
 FUNC_26(&VAR_20->dev);
 FUNC_22(&VAR_20->dev);
 return VAR_23;
}
