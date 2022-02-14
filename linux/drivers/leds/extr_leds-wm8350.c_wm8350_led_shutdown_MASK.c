
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_led {int value; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct wm8350_led* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct wm8350_led*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1)
{
 struct wm8350_led *VAR_2 = FUNC_0(VAR_1);

 VAR_2->value = VAR_0;
 FUNC_1(VAR_2);
}
