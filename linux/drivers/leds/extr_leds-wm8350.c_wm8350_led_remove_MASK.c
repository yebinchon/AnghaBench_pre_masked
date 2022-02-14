
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_led {int cdev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct wm8350_led* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct wm8350_led*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct wm8350_led *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->cdev);
 FUNC_2(VAR_1);
 return 0;
}
