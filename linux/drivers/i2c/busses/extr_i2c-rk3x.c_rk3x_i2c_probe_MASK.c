
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int u32 ;
struct TYPE_13__ {int notifier_call; } ;
struct TYPE_14__ {TYPE_3__* parent; struct device_node* of_node; } ;
struct TYPE_17__ {int retries; TYPE_1__ dev; struct rk3x_i2c* algo_data; int * algo; int owner; int name; } ;
struct rk3x_i2c {struct regmap* clk; struct regmap* pclk; TYPE_11__ clk_rate_nb; TYPE_4__ adap; TYPE_2__* soc_data; TYPE_3__* dev; struct regmap* regs; int wait; int lock; int t; } ;
struct resource {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_16__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {TYPE_2__* data; } ;
struct device_node {int dummy; } ;
struct TYPE_15__ {scalar_t__ grf_offset; scalar_t__ calc_timings; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_5 ;
 unsigned long FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct regmap*,TYPE_11__*) ;
 int FUNC_5 (struct regmap*,TYPE_11__*) ;
 int FUNC_6 (struct regmap*) ;
 int FUNC_7 (struct regmap*) ;
 int FUNC_8 (TYPE_3__*,char*,...) ;
 int FUNC_9 (TYPE_3__*) ;
 void* FUNC_10 (TYPE_3__*,char*) ;
 struct regmap* FUNC_11 (TYPE_3__*,struct resource*) ;
 struct rk3x_i2c* FUNC_12 (TYPE_3__*,int,int ) ;
 int FUNC_13 (TYPE_3__*,int,int ,int ,int ,struct rk3x_i2c*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_3__*,int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct device_node*,char*) ;
 struct of_device_id* FUNC_18 (int ,struct device_node*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct rk3x_i2c*) ;
 int FUNC_22 (struct regmap*,scalar_t__,int) ;
 int FUNC_23 (struct rk3x_i2c*,unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,char*,int) ;
 struct regmap* FUNC_26 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_11)
{
 struct device_node *VAR_12 = VAR_11->dev.of_node;
 const struct of_device_id *VAR_13;
 struct rk3x_i2c *VAR_14;
 struct resource *VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 u32 VAR_18;
 int VAR_19;
 unsigned long VAR_20;

 VAR_14 = FUNC_12(&VAR_11->dev, sizeof(struct rk3x_i2c), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_13 = FUNC_18(VAR_9, VAR_12);
 VAR_14->soc_data = VAR_13->data;


 FUNC_15(&VAR_11->dev, &VAR_14->t, 1);

 FUNC_25(VAR_14->adap.name, "rk3x-i2c", sizeof(VAR_14->adap.name));
 VAR_14->adap.owner = VAR_5;
 VAR_14->adap.algo = &VAR_6;
 VAR_14->adap.retries = 3;
 VAR_14->adap.dev.of_node = VAR_12;
 VAR_14->adap.algo_data = VAR_14;
 VAR_14->adap.dev.parent = &VAR_11->dev;

 VAR_14->dev = &VAR_11->dev;

 FUNC_24(&VAR_14->lock);
 FUNC_16(&VAR_14->wait);

 VAR_15 = FUNC_20(VAR_11, VAR_4, 0);
 VAR_14->regs = FUNC_11(&VAR_11->dev, VAR_15);
 if (FUNC_1(VAR_14->regs))
  return FUNC_2(VAR_14->regs);


 VAR_17 = FUNC_17(VAR_12, "i2c");





 if (VAR_14->soc_data->grf_offset >= 0) {
  struct regmap *VAR_21;

  VAR_21 = FUNC_26(VAR_12, "rockchip,grf");
  if (FUNC_1(VAR_21)) {
   FUNC_8(&VAR_11->dev,
    "rk3x-i2c needs 'rockchip,grf' property\n");
   return FUNC_2(VAR_21);
  }

  if (VAR_17 < 0) {
   FUNC_8(&VAR_11->dev, "rk3x-i2c needs i2cX alias");
   return -VAR_0;
  }


  VAR_18 = FUNC_0(27 + VAR_17) | FUNC_0(11 + VAR_17);

  VAR_16 = FUNC_22(VAR_21, VAR_14->soc_data->grf_offset, VAR_18);
  if (VAR_16 != 0) {
   FUNC_8(VAR_14->dev, "Could not write to GRF: %d\n", VAR_16);
   return VAR_16;
  }
 }


 VAR_19 = FUNC_19(VAR_11, 0);
 if (VAR_19 < 0) {
  FUNC_8(&VAR_11->dev, "cannot find rk3x IRQ\n");
  return VAR_19;
 }

 VAR_16 = FUNC_13(&VAR_11->dev, VAR_19, VAR_8,
          0, FUNC_9(&VAR_11->dev), VAR_14);
 if (VAR_16 < 0) {
  FUNC_8(&VAR_11->dev, "cannot request IRQ\n");
  return VAR_16;
 }

 FUNC_21(VAR_11, VAR_14);

 if (VAR_14->soc_data->calc_timings == VAR_10) {

  VAR_14->clk = FUNC_10(&VAR_11->dev, ((void*)0));
  VAR_14->pclk = VAR_14->clk;
 } else {
  VAR_14->clk = FUNC_10(&VAR_11->dev, "i2c");
  VAR_14->pclk = FUNC_10(&VAR_11->dev, "pclk");
 }

 if (FUNC_1(VAR_14->clk)) {
  VAR_16 = FUNC_2(VAR_14->clk);
  if (VAR_16 != -VAR_2)
   FUNC_8(&VAR_11->dev, "Can't get bus clk: %d\n", VAR_16);
  return VAR_16;
 }
 if (FUNC_1(VAR_14->pclk)) {
  VAR_16 = FUNC_2(VAR_14->pclk);
  if (VAR_16 != -VAR_2)
   FUNC_8(&VAR_11->dev, "Can't get periph clk: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_6(VAR_14->clk);
 if (VAR_16 < 0) {
  FUNC_8(&VAR_11->dev, "Can't prepare bus clk: %d\n", VAR_16);
  return VAR_16;
 }
 VAR_16 = FUNC_6(VAR_14->pclk);
 if (VAR_16 < 0) {
  FUNC_8(&VAR_11->dev, "Can't prepare periph clock: %d\n", VAR_16);
  goto err_clk;
 }

 VAR_14->clk_rate_nb.notifier_call = VAR_7;
 VAR_16 = FUNC_4(VAR_14->clk, &VAR_14->clk_rate_nb);
 if (VAR_16 != 0) {
  FUNC_8(&VAR_11->dev, "Unable to register clock notifier\n");
  goto err_pclk;
 }

 VAR_20 = FUNC_3(VAR_14->clk);
 FUNC_23(VAR_14, VAR_20);

 VAR_16 = FUNC_14(&VAR_14->adap);
 if (VAR_16 < 0)
  goto err_clk_notifier;

 return 0;

err_clk_notifier:
 FUNC_5(VAR_14->clk, &VAR_14->clk_rate_nb);
err_pclk:
 FUNC_7(VAR_14->pclk);
err_clk:
 FUNC_7(VAR_14->clk);
 return VAR_16;
}
