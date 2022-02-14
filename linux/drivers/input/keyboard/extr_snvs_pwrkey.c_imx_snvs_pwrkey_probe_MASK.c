
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct pwrkey_drv_data {scalar_t__ irq; int wakeup; struct input_dev* input; int keycode; int check_timer; int snvs; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct TYPE_10__ {int bustype; } ;
struct input_dev {char* phys; TYPE_1__ id; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,struct pwrkey_drv_data*) ;
 struct input_dev* FUNC_7 (TYPE_2__*) ;
 struct pwrkey_drv_data* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int ,int ,int ,struct platform_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int FUNC_12 (struct device_node*,char*) ;
 scalar_t__ FUNC_13 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct pwrkey_drv_data*) ;
 int FUNC_16 (int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (struct device_node*,char*) ;
 int FUNC_19 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_14)
{
 struct pwrkey_drv_data *VAR_15 = ((void*)0);
 struct input_dev *VAR_16 = ((void*)0);
 struct device_node *VAR_17;
 int VAR_18;


 VAR_17 = VAR_14->dev.of_node;
 if (!VAR_17)
  return -VAR_2;

 VAR_15 = FUNC_8(&VAR_14->dev, sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_3;

 VAR_15->snvs = FUNC_18(VAR_17, "regmap");
 if (FUNC_0(VAR_15->snvs)) {
  FUNC_2(&VAR_14->dev, "Can't get snvs syscon\n");
  return FUNC_1(VAR_15->snvs);
 }

 if (FUNC_13(VAR_17, "linux,keycode", &VAR_15->keycode)) {
  VAR_15->keycode = VAR_6;
  FUNC_4(&VAR_14->dev, "KEY_POWER without setting in dts\n");
 }

 VAR_15->wakeup = FUNC_12(VAR_17, "wakeup-source");

 VAR_15->irq = FUNC_14(VAR_14, 0);
 if (VAR_15->irq < 0)
  return -VAR_1;

 FUNC_16(VAR_15->snvs, VAR_8, VAR_7, VAR_7);


 FUNC_17(VAR_15->snvs, VAR_9, VAR_10);

 FUNC_19(&VAR_15->check_timer, VAR_11, 0);

 VAR_16 = FUNC_7(&VAR_14->dev);
 if (!VAR_16) {
  FUNC_2(&VAR_14->dev, "failed to allocate the input device\n");
  return -VAR_3;
 }

 VAR_16->name = VAR_14->name;
 VAR_16->phys = "snvs-pwrkey/input0";
 VAR_16->id.bustype = VAR_0;

 FUNC_11(VAR_16, VAR_4, VAR_15->keycode);


 VAR_18 = FUNC_6(&VAR_14->dev, VAR_12, VAR_15);
 if (VAR_18) {
  FUNC_2(&VAR_14->dev, "failed to register remove action\n");
  return VAR_18;
 }

 VAR_15->input = VAR_16;
 FUNC_15(VAR_14, VAR_15);

 VAR_18 = FUNC_9(&VAR_14->dev, VAR_15->irq,
          VAR_13,
          0, VAR_14->name, VAR_14);

 if (VAR_18) {
  FUNC_2(&VAR_14->dev, "interrupt not available.\n");
  return VAR_18;
 }

 VAR_18 = FUNC_10(VAR_16);
 if (VAR_18 < 0) {
  FUNC_2(&VAR_14->dev, "failed to register input device\n");
  return VAR_18;
 }

 FUNC_5(&VAR_14->dev, VAR_15->wakeup);
 VAR_18 = FUNC_3(&VAR_14->dev, VAR_15->irq);
 if (VAR_18)
  FUNC_2(&VAR_14->dev, "irq wake enable failed.\n");

 return 0;
}
