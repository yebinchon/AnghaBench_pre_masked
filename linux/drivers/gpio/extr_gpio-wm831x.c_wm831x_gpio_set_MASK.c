
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_gpio {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct wm831x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct wm831x_gpio *VAR_4 = FUNC_0(VAR_1);
 struct wm831x *VAR_5 = VAR_4->wm831x;

 FUNC_1(VAR_5, VAR_0, 1 << VAR_2,
   VAR_3 << VAR_2);
}
