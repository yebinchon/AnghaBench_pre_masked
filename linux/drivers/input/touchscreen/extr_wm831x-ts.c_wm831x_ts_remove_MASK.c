
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_ts {int data_irq; int pd_irq; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ,struct wm831x_ts*) ;
 struct wm831x_ts* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct wm831x_ts *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pd_irq, VAR_1);
 FUNC_0(VAR_1->data_irq, VAR_1);

 return 0;
}
