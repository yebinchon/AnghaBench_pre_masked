
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_9__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int retries; int name; TYPE_1__ dev; int * algo; int owner; } ;
struct mtk_i2c {int bus_freq; struct i2c_adapter adap; TYPE_2__* dev; int clk; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,struct resource*) ;
 struct mtk_i2c* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (struct i2c_adapter*) ;
 int FUNC_11 (struct i2c_adapter*,struct mtk_i2c*) ;
 int VAR_5 ;
 int FUNC_12 (struct mtk_i2c*) ;
 scalar_t__ FUNC_13 (int ,char*,int*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct mtk_i2c*) ;
 int FUNC_16 (int ,int ,int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_6)
{
 struct resource *VAR_7;
 struct mtk_i2c *VAR_8;
 struct i2c_adapter *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_14(VAR_6, VAR_3, 0);

 VAR_8 = FUNC_9(&VAR_6->dev, sizeof(struct mtk_i2c), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->base = FUNC_8(&VAR_6->dev, VAR_7);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->clk = FUNC_7(&VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk)) {
  FUNC_3(&VAR_6->dev, "no clock defined\n");
  return FUNC_1(VAR_8->clk);
 }
 VAR_10 = FUNC_2(VAR_8->clk);
 if (VAR_10) {
  FUNC_3(&VAR_6->dev, "Unable to enable clock\n");
  return VAR_10;
 }

 VAR_8->dev = &VAR_6->dev;

 if (FUNC_13(VAR_6->dev.of_node, "clock-frequency",
     &VAR_8->bus_freq))
  VAR_8->bus_freq = 100000;

 if (VAR_8->bus_freq == 0) {
  FUNC_6(VAR_8->dev, "clock-frequency 0 not supported\n");
  return -VAR_0;
 }

 VAR_9 = &VAR_8->adap;
 VAR_9->owner = VAR_4;
 VAR_9->algo = &VAR_5;
 VAR_9->retries = 3;
 VAR_9->dev.parent = &VAR_6->dev;
 FUNC_11(VAR_9, VAR_8);
 VAR_9->dev.of_node = VAR_6->dev.of_node;
 FUNC_16(VAR_9->name, FUNC_5(&VAR_6->dev), sizeof(VAR_9->name));

 FUNC_15(VAR_6, VAR_8);

 FUNC_12(VAR_8);

 VAR_10 = FUNC_10(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_4(&VAR_6->dev, "clock %u kHz\n", VAR_8->bus_freq / 1000);

 return VAR_10;
}
