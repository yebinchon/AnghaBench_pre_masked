
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {struct device_node* of_node; TYPE_2__* parent; } ;
struct i2c_adapter {TYPE_1__ dev; int * algo; int owner; int name; } ;
struct wmt_i2c_dev {int complete; struct i2c_adapter adapter; int irq; TYPE_2__* dev; int mode; int clk; int base; } ;
struct resource {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,struct resource*) ;
 struct wmt_i2c_dev* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,char*,struct wmt_i2c_dev*) ;
 int FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (struct i2c_adapter*,struct wmt_i2c_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device_node*,int ) ;
 int FUNC_10 (struct device_node*,int ) ;
 int FUNC_11 (struct device_node*,char*,int*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct wmt_i2c_dev*) ;
 int FUNC_14 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (struct wmt_i2c_dev*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct wmt_i2c_dev *VAR_11;
 struct i2c_adapter *VAR_12;
 struct resource *VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_11 = FUNC_4(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_13 = FUNC_12(VAR_9, VAR_5, 0);
 VAR_11->base = FUNC_3(&VAR_9->dev, VAR_13);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 VAR_11->irq = FUNC_9(VAR_10, 0);
 if (!VAR_11->irq) {
  FUNC_2(&VAR_9->dev, "irq missing or invalid\n");
  return -VAR_0;
 }

 VAR_11->clk = FUNC_10(VAR_10, 0);
 if (FUNC_0(VAR_11->clk)) {
  FUNC_2(&VAR_9->dev, "unable to request clock\n");
  return FUNC_1(VAR_11->clk);
 }

 VAR_11->mode = VAR_4;
 VAR_14 = FUNC_11(VAR_10, "clock-frequency", &VAR_15);
 if ((!VAR_14) && (VAR_15 == 400000))
  VAR_11->mode = VAR_3;

 VAR_11->dev = &VAR_9->dev;

 VAR_14 = FUNC_5(&VAR_9->dev, VAR_11->irq, VAR_8, 0,
       "i2c", VAR_11);
 if (VAR_14) {
  FUNC_2(&VAR_9->dev, "failed to request irq %i\n", VAR_11->irq);
  return VAR_14;
 }

 VAR_12 = &VAR_11->adapter;
 FUNC_7(VAR_12, VAR_11);
 FUNC_14(VAR_12->name, "WMT I2C adapter", sizeof(VAR_12->name));
 VAR_12->owner = VAR_6;
 VAR_12->algo = &VAR_7;
 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->dev.of_node = VAR_9->dev.of_node;

 FUNC_8(&VAR_11->complete);

 VAR_14 = FUNC_15(VAR_11);
 if (VAR_14) {
  FUNC_2(&VAR_9->dev, "error initializing hardware\n");
  return VAR_14;
 }

 VAR_14 = FUNC_6(VAR_12);
 if (VAR_14)
  return VAR_14;

 FUNC_13(VAR_9, VAR_11);

 return 0;
}
