
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {struct device_node* of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int timeout; int name; TYPE_1__ dev; int * bus_recovery_info; int * algo; scalar_t__ retries; int owner; } ;
struct st_i2c_dev {TYPE_2__* dev; int complete; struct i2c_adapter adap; int irq; int mode; int clk; int base; } ;
struct resource {int start; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,struct resource*) ;
 struct st_i2c_dev* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int ,int ,int ,struct st_i2c_dev*) ;
 int FUNC_7 (struct i2c_adapter*) ;
 int FUNC_8 (struct i2c_adapter*,struct st_i2c_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct device_node*,int ) ;
 int FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct device_node*,char*,int*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct st_i2c_dev*) ;
 int FUNC_17 (int ,int,char*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (struct device_node*,struct st_i2c_dev*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_12)
{
 struct device_node *VAR_13 = VAR_12->dev.of_node;
 struct st_i2c_dev *VAR_14;
 struct resource *VAR_15;
 u32 VAR_16;
 struct i2c_adapter *VAR_17;
 int VAR_18;

 VAR_14 = FUNC_5(&VAR_12->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_15 = FUNC_15(VAR_12, VAR_6, 0);
 VAR_14->base = FUNC_4(&VAR_12->dev, VAR_15);
 if (FUNC_0(VAR_14->base))
  return FUNC_1(VAR_14->base);

 VAR_14->irq = FUNC_10(VAR_13, 0);
 if (!VAR_14->irq) {
  FUNC_2(&VAR_12->dev, "IRQ missing or invalid\n");
  return -VAR_0;
 }

 VAR_14->clk = FUNC_11(VAR_13, "ssc");
 if (FUNC_0(VAR_14->clk)) {
  FUNC_2(&VAR_12->dev, "Unable to request clock\n");
  return FUNC_1(VAR_14->clk);
 }

 VAR_14->mode = VAR_5;
 VAR_18 = FUNC_12(VAR_13, "clock-frequency", &VAR_16);
 if ((!VAR_18) && (VAR_16 == 400000))
  VAR_14->mode = VAR_4;

 VAR_14->dev = &VAR_12->dev;

 VAR_18 = FUNC_6(&VAR_12->dev, VAR_14->irq,
   ((void*)0), VAR_10,
   VAR_7, VAR_12->name, VAR_14);
 if (VAR_18) {
  FUNC_2(&VAR_12->dev, "Failed to request irq %i\n", VAR_14->irq);
  return VAR_18;
 }

 FUNC_13(VAR_14->dev);

 FUNC_14(VAR_14->dev);

 VAR_18 = FUNC_18(VAR_13, VAR_14);
 if (VAR_18)
  return VAR_18;

 VAR_17 = &VAR_14->adap;
 FUNC_8(VAR_17, VAR_14);
 FUNC_17(VAR_17->name, sizeof(VAR_17->name), "ST I2C(%pa)", &VAR_15->start);
 VAR_17->owner = VAR_8;
 VAR_17->timeout = 2 * VAR_3;
 VAR_17->retries = 0;
 VAR_17->algo = &VAR_9;
 VAR_17->bus_recovery_info = &VAR_11;
 VAR_17->dev.parent = &VAR_12->dev;
 VAR_17->dev.of_node = VAR_12->dev.of_node;

 FUNC_9(&VAR_14->complete);

 VAR_18 = FUNC_7(VAR_17);
 if (VAR_18)
  return VAR_18;

 FUNC_16(VAR_12, VAR_14);

 FUNC_3(VAR_14->dev, "%s initialized\n", VAR_17->name);

 return 0;
}
