
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; char* phys; int dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;
 struct input_dev* FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int,char*,struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct platform_device*,int) ;
 int FUNC_7 (struct platform_device*,struct input_dev*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 struct input_dev *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 VAR_10 = FUNC_2(&VAR_9->dev);
 if (!VAR_10) {
  FUNC_0(&VAR_9->dev, "Can't allocate power button\n");
  return -VAR_1;
 }

 VAR_10->name = "rk805 pwrkey";
 VAR_10->phys = "rk805_pwrkey/input0";
 VAR_10->id.bustype = VAR_0;
 FUNC_5(VAR_10, VAR_2, VAR_6);

 VAR_11 = FUNC_6(VAR_9, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = FUNC_6(VAR_9, 1);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 = FUNC_3(&VAR_10->dev, VAR_11,
        VAR_7,
        VAR_4 | VAR_3,
        "rk805_pwrkey_fall", VAR_10);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->dev, "Can't register fall irq: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_3(&VAR_10->dev, VAR_12,
        VAR_8,
        VAR_5 | VAR_3,
        "rk805_pwrkey_rise", VAR_10);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->dev, "Can't register rise irq: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_10);
 if (VAR_13) {
  FUNC_0(&VAR_9->dev, "Can't register power button: %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_7(VAR_9, VAR_10);
 FUNC_1(&VAR_9->dev, 1);

 return 0;
}
