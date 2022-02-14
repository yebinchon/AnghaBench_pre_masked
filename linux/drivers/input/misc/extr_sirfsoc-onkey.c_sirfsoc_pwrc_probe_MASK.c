
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sirfsoc_pwrc_drvdata {TYPE_1__* input; int work; int pwrc_base; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {char* name; char* phys; int close; int open; int * evbit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,struct sirfsoc_pwrc_drvdata*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 TYPE_1__* FUNC_6 (TYPE_4__*) ;
 struct sirfsoc_pwrc_drvdata* FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_4__*,int,int ,int ,char*,struct sirfsoc_pwrc_drvdata*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (TYPE_1__*,struct sirfsoc_pwrc_drvdata*) ;
 int FUNC_12 (struct device_node*,char*,int *) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (struct sirfsoc_pwrc_drvdata*,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct sirfsoc_pwrc_drvdata *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_7(&VAR_8->dev, sizeof(struct sirfsoc_pwrc_drvdata),
          VAR_2);
 if (!VAR_10) {
  FUNC_3(&VAR_8->dev, "Not enough memory for the device data\n");
  return -VAR_0;
 }





 VAR_12 = FUNC_12(VAR_9, "reg", &VAR_10->pwrc_base);
 if (VAR_12) {
  FUNC_2(&VAR_8->dev,
   "unable to find base address of pwrc node in dtb\n");
  return VAR_12;
 }

 VAR_10->input = FUNC_6(&VAR_8->dev);
 if (!VAR_10->input)
  return -VAR_0;

 VAR_10->input->name = "sirfsoc pwrckey";
 VAR_10->input->phys = "pwrc/input0";
 VAR_10->input->evbit[0] = FUNC_0(VAR_1);
 FUNC_10(VAR_10->input, VAR_1, VAR_3);

 FUNC_1(&VAR_10->work, VAR_7);

 VAR_10->input->open = VAR_6;
 VAR_10->input->close = VAR_4;

 FUNC_11(VAR_10->input, VAR_10);


 FUNC_14(VAR_10, 0);

 VAR_11 = FUNC_13(VAR_8, 0);
 VAR_12 = FUNC_8(&VAR_8->dev, VAR_11,
     VAR_5, 0,
     "sirfsoc_pwrc_int", VAR_10);
 if (VAR_12) {
  FUNC_2(&VAR_8->dev, "unable to claim irq %d, error: %d\n",
   VAR_11, VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_9(VAR_10->input);
 if (VAR_12) {
  FUNC_2(&VAR_8->dev,
   "unable to register input device, error: %d\n",
   VAR_12);
  return VAR_12;
 }

 FUNC_4(&VAR_8->dev, VAR_10);
 FUNC_5(&VAR_8->dev, 1);

 return 0;
}
