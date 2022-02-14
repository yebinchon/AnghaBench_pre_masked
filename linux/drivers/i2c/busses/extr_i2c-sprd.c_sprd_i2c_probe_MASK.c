
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int of_node; struct device* parent; } ;
struct TYPE_5__ {int retries; TYPE_1__ dev; int nr; struct sprd_i2c* algo_data; int * algo; int owner; int name; } ;
struct sprd_i2c {scalar_t__ irq; int bus_freq; int clk; struct device* dev; TYPE_2__ adap; int complete; int base; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; int name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 struct sprd_i2c* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,int,int ,struct sprd_i2c*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,struct sprd_i2c*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int*) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct sprd_i2c*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*,int ) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (int ,int,char*,char*) ;
 int VAR_7 ;
 int FUNC_25 (struct sprd_i2c*) ;
 int FUNC_26 (struct sprd_i2c*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct sprd_i2c *VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_10->id = FUNC_11(VAR_11->of_node, "i2c");

 VAR_12 = FUNC_5(VAR_11, sizeof(struct sprd_i2c), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->base = FUNC_6(VAR_10, 0);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_12->irq = FUNC_13(VAR_10, 0);
 if (VAR_12->irq < 0) {
  FUNC_4(&VAR_10->dev, "failed to get irq resource\n");
  return VAR_12->irq;
 }

 FUNC_9(&VAR_12->adap, VAR_12);
 FUNC_10(&VAR_12->complete);
 FUNC_24(VAR_12->adap.name, sizeof(VAR_12->adap.name),
   "%s", "sprd-i2c");

 VAR_12->bus_freq = 100000;
 VAR_12->adap.owner = VAR_6;
 VAR_12->dev = VAR_11;
 VAR_12->adap.retries = 3;
 VAR_12->adap.algo = &VAR_7;
 VAR_12->adap.algo_data = VAR_12;
 VAR_12->adap.dev.parent = VAR_11;
 VAR_12->adap.nr = VAR_10->id;
 VAR_12->adap.dev.of_node = VAR_11->of_node;

 if (!FUNC_12(VAR_11->of_node, "clock-frequency", &VAR_13))
  VAR_12->bus_freq = VAR_13;


 if (VAR_12->bus_freq != 100000 && VAR_12->bus_freq != 400000)
  return -VAR_0;

 VAR_14 = FUNC_25(VAR_12);
 if (VAR_14)
  return VAR_14;

 FUNC_14(VAR_10, VAR_12);

 VAR_14 = FUNC_3(VAR_12->clk);
 if (VAR_14)
  return VAR_14;

 FUNC_26(VAR_12);

 FUNC_22(VAR_12->dev, VAR_5);
 FUNC_23(VAR_12->dev);
 FUNC_21(VAR_12->dev);
 FUNC_16(VAR_12->dev);

 VAR_14 = FUNC_17(VAR_12->dev);
 if (VAR_14 < 0)
  goto err_rpm_put;

 VAR_14 = FUNC_7(VAR_11, VAR_12->irq,
  VAR_8, VAR_9,
  VAR_3 | VAR_4,
  VAR_10->name, VAR_12);
 if (VAR_14) {
  FUNC_4(&VAR_10->dev, "failed to request irq %d\n", VAR_12->irq);
  goto err_rpm_put;
 }

 VAR_14 = FUNC_8(&VAR_12->adap);
 if (VAR_14) {
  FUNC_4(&VAR_10->dev, "add adapter failed\n");
  goto err_rpm_put;
 }

 FUNC_18(VAR_12->dev);
 FUNC_19(VAR_12->dev);
 return 0;

err_rpm_put:
 FUNC_20(VAR_12->dev);
 FUNC_15(VAR_12->dev);
 FUNC_2(VAR_12->clk);
 return VAR_14;
}
