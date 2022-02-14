
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_4__ {int of_node; struct device* parent; } ;
struct TYPE_5__ {int name; TYPE_1__ dev; int * quirks; int timeout; int * algo; int owner; } ;
struct owl_i2c_dev {scalar_t__ bus_freq; int clk; TYPE_2__ adap; int lock; int msg_complete; int clk_rate; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct device*,struct resource*) ;
 struct owl_i2c_dev* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int ,int ,int ,struct owl_i2c_dev*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,struct owl_i2c_dev*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,char*,scalar_t__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct owl_i2c_dev*) ;
 int FUNC_17 (int ,int,char*,char*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct owl_i2c_dev *VAR_13;
 struct resource *VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_8(VAR_12, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_15(VAR_11, VAR_3, 0);
 VAR_13->base = FUNC_7(VAR_12, VAR_14);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 VAR_16 = FUNC_14(VAR_11, 0);
 if (VAR_16 < 0) {
  FUNC_5(VAR_12, "failed to get IRQ number\n");
  return VAR_16;
 }

 if (FUNC_13(VAR_12->of_node, "clock-frequency",
     &VAR_13->bus_freq))
  VAR_13->bus_freq = VAR_4;


 if (VAR_13->bus_freq != VAR_4 &&
     VAR_13->bus_freq != VAR_5) {
  FUNC_5(VAR_12, "invalid clock-frequency %d\n", VAR_13->bus_freq);
  return -VAR_0;
 }

 VAR_13->clk = FUNC_6(VAR_12, ((void*)0));
 if (FUNC_0(VAR_13->clk)) {
  FUNC_5(VAR_12, "failed to get clock\n");
  return FUNC_1(VAR_13->clk);
 }

 VAR_15 = FUNC_4(VAR_13->clk);
 if (VAR_15)
  return VAR_15;

 VAR_13->clk_rate = FUNC_3(VAR_13->clk);
 if (!VAR_13->clk_rate) {
  FUNC_5(VAR_12, "input clock rate should not be zero\n");
  VAR_15 = -VAR_0;
  goto disable_clk;
 }

 FUNC_12(&VAR_13->msg_complete);
 FUNC_18(&VAR_13->lock);
 VAR_13->adap.owner = VAR_7;
 VAR_13->adap.algo = &VAR_8;
 VAR_13->adap.timeout = VAR_6;
 VAR_13->adap.quirks = &VAR_10;
 VAR_13->adap.dev.parent = VAR_12;
 VAR_13->adap.dev.of_node = VAR_12->of_node;
 FUNC_17(VAR_13->adap.name, sizeof(VAR_13->adap.name),
   "%s", "OWL I2C adapter");
 FUNC_11(&VAR_13->adap, VAR_13);

 FUNC_16(VAR_11, VAR_13);

 VAR_15 = FUNC_9(VAR_12, VAR_16, VAR_9, 0, VAR_11->name,
          VAR_13);
 if (VAR_15) {
  FUNC_5(VAR_12, "failed to request irq %d\n", VAR_16);
  goto disable_clk;
 }

 return FUNC_10(&VAR_13->adap);

disable_clk:
 FUNC_2(VAR_13->clk);

 return VAR_15;
}
