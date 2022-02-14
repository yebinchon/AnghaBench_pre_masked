
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vf50_touch_device {int stop_touchscreen; TYPE_1__* pdev; } ;
struct input_dev {int name; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 struct vf50_touch_device* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct vf50_touch_device*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 struct vf50_touch_device *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = &VAR_1->pdev->dev;

 FUNC_0(VAR_2, "Input device %s opened, starting touch detection\n",
  VAR_0->name);

 VAR_1->stop_touchscreen = 0;


 FUNC_2(VAR_1);

 return 0;
}
