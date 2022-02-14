
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {int data; } ;
struct TYPE_2__ {int base; int of_node; int direction_output; int set; int ngpio; int label; } ;
struct creg_gpio {TYPE_1__ gc; int lock; int layout; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,struct creg_gpio*,int ) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,TYPE_1__*,struct creg_gpio*) ;
 struct creg_gpio* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct of_device_id* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 const struct of_device_id *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct creg_gpio *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(VAR_8, sizeof(struct creg_gpio), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->regs = FUNC_7(VAR_6, 0);
 if (FUNC_0(VAR_9->regs))
  return FUNC_1(VAR_9->regs);

 VAR_7 = FUNC_8(VAR_4, VAR_6->dev.of_node);
 VAR_9->layout = VAR_7->data;
 if (!VAR_9->layout)
  return -VAR_0;

 VAR_11 = FUNC_9(VAR_8->of_node, "ngpios", &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_8, VAR_9, VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_10(&VAR_9->lock);

 VAR_9->gc.label = FUNC_4(VAR_8);
 VAR_9->gc.base = -1;
 VAR_9->gc.ngpio = VAR_10;
 VAR_9->gc.set = VAR_5;
 VAR_9->gc.direction_output = VAR_3;
 VAR_9->gc.of_node = VAR_8->of_node;

 VAR_11 = FUNC_5(VAR_8, &VAR_9->gc, VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_3(VAR_8, "GPIO controller with %d gpios probed\n", VAR_10);

 return 0;
}
