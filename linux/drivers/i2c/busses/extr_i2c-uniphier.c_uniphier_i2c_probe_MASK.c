
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_4__ {int of_node; struct device* parent; } ;
struct TYPE_5__ {int * bus_recovery_info; int name; TYPE_1__ dev; int * algo; int owner; } ;
struct uniphier_i2c_priv {unsigned long clk_cycle; int clk; TYPE_2__ adap; int comp; int membase; } ;
struct device {int of_node; } ;
struct platform_device {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,int *) ;
 struct uniphier_i2c_priv* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,int,int ,int ,int ,struct uniphier_i2c_priv*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,struct uniphier_i2c_priv*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,char*,unsigned long*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct uniphier_i2c_priv*) ;
 int FUNC_16 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (struct uniphier_i2c_priv*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct uniphier_i2c_priv *VAR_11;
 u32 VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_7(VAR_10, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->membase = FUNC_8(VAR_9, 0);
 if (FUNC_0(VAR_11->membase))
  return FUNC_1(VAR_11->membase);

 VAR_14 = FUNC_14(VAR_9, 0);
 if (VAR_14 < 0) {
  FUNC_5(VAR_10, "failed to get IRQ number\n");
  return VAR_14;
 }

 if (FUNC_13(VAR_10->of_node, "clock-frequency", &VAR_12))
  VAR_12 = VAR_4;

 if (!VAR_12 || VAR_12 > VAR_5) {
  FUNC_5(VAR_10, "invalid clock-frequency %d\n", VAR_12);
  return -VAR_0;
 }

 VAR_11->clk = FUNC_6(VAR_10, ((void*)0));
 if (FUNC_0(VAR_11->clk)) {
  FUNC_5(VAR_10, "failed to get clock\n");
  return FUNC_1(VAR_11->clk);
 }

 VAR_15 = FUNC_4(VAR_11->clk);
 if (VAR_15)
  return VAR_15;

 VAR_13 = FUNC_3(VAR_11->clk);
 if (!VAR_13) {
  FUNC_5(VAR_10, "input clock rate should not be zero\n");
  VAR_15 = -VAR_0;
  goto disable_clk;
 }

 VAR_11->clk_cycle = VAR_13 / VAR_12;
 FUNC_12(&VAR_11->comp);
 VAR_11->adap.owner = VAR_3;
 VAR_11->adap.algo = &VAR_6;
 VAR_11->adap.dev.parent = VAR_10;
 VAR_11->adap.dev.of_node = VAR_10->of_node;
 FUNC_16(VAR_11->adap.name, "UniPhier I2C", sizeof(VAR_11->adap.name));
 VAR_11->adap.bus_recovery_info = &VAR_7;
 FUNC_11(&VAR_11->adap, VAR_11);
 FUNC_15(VAR_9, VAR_11);

 FUNC_17(VAR_11);

 VAR_15 = FUNC_9(VAR_10, VAR_14, VAR_8, 0, VAR_9->name,
          VAR_11);
 if (VAR_15) {
  FUNC_5(VAR_10, "failed to request irq %d\n", VAR_14);
  goto disable_clk;
 }

 VAR_15 = FUNC_10(&VAR_11->adap);
disable_clk:
 if (VAR_15)
  FUNC_2(VAR_11->clk);

 return VAR_15;
}
