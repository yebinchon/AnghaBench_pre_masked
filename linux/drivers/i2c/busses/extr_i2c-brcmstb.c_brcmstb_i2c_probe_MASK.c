
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {char const* name; TYPE_2__ dev; } ;
struct TYPE_9__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {TYPE_1__ dev; int * algo; int name; int owner; } ;
struct brcmstb_i2c_dev {int irq; int data_regsz; int clk_freq_hz; TYPE_2__* device; struct i2c_adapter adapter; int base; int done; void* bsc_regmap; } ;
struct TYPE_11__ {int hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct brcmstb_i2c_dev*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct brcmstb_i2c_dev*) ;
 TYPE_8__* VAR_8 ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,char const*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 void* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (TYPE_2__*,int,int ,int ,char const*,struct brcmstb_i2c_dev*) ;
 int FUNC_9 (struct i2c_adapter*) ;
 int FUNC_10 (struct i2c_adapter*,struct brcmstb_i2c_dev*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*,char const**) ;
 scalar_t__ FUNC_14 (int ,char*,int *) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct brcmstb_i2c_dev*) ;
 int FUNC_18 (int ,char const*,int) ;
 int FUNC_19 (int ,char*,int) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_9)
{
 int VAR_10 = 0;
 struct brcmstb_i2c_dev *VAR_11;
 struct i2c_adapter *VAR_12;
 struct resource *VAR_13;
 const char *VAR_14;


 VAR_11 = FUNC_7(&VAR_9->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->bsc_regmap = FUNC_7(&VAR_9->dev, sizeof(*VAR_11->bsc_regmap), VAR_1);
 if (!VAR_11->bsc_regmap)
  return -VAR_0;

 FUNC_17(VAR_9, VAR_11);
 VAR_11->device = &VAR_9->dev;
 FUNC_11(&VAR_11->done);


 VAR_13 = FUNC_16(VAR_9, VAR_3, 0);
 VAR_11->base = FUNC_6(VAR_11->device, VAR_13);
 if (FUNC_0(VAR_11->base)) {
  VAR_10 = -VAR_0;
  goto probe_errorout;
 }

 VAR_10 = FUNC_13(VAR_11->device->of_node, "interrupt-names",
         &VAR_14);
 if (VAR_10 < 0)
  VAR_14 = ((void*)0);


 VAR_11->irq = FUNC_15(VAR_9, 0);


 FUNC_1(VAR_11, VAR_2);


 VAR_10 = FUNC_8(&VAR_9->dev, VAR_11->irq, VAR_7,
         VAR_4,
         VAR_14 ? VAR_14 : VAR_9->name,
         VAR_11);

 if (VAR_10) {
  FUNC_3(VAR_11->device, "falling back to polling mode");
  VAR_11->irq = -1;
 }

 if (FUNC_14(VAR_11->device->of_node,
     "clock-frequency", &VAR_11->clk_freq_hz)) {
  FUNC_5(VAR_11->device, "setting clock-frequency@%dHz\n",
    VAR_8[0].hz);
  VAR_11->clk_freq_hz = VAR_8[0].hz;
 }


 if (FUNC_12(VAR_11->device->of_node,
        "brcmstb,brcmper-i2c"))
  VAR_11->data_regsz = sizeof(u8);
 else
  VAR_11->data_regsz = sizeof(u32);

 FUNC_2(VAR_11);


 VAR_12 = &VAR_11->adapter;
 FUNC_10(VAR_12, VAR_11);
 VAR_12->owner = VAR_5;
 FUNC_19(VAR_12->name, "Broadcom STB : ", sizeof(VAR_12->name));
 if (VAR_14)
  FUNC_18(VAR_12->name, VAR_14, sizeof(VAR_12->name));
 VAR_12->algo = &VAR_6;
 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->dev.of_node = VAR_9->dev.of_node;
 VAR_10 = FUNC_9(VAR_12);
 if (VAR_10)
  goto probe_errorout;

 FUNC_4(VAR_11->device, "%s@%dhz registered in %s mode\n",
   VAR_14 ? VAR_14 : " ", VAR_11->clk_freq_hz,
   (VAR_11->irq >= 0) ? "interrupt" : "polling");

 return 0;

probe_errorout:
 return VAR_10;
}
