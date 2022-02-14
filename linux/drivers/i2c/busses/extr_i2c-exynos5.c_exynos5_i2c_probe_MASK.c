
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_10__ {TYPE_2__* parent; struct device_node* of_node; } ;
struct TYPE_12__ {int retries; TYPE_1__ dev; struct exynos5_i2c* algo_data; int * algo; int owner; int name; } ;
struct exynos5_i2c {int irq; int clk; TYPE_3__ adap; int variant; int msg_complete; int lock; int regs; TYPE_2__* dev; int op_clock; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*,struct resource*) ;
 struct exynos5_i2c* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,struct exynos5_i2c*) ;
 int FUNC_11 (struct exynos5_i2c*) ;
 int VAR_8 ;
 int FUNC_12 (struct exynos5_i2c*) ;
 int VAR_9 ;
 int FUNC_13 (struct exynos5_i2c*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (struct device_node*,char*,int *) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct exynos5_i2c*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,char*,int) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->dev.of_node;
 struct exynos5_i2c *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_9(&VAR_10->dev, sizeof(struct exynos5_i2c), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 if (FUNC_17(VAR_11, "clock-frequency", &VAR_12->op_clock))
  VAR_12->op_clock = VAR_4;

 FUNC_22(VAR_12->adap.name, "exynos5-i2c", sizeof(VAR_12->adap.name));
 VAR_12->adap.owner = VAR_7;
 VAR_12->adap.algo = &VAR_8;
 VAR_12->adap.retries = 3;

 VAR_12->dev = &VAR_10->dev;
 VAR_12->clk = FUNC_7(&VAR_10->dev, "hsi2c");
 if (FUNC_0(VAR_12->clk)) {
  FUNC_5(&VAR_10->dev, "cannot get clock\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_4(VAR_12->clk);
 if (VAR_14)
  return VAR_14;

 VAR_13 = FUNC_19(VAR_10, VAR_5, 0);
 VAR_12->regs = FUNC_8(&VAR_10->dev, VAR_13);
 if (FUNC_0(VAR_12->regs)) {
  VAR_14 = FUNC_1(VAR_12->regs);
  goto err_clk;
 }

 VAR_12->adap.dev.of_node = VAR_11;
 VAR_12->adap.algo_data = VAR_12;
 VAR_12->adap.dev.parent = &VAR_10->dev;


 FUNC_12(VAR_12);

 FUNC_21(&VAR_12->lock);
 FUNC_15(&VAR_12->msg_complete);

 VAR_12->irq = VAR_14 = FUNC_18(VAR_10, 0);
 if (VAR_14 <= 0) {
  FUNC_5(&VAR_10->dev, "cannot find HS-I2C IRQ\n");
  VAR_14 = -VAR_0;
  goto err_clk;
 }

 VAR_14 = FUNC_10(&VAR_10->dev, VAR_12->irq, VAR_9,
          VAR_6, FUNC_6(&VAR_10->dev), VAR_12);
 if (VAR_14 != 0) {
  FUNC_5(&VAR_10->dev, "cannot request HS-I2C IRQ %d\n", VAR_12->irq);
  goto err_clk;
 }

 VAR_12->variant = FUNC_16(&VAR_10->dev);

 VAR_14 = FUNC_11(VAR_12);
 if (VAR_14)
  goto err_clk;

 FUNC_13(VAR_12);

 VAR_14 = FUNC_14(&VAR_12->adap);
 if (VAR_14 < 0)
  goto err_clk;

 FUNC_20(VAR_10, VAR_12);

 FUNC_2(VAR_12->clk);

 return 0;

 err_clk:
 FUNC_3(VAR_12->clk);
 return VAR_14;
}
