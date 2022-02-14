
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
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,int) ;
 struct input_dev* FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int ,char*,struct input_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct input_dev *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(VAR_5, "press");
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_6(VAR_5, "release");
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = FUNC_2(&VAR_5->dev);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->name = "NI Ettus Research USRP E3x0 Button Driver";
 VAR_6->phys = "e3x0_button/input0";
 VAR_6->dev.parent = &VAR_5->dev;

 FUNC_5(VAR_6, VAR_1, VAR_2);

 VAR_9 = FUNC_3(&VAR_5->dev, VAR_7,
     VAR_3, 0,
     "e3x0-button", VAR_6);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev, "Failed to request 'press' IRQ#%d: %d\n",
   VAR_7, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(&VAR_5->dev, VAR_8,
     VAR_4, 0,
     "e3x0-button", VAR_6);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev, "Failed to request 'release' IRQ#%d: %d\n",
   VAR_8, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev, "Can't register input device: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_1(&VAR_5->dev, 1);
 return 0;
}
