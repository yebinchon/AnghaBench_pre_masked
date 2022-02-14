
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int notifier_call; } ;
struct pm8941_pwrkey {int baseaddr; scalar_t__ irq; int code; TYPE_1__ reboot_notifier; TYPE_4__* input; TYPE_2__* data; void* regmap; int revision; TYPE_3__* dev; } ;
struct TYPE_15__ {int of_node; struct device* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device {int of_node; struct device* parent; } ;
struct TYPE_16__ {char* name; char* phys; } ;
struct TYPE_14__ {int pull_up_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 void* FUNC_2 (struct device*,int *) ;
 int FUNC_3 (TYPE_3__*,int) ;
 TYPE_4__* FUNC_4 (TYPE_3__*) ;
 struct pm8941_pwrkey* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,int,int *,int ,int ,char*,struct pm8941_pwrkey*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ,int) ;
 TYPE_2__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int*) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct pm8941_pwrkey*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (void*,int,int *) ;
 int FUNC_17 (void*,int,int,int) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_14)
{
 struct pm8941_pwrkey *VAR_15;
 bool VAR_16;
 struct device *VAR_17;
 u32 VAR_18;
 int VAR_19;

 if (FUNC_12(VAR_14->dev.of_node, "debounce", &VAR_18))
  VAR_18 = 15625;

 if (VAR_18 > 2000000 || VAR_18 == 0) {
  FUNC_1(&VAR_14->dev, "invalid debounce time: %u\n", VAR_18);
  return -VAR_0;
 }

 VAR_16 = FUNC_11(VAR_14->dev.of_node, "bias-pull-up");

 VAR_15 = FUNC_5(&VAR_14->dev, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->dev = &VAR_14->dev;
 VAR_15->data = FUNC_10(&VAR_14->dev);

 VAR_17 = VAR_14->dev.parent;
 VAR_15->regmap = FUNC_2(VAR_17, ((void*)0));
 if (!VAR_15->regmap) {





  VAR_15->regmap = FUNC_2(VAR_17->parent, ((void*)0));
  if (!VAR_15->regmap) {
   FUNC_1(&VAR_14->dev, "failed to locate regmap\n");
   return -VAR_1;
  }

  VAR_19 = FUNC_12(VAR_17->of_node,
          "reg", &VAR_15->baseaddr);
 } else {
  VAR_19 = FUNC_12(VAR_14->dev.of_node, "reg",
          &VAR_15->baseaddr);
 }
 if (VAR_19)
  return VAR_19;

 VAR_15->irq = FUNC_13(VAR_14, 0);
 if (VAR_15->irq < 0)
  return VAR_15->irq;

 VAR_19 = FUNC_16(VAR_15->regmap, VAR_15->baseaddr + VAR_10,
       &VAR_15->revision);
 if (VAR_19) {
  FUNC_1(&VAR_14->dev, "failed to set debounce: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_12(VAR_14->dev.of_node, "linux,code",
         &VAR_15->code);
 if (VAR_19) {
  FUNC_0(&VAR_14->dev,
   "no linux,code assuming power (%d)\n", VAR_19);
  VAR_15->code = VAR_6;
 }

 VAR_15->input = FUNC_4(&VAR_14->dev);
 if (!VAR_15->input) {
  FUNC_0(&VAR_14->dev, "unable to allocate input device\n");
  return -VAR_2;
 }

 FUNC_9(VAR_15->input, VAR_3, VAR_15->code);

 VAR_15->input->name = "pm8941_pwrkey";
 VAR_15->input->phys = "pm8941_pwrkey/input0";

 VAR_18 = (VAR_18 << 6) / VAR_11;
 VAR_18 = FUNC_7(VAR_18);

 VAR_19 = FUNC_17(VAR_15->regmap,
       VAR_15->baseaddr + VAR_7,
       VAR_8,
       VAR_18);
 if (VAR_19) {
  FUNC_1(&VAR_14->dev, "failed to set debounce: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_17(VAR_15->regmap,
       VAR_15->baseaddr + VAR_9,
       VAR_15->data->pull_up_bit,
       VAR_16 ? VAR_15->data->pull_up_bit : 0);
 if (VAR_19) {
  FUNC_1(&VAR_14->dev, "failed to set pull: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_6(&VAR_14->dev, VAR_15->irq,
       ((void*)0), VAR_12,
       VAR_5,
       "pm8941_pwrkey", VAR_15);
 if (VAR_19) {
  FUNC_1(&VAR_14->dev, "failed requesting IRQ: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_8(VAR_15->input);
 if (VAR_19) {
  FUNC_1(&VAR_14->dev, "failed to register input device: %d\n",
   VAR_19);
  return VAR_19;
 }

 VAR_15->reboot_notifier.notifier_call = VAR_13,
 VAR_19 = FUNC_15(&VAR_15->reboot_notifier);
 if (VAR_19) {
  FUNC_1(&VAR_14->dev, "failed to register reboot notifier: %d\n",
   VAR_19);
  return VAR_19;
 }

 FUNC_14(VAR_14, VAR_15);
 FUNC_3(&VAR_14->dev, 1);

 return 0;
}
