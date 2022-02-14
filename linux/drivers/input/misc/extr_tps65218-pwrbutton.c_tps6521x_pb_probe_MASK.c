
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tps6521x_pwrbutton {TYPE_3__* data; struct input_dev* idev; struct device* dev; int regmap; int phys; } ;
struct device {int parent; int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {TYPE_3__* data; } ;
struct TYPE_5__ {int bustype; } ;
struct TYPE_4__ {struct device* parent; } ;
struct input_dev {char* name; TYPE_2__ id; TYPE_1__ dev; int phys; } ;
struct TYPE_6__ {char* name; } ;


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
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct device*,int) ;
 struct input_dev* FUNC_3 (struct device*) ;
 struct tps6521x_pwrbutton* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int *,int ,int,char*,struct tps6521x_pwrbutton*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 struct of_device_id* FUNC_8 (int ,int ) ;
 int VAR_10 ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (int ,int,char*,char*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct tps6521x_pwrbutton *VAR_14;
 struct input_dev *VAR_15;
 const struct of_device_id *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_16 = FUNC_8(VAR_10, VAR_13->of_node);
 if (!VAR_16)
  return -VAR_3;

 VAR_14 = FUNC_4(VAR_13, sizeof(*VAR_14), VAR_5);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->data = VAR_16->data;

 VAR_15 = FUNC_3(VAR_13);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->name = VAR_14->data->name;
 FUNC_10(VAR_14->phys, sizeof(VAR_14->phys), "%s/input0",
  VAR_14->data->name);
 VAR_15->phys = VAR_14->phys;
 VAR_15->dev.parent = VAR_13;
 VAR_15->id.bustype = VAR_0;

 FUNC_7(VAR_15, VAR_4, VAR_9);

 VAR_14->regmap = FUNC_1(VAR_13->parent, ((void*)0));
 VAR_14->dev = VAR_13;
 VAR_14->idev = VAR_15;
 FUNC_2(VAR_13, 1);

 VAR_18 = FUNC_9(VAR_12, 0);
 if (VAR_18 < 0)
  return -VAR_1;

 VAR_17 = FUNC_5(VAR_13, VAR_18, ((void*)0), VAR_11,
       VAR_8 |
      VAR_7 |
      VAR_6,
       VAR_14->data->name, VAR_14);
 if (VAR_17) {
  FUNC_0(VAR_13, "failed to request IRQ #%d: %d\n", VAR_18, VAR_17);
  return VAR_17;
 }

 VAR_17= FUNC_6(VAR_15);
 if (VAR_17) {
  FUNC_0(VAR_13, "Can't register power button: %d\n", VAR_17);
  return VAR_17;
 }

 return 0;
}
