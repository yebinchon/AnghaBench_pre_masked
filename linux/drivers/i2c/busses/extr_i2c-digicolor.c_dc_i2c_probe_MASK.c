
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; TYPE_3__* parent; } ;
struct TYPE_9__ {struct dc_i2c* algo_data; TYPE_1__ dev; int * algo; int owner; int name; } ;
struct dc_i2c {int clk; TYPE_2__ adap; int regs; int done; int lock; TYPE_3__* dev; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct dc_i2c*) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,struct resource*) ;
 struct dc_i2c* FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (TYPE_3__*,int,int ,int ,int ,struct dc_i2c*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct device_node*,char*,int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct dc_i2c*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct dc_i2c *VAR_9;
 struct resource *VAR_10;
 int VAR_11 = 0, VAR_12;

 VAR_9 = FUNC_8(&VAR_7->dev, sizeof(struct dc_i2c), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 if (FUNC_12(VAR_7->dev.of_node, "clock-frequency",
     &VAR_9->frequency))
  VAR_9->frequency = VAR_0;

 VAR_9->dev = &VAR_7->dev;
 FUNC_15(VAR_7, VAR_9);

 FUNC_16(&VAR_9->lock);
 FUNC_11(&VAR_9->done);

 VAR_9->clk = FUNC_6(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_9->clk))
  return FUNC_1(VAR_9->clk);

 VAR_10 = FUNC_14(VAR_7, VAR_3, 0);
 VAR_9->regs = FUNC_7(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_9->regs))
  return FUNC_1(VAR_9->regs);

 VAR_12 = FUNC_13(VAR_7, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = FUNC_9(&VAR_7->dev, VAR_12, VAR_6, 0,
          FUNC_5(&VAR_7->dev), VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_17(VAR_9->adap.name, "Conexant Digicolor I2C adapter",
  sizeof(VAR_9->adap.name));
 VAR_9->adap.owner = VAR_4;
 VAR_9->adap.algo = &VAR_5;
 VAR_9->adap.dev.parent = &VAR_7->dev;
 VAR_9->adap.dev.of_node = VAR_8;
 VAR_9->adap.algo_data = VAR_9;

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_9->clk);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_10(&VAR_9->adap);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9->clk);
  return VAR_11;
 }

 return 0;
}
