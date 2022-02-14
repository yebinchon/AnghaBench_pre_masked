
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vf50_touch_device {int stop_touchscreen; int gpio_ym; int pen_irq; TYPE_1__* pdev; } ;
struct input_dev {int name; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 struct vf50_touch_device* FUNC_2 (struct input_dev*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_0)
{
 struct vf50_touch_device *VAR_1 = FUNC_2(VAR_0);
 struct device *VAR_2 = &VAR_1->pdev->dev;

 VAR_1->stop_touchscreen = 1;


 FUNC_3();
 FUNC_5(VAR_1->pen_irq);

 FUNC_1(VAR_1->gpio_ym, 0);
 FUNC_4(VAR_2);

 FUNC_0(VAR_2, "Input device %s closed, disable touch detection\n",
  VAR_0->name);
}
