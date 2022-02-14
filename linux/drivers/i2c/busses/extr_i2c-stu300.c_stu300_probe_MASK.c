
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int nr; int * quirks; TYPE_1__ dev; int * algo; int name; int class; int owner; } ;
struct stu300_dev {int irq; int virtbase; struct i2c_adapter adapter; int cmd_err; int cmd_event; int cmd_issue_lock; struct platform_device* pdev; int clk; int speed; } ;
struct resource {int dummy; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {int id; TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,int,int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,struct resource*) ;
 struct stu300_dev* FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int ,int ,int ,struct stu300_dev*) ;
 int FUNC_11 (struct i2c_adapter*) ;
 int FUNC_12 (struct i2c_adapter*,struct stu300_dev*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct stu300_dev*) ;
 int VAR_9 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int) ;
 int VAR_10 ;
 int FUNC_18 (struct stu300_dev*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_13)
{
 struct stu300_dev *VAR_14;
 struct i2c_adapter *VAR_15;
 struct resource *VAR_16;
 int VAR_17;
 int VAR_18 = 0;

 VAR_14 = FUNC_9(&VAR_13->dev, sizeof(struct stu300_dev), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_17 = VAR_13->id;
 VAR_14->clk = FUNC_7(&VAR_13->dev, ((void*)0));
 if (FUNC_0(VAR_14->clk)) {
  FUNC_5(&VAR_13->dev, "could not retrieve i2c bus clock\n");
  return FUNC_1(VAR_14->clk);
 }

 VAR_14->pdev = VAR_13;
 VAR_16 = FUNC_14(VAR_13, VAR_4, 0);
 VAR_14->virtbase = FUNC_8(&VAR_13->dev, VAR_16);
 FUNC_4(&VAR_13->dev, "initialize bus device I2C%d on virtual "
  "base %p\n", VAR_17, VAR_14->virtbase);
 if (FUNC_0(VAR_14->virtbase))
  return FUNC_1(VAR_14->virtbase);

 VAR_14->irq = FUNC_13(VAR_13, 0);
 VAR_18 = FUNC_10(&VAR_13->dev, VAR_14->irq, VAR_11, 0, VAR_5, VAR_14);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_14->speed = VAR_9;

 FUNC_3(VAR_14->clk);
 VAR_18 = FUNC_18(VAR_14);
 FUNC_2(VAR_14->clk);
 if (VAR_18 != 0) {
  FUNC_5(&VAR_14->pdev->dev, "error initializing hardware.\n");
  return -VAR_0;
 }


 FUNC_16(&VAR_14->cmd_issue_lock);
 VAR_14->cmd_event = VAR_7;
 VAR_14->cmd_err = VAR_6;

 VAR_15 = &VAR_14->adapter;
 VAR_15->owner = VAR_8;

 VAR_15->class = VAR_3;
 FUNC_17(VAR_15->name, "ST Microelectronics DDC I2C adapter",
  sizeof(VAR_15->name));
 VAR_15->nr = VAR_17;
 VAR_15->algo = &VAR_10;
 VAR_15->dev.parent = &VAR_13->dev;
 VAR_15->dev.of_node = VAR_13->dev.of_node;
 VAR_15->quirks = &VAR_12;

 FUNC_12(VAR_15, VAR_14);


 VAR_18 = FUNC_11(VAR_15);
 if (VAR_18)
  return VAR_18;

 FUNC_15(VAR_13, VAR_14);
 FUNC_6(&VAR_13->dev, "ST DDC I2C @ %p, irq %d\n",
   VAR_14->virtbase, VAR_14->irq);

 return 0;
}
