
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_20__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct TYPE_19__ {int of_node; TYPE_1__* parent; } ;
struct TYPE_18__ {TYPE_16__ dev; int name; int * algo; int owner; } ;
struct lpi2c_imx_struct {int txfifosize; int rxfifosize; TYPE_11__ adapter; scalar_t__ base; scalar_t__ clk; int bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_16__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 struct lpi2c_imx_struct* FUNC_6 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (TYPE_1__*,int,int ,int ,int ,struct lpi2c_imx_struct*) ;
 int FUNC_9 (TYPE_11__*) ;
 int FUNC_10 (TYPE_11__*,struct lpi2c_imx_struct*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,char*,int *) ;
 int FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct lpi2c_imx_struct*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,int ) ;
 int FUNC_23 (TYPE_1__*) ;
 unsigned int FUNC_24 (scalar_t__) ;
 int FUNC_25 (int ,int ,int) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_8)
{
 struct lpi2c_imx_struct *VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->base = FUNC_7(VAR_8, 0);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_11 = FUNC_12(VAR_8, 0);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_8->dev, "can't get irq number\n");
  return VAR_11;
 }

 VAR_9->adapter.owner = VAR_5;
 VAR_9->adapter.algo = &VAR_6;
 VAR_9->adapter.dev.parent = &VAR_8->dev;
 VAR_9->adapter.dev.of_node = VAR_8->dev.of_node;
 FUNC_25(VAR_9->adapter.name, VAR_8->name,
  sizeof(VAR_9->adapter.name));

 VAR_9->clk = FUNC_5(&VAR_8->dev, ((void*)0));
 if (FUNC_0(VAR_9->clk)) {
  FUNC_3(&VAR_8->dev, "can't get I2C peripheral clock\n");
  return FUNC_1(VAR_9->clk);
 }

 VAR_12 = FUNC_11(VAR_8->dev.of_node,
       "clock-frequency", &VAR_9->bitrate);
 if (VAR_12)
  VAR_9->bitrate = VAR_3;

 VAR_12 = FUNC_8(&VAR_8->dev, VAR_11, VAR_7, 0,
          VAR_8->name, VAR_9);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "can't claim irq %d\n", VAR_11);
  return VAR_12;
 }

 FUNC_10(&VAR_9->adapter, VAR_9);
 FUNC_13(VAR_8, VAR_9);

 VAR_12 = FUNC_2(VAR_9->clk);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "clk enable failed %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_22(&VAR_8->dev, VAR_2);
 FUNC_23(&VAR_8->dev);
 FUNC_17(&VAR_8->dev);
 FUNC_21(&VAR_8->dev);
 FUNC_16(&VAR_8->dev);

 VAR_10 = FUNC_24(VAR_9->base + VAR_4);
 VAR_9->txfifosize = 1 << (VAR_10 & 0x0f);
 VAR_9->rxfifosize = 1 << ((VAR_10 >> 8) & 0x0f);

 VAR_12 = FUNC_9(&VAR_9->adapter);
 if (VAR_12)
  goto rpm_disable;

 FUNC_18(&VAR_8->dev);
 FUNC_20(&VAR_8->dev);

 FUNC_4(&VAR_9->adapter.dev, "LPI2C adapter registered\n");

 return 0;

rpm_disable:
 FUNC_19(&VAR_8->dev);
 FUNC_14(&VAR_8->dev);
 FUNC_15(&VAR_8->dev);

 return VAR_12;
}
