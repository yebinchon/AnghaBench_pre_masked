
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ of_node; struct TYPE_16__* parent; } ;
struct TYPE_18__ {int retries; TYPE_1__ dev; int nr; struct s3c24xx_i2c* algo_data; int class; int * algo; int owner; int name; } ;
struct s3c24xx_i2c {int quirks; int tx_setup; int irq; TYPE_5__ adap; int clk; TYPE_4__* pdata; int pctrl; TYPE_1__* dev; int regs; int wait; int sysreg; } ;
struct s3c2410_platform_i2c {int dummy; } ;
struct resource {int dummy; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_17__ {int bus_num; int (* cfg_gpio ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ,...) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 struct s3c2410_platform_i2c* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (TYPE_1__*,struct resource*) ;
 void* FUNC_13 (TYPE_1__*,int,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int,int ,int ,int ,struct s3c24xx_i2c*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_4__*,struct s3c2410_platform_i2c*,int) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct s3c24xx_i2c*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (struct platform_device*) ;
 int VAR_8 ;
 int FUNC_25 (struct s3c24xx_i2c*) ;
 int FUNC_26 (struct s3c24xx_i2c*) ;
 int VAR_9 ;
 int FUNC_27 (scalar_t__,struct s3c24xx_i2c*) ;
 scalar_t__ FUNC_28 (struct s3c24xx_i2c*) ;
 int FUNC_29 (struct s3c24xx_i2c*) ;
 int FUNC_30 (int ,char*,int) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_33(struct platform_device *VAR_10)
{
 struct s3c24xx_i2c *VAR_11;
 struct s3c2410_platform_i2c *VAR_12 = ((void*)0);
 struct resource *VAR_13;
 int VAR_14;

 if (!VAR_10->dev.of_node) {
  VAR_12 = FUNC_8(&VAR_10->dev);
  if (!VAR_12) {
   FUNC_7(&VAR_10->dev, "no platform data\n");
   return -VAR_0;
  }
 }

 VAR_11 = FUNC_13(&VAR_10->dev, sizeof(struct s3c24xx_i2c), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->pdata = FUNC_13(&VAR_10->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_11->pdata)
  return -VAR_2;

 VAR_11->quirks = FUNC_24(VAR_10);
 VAR_11->sysreg = FUNC_0(-VAR_1);
 if (VAR_12)
  FUNC_18(VAR_11->pdata, VAR_12, sizeof(*VAR_12));
 else
  FUNC_27(VAR_10->dev.of_node, VAR_11);

 FUNC_30(VAR_11->adap.name, "s3c2410-i2c", sizeof(VAR_11->adap.name));
 VAR_11->adap.owner = VAR_7;
 VAR_11->adap.algo = &VAR_8;
 VAR_11->adap.retries = 2;
 VAR_11->adap.class = VAR_4;
 VAR_11->tx_setup = 50;

 FUNC_17(&VAR_11->wait);


 VAR_11->dev = &VAR_10->dev;
 VAR_11->clk = FUNC_11(&VAR_10->dev, "i2c");
 if (FUNC_1(VAR_11->clk)) {
  FUNC_7(&VAR_10->dev, "cannot get clock\n");
  return -VAR_1;
 }

 FUNC_6(&VAR_10->dev, "clock source %p\n", VAR_11->clk);


 VAR_13 = FUNC_20(VAR_10, VAR_5, 0);
 VAR_11->regs = FUNC_12(&VAR_10->dev, VAR_13);

 if (FUNC_1(VAR_11->regs))
  return FUNC_2(VAR_11->regs);

 FUNC_6(&VAR_10->dev, "registers %p (%p)\n",
  VAR_11->regs, VAR_13);


 VAR_11->adap.algo_data = VAR_11;
 VAR_11->adap.dev.parent = &VAR_10->dev;
 VAR_11->pctrl = FUNC_14(VAR_11->dev);


 if (VAR_11->pdata->cfg_gpio)
  VAR_11->pdata->cfg_gpio(FUNC_32(VAR_11->dev));
 else if (FUNC_1(VAR_11->pctrl) && FUNC_28(VAR_11))
  return -VAR_0;


 VAR_14 = FUNC_4(VAR_11->clk);
 if (VAR_14) {
  FUNC_7(&VAR_10->dev, "I2C clock enable failed\n");
  return VAR_14;
 }

 VAR_14 = FUNC_26(VAR_11);
 FUNC_3(VAR_11->clk);
 if (VAR_14 != 0) {
  FUNC_7(&VAR_10->dev, "I2C controller init failed\n");
  FUNC_5(VAR_11->clk);
  return VAR_14;
 }





 if (!(VAR_11->quirks & VAR_6)) {
  VAR_11->irq = VAR_14 = FUNC_19(VAR_10, 0);
  if (VAR_14 <= 0) {
   FUNC_7(&VAR_10->dev, "cannot find IRQ\n");
   FUNC_5(VAR_11->clk);
   return VAR_14;
  }

  VAR_14 = FUNC_15(&VAR_10->dev, VAR_11->irq, VAR_9,
           0, FUNC_10(&VAR_10->dev), VAR_11);
  if (VAR_14 != 0) {
   FUNC_7(&VAR_10->dev, "cannot claim IRQ %d\n", VAR_11->irq);
   FUNC_5(VAR_11->clk);
   return VAR_14;
  }
 }

 VAR_14 = FUNC_29(VAR_11);
 if (VAR_14 < 0) {
  FUNC_7(&VAR_10->dev, "failed to register cpufreq notifier\n");
  FUNC_5(VAR_11->clk);
  return VAR_14;
 }







 VAR_11->adap.nr = VAR_11->pdata->bus_num;
 VAR_11->adap.dev.of_node = VAR_10->dev.of_node;

 FUNC_21(VAR_10, VAR_11);

 FUNC_23(&VAR_10->dev);

 VAR_14 = FUNC_16(&VAR_11->adap);
 if (VAR_14 < 0) {
  FUNC_22(&VAR_10->dev);
  FUNC_25(VAR_11);
  FUNC_5(VAR_11->clk);
  return VAR_14;
 }

 FUNC_9(&VAR_10->dev, "%s: S3C I2C adapter\n", FUNC_10(&VAR_11->adap.dev));
 return 0;
}
