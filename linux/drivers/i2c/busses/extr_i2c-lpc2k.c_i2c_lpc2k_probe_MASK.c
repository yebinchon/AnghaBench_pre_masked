
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_11__ {int of_node; TYPE_4__* parent; } ;
struct TYPE_12__ {TYPE_1__ dev; int * algo; int name; int owner; } ;
struct lpc2k_i2c {scalar_t__ irq; scalar_t__ clk; TYPE_2__ adap; scalar_t__ base; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_4__*,struct resource*) ;
 struct lpc2k_i2c* FUNC_10 (TYPE_4__*,int,int ) ;
 int FUNC_11 (TYPE_4__*,int,int ,int ,int ,struct lpc2k_i2c*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (struct lpc2k_i2c*) ;
 int FUNC_15 (TYPE_2__*,struct lpc2k_i2c*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int*) ;
 scalar_t__ FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct lpc2k_i2c*) ;
 int FUNC_21 (int ,char*,int) ;
 int FUNC_22 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_12)
{
 struct lpc2k_i2c *VAR_13;
 struct resource *VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_13 = FUNC_10(&VAR_12->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_19(VAR_12, VAR_6, 0);
 VAR_13->base = FUNC_9(&VAR_12->dev, VAR_14);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 VAR_13->irq = FUNC_18(VAR_12, 0);
 if (VAR_13->irq < 0) {
  FUNC_5(&VAR_12->dev, "can't get interrupt resource\n");
  return VAR_13->irq;
 }

 FUNC_16(&VAR_13->wait);

 VAR_13->clk = FUNC_8(&VAR_12->dev, ((void*)0));
 if (FUNC_0(VAR_13->clk)) {
  FUNC_5(&VAR_12->dev, "error getting clock\n");
  return FUNC_1(VAR_13->clk);
 }

 VAR_18 = FUNC_4(VAR_13->clk);
 if (VAR_18) {
  FUNC_5(&VAR_12->dev, "unable to enable clock.\n");
  return VAR_18;
 }

 VAR_18 = FUNC_11(&VAR_12->dev, VAR_13->irq, VAR_11, 0,
          FUNC_7(&VAR_12->dev), VAR_13);
 if (VAR_18 < 0) {
  FUNC_5(&VAR_12->dev, "can't request interrupt.\n");
  goto fail_clk;
 }

 FUNC_12(VAR_13->irq);


 FUNC_14(VAR_13);

 VAR_18 = FUNC_17(VAR_12->dev.of_node, "clock-frequency",
       &VAR_15);
 if (VAR_18)
  VAR_15 = 100000;

 VAR_17 = FUNC_3(VAR_13->clk);
 if (VAR_17 == 0) {
  FUNC_5(&VAR_12->dev, "can't get I2C base clock\n");
  VAR_18 = -VAR_0;
  goto fail_clk;
 }


 VAR_17 = VAR_17 / VAR_15;
 if (VAR_15 <= 100000)
  VAR_16 = (VAR_17 * VAR_5) / 100;
 else if (VAR_15 <= 400000)
  VAR_16 = (VAR_17 * VAR_3) / 100;
 else
  VAR_16 = (VAR_17 * VAR_4) / 100;

 FUNC_22(VAR_16, VAR_13->base + VAR_7);
 FUNC_22(VAR_17 - VAR_16, VAR_13->base + VAR_8);

 FUNC_20(VAR_12, VAR_13);

 FUNC_15(&VAR_13->adap, VAR_13);
 VAR_13->adap.owner = VAR_9;
 FUNC_21(VAR_13->adap.name, "LPC2K I2C adapter", sizeof(VAR_13->adap.name));
 VAR_13->adap.algo = &VAR_10;
 VAR_13->adap.dev.parent = &VAR_12->dev;
 VAR_13->adap.dev.of_node = VAR_12->dev.of_node;

 VAR_18 = FUNC_13(&VAR_13->adap);
 if (VAR_18 < 0)
  goto fail_clk;

 FUNC_6(&VAR_12->dev, "LPC2K I2C adapter\n");

 return 0;

fail_clk:
 FUNC_2(VAR_13->clk);
 return VAR_18;
}
