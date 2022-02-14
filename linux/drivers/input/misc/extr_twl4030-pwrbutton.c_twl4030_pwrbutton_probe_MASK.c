
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct input_dev {char* name; char* phys; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 struct input_dev* FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *,int ,int,char*,struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct input_dev *VAR_8;
 int VAR_9 = FUNC_6(VAR_7, 0);
 int VAR_10;

 VAR_8 = FUNC_2(&VAR_7->dev);
 if (!VAR_8) {
  FUNC_0(&VAR_7->dev, "Can't allocate power button\n");
  return -VAR_0;
 }

 FUNC_5(VAR_8, VAR_1, VAR_5);
 VAR_8->name = "twl4030_pwrbutton";
 VAR_8->phys = "twl4030_pwrbutton/input0";
 VAR_8->dev.parent = &VAR_7->dev;

 VAR_10 = FUNC_3(&VAR_7->dev, VAR_9, ((void*)0), VAR_6,
   VAR_3 | VAR_4 |
   VAR_2,
   "twl4030_pwrbutton", VAR_8);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_7->dev, "Can't get IRQ for pwrbutton: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10) {
  FUNC_0(&VAR_7->dev, "Can't register power button: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_1(&VAR_7->dev, 1);

 return 0;
}
