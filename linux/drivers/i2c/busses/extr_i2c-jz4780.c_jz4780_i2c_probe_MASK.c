
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {char* name; TYPE_3__ dev; } ;
struct TYPE_10__ {int of_node; TYPE_3__* parent; } ;
struct TYPE_11__ {int retries; int name; TYPE_1__ dev; struct jz4780_i2c* algo_data; int * algo; int owner; } ;
struct jz4780_i2c {unsigned int speed; int clk; TYPE_2__ adap; int irq; int iomem; int lock; int trans_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*,unsigned int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,struct resource*) ;
 struct jz4780_i2c* FUNC_9 (TYPE_3__*,int,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ,int ,int ,struct jz4780_i2c*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned short FUNC_13 (struct jz4780_i2c*,int ) ;
 int FUNC_14 (struct jz4780_i2c*) ;
 int FUNC_15 (struct jz4780_i2c*,int ,int) ;
 int FUNC_16 (int ,char*,unsigned int*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct jz4780_i2c*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_10)
{
 int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 unsigned short VAR_13;
 struct resource *VAR_14;
 struct jz4780_i2c *VAR_15;

 VAR_15 = FUNC_9(&VAR_10->dev, sizeof(struct jz4780_i2c), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->adap.owner = VAR_7;
 VAR_15->adap.algo = &VAR_8;
 VAR_15->adap.algo_data = VAR_15;
 VAR_15->adap.retries = 5;
 VAR_15->adap.dev.parent = &VAR_10->dev;
 VAR_15->adap.dev.of_node = VAR_10->dev.of_node;
 FUNC_21(VAR_15->adap.name, "%s", VAR_10->name);

 FUNC_12(&VAR_15->trans_waitq);
 FUNC_20(&VAR_15->lock);

 VAR_14 = FUNC_18(VAR_10, VAR_3, 0);
 VAR_15->iomem = FUNC_8(&VAR_10->dev, VAR_14);
 if (FUNC_0(VAR_15->iomem))
  return FUNC_1(VAR_15->iomem);

 FUNC_19(VAR_10, VAR_15);

 VAR_15->clk = FUNC_7(&VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_15->clk))
  return FUNC_1(VAR_15->clk);

 VAR_11 = FUNC_3(VAR_15->clk);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_16(VAR_10->dev.of_node, "clock-frequency",
       &VAR_12);
 if (VAR_11) {
  FUNC_4(&VAR_10->dev, "clock-frequency not specified in DT\n");
  goto err;
 }

 VAR_15->speed = VAR_12 / 1000;
 if (VAR_15->speed == 0) {
  VAR_11 = -VAR_0;
  FUNC_4(&VAR_10->dev, "clock-frequency minimum is 1000\n");
  goto err;
 }
 FUNC_14(VAR_15);

 FUNC_5(&VAR_10->dev, "Bus frequency is %d KHz\n", VAR_15->speed);

 VAR_13 = FUNC_13(VAR_15, VAR_4);
 VAR_13 &= ~VAR_5;
 FUNC_15(VAR_15, VAR_4, VAR_13);

 FUNC_15(VAR_15, VAR_6, 0x0);

 VAR_15->irq = FUNC_17(VAR_10, 0);
 VAR_11 = FUNC_10(&VAR_10->dev, VAR_15->irq, VAR_9, 0,
          FUNC_6(&VAR_10->dev), VAR_15);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_11(&VAR_15->adap);
 if (VAR_11 < 0)
  goto err;

 return 0;

err:
 FUNC_2(VAR_15->clk);
 return VAR_11;
}
