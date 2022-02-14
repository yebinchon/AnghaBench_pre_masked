
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_18__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_17__ {TYPE_2__* parent; struct device_node* of_node; } ;
struct TYPE_19__ {int retries; TYPE_1__ dev; struct hix5hd2_i2c_priv* algo_data; int * algo; int owner; int name; } ;
struct hix5hd2_i2c_priv {int freq; int clk; TYPE_2__* dev; TYPE_8__ adap; int msg_complete; int lock; int regs; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*,unsigned int) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,struct resource*) ;
 struct hix5hd2_i2c_priv* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,struct hix5hd2_i2c_priv*) ;
 int VAR_7 ;
 int FUNC_11 (struct hix5hd2_i2c_priv*) ;
 int VAR_8 ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (TYPE_8__*,struct hix5hd2_i2c_priv*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct device_node*,char*,unsigned int*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct hix5hd2_i2c_priv*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,char*,int) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct hix5hd2_i2c_priv *VAR_11;
 struct resource *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_9(&VAR_9->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 if (FUNC_15(VAR_10, "clock-frequency", &VAR_13)) {

  VAR_11->freq = 100000;
 } else {
  if (VAR_13 > VAR_2) {
   VAR_11->freq = VAR_2;
   FUNC_6(VAR_11->dev, "use max freq %d instead\n",
     VAR_2);
  } else {
   VAR_11->freq = VAR_13;
  }
 }

 VAR_12 = FUNC_17(VAR_9, VAR_3, 0);
 VAR_11->regs = FUNC_8(&VAR_9->dev, VAR_12);
 if (FUNC_0(VAR_11->regs))
  return FUNC_1(VAR_11->regs);

 VAR_14 = FUNC_16(VAR_9, 0);
 if (VAR_14 <= 0) {
  FUNC_4(&VAR_9->dev, "cannot find HS-I2C IRQ\n");
  return VAR_14;
 }

 VAR_11->clk = FUNC_7(&VAR_9->dev, ((void*)0));
 if (FUNC_0(VAR_11->clk)) {
  FUNC_4(&VAR_9->dev, "cannot get clock\n");
  return FUNC_1(VAR_11->clk);
 }
 FUNC_3(VAR_11->clk);

 FUNC_26(VAR_11->adap.name, "hix5hd2-i2c", sizeof(VAR_11->adap.name));
 VAR_11->dev = &VAR_9->dev;
 VAR_11->adap.owner = VAR_6;
 VAR_11->adap.algo = &VAR_7;
 VAR_11->adap.retries = 3;
 VAR_11->adap.dev.of_node = VAR_10;
 VAR_11->adap.algo_data = VAR_11;
 VAR_11->adap.dev.parent = &VAR_9->dev;
 FUNC_13(&VAR_11->adap, VAR_11);
 FUNC_18(VAR_9, VAR_11);
 FUNC_25(&VAR_11->lock);
 FUNC_14(&VAR_11->msg_complete);

 FUNC_11(VAR_11);

 VAR_15 = FUNC_10(&VAR_9->dev, VAR_14, VAR_8,
          VAR_4, FUNC_5(&VAR_9->dev), VAR_11);
 if (VAR_15 != 0) {
  FUNC_4(&VAR_9->dev, "cannot request HS-I2C IRQ %d\n", VAR_14);
  goto err_clk;
 }

 FUNC_22(VAR_11->dev, VAR_5);
 FUNC_24(VAR_11->dev);
 FUNC_21(VAR_11->dev);
 FUNC_20(VAR_11->dev);

 VAR_15 = FUNC_12(&VAR_11->adap);
 if (VAR_15 < 0)
  goto err_runtime;

 return VAR_15;

err_runtime:
 FUNC_19(VAR_11->dev);
 FUNC_23(VAR_11->dev);
err_clk:
 FUNC_2(VAR_11->clk);
 return VAR_15;
}
