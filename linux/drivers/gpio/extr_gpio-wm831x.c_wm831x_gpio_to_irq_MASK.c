
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_gpio {struct wm831x* wm831x; } ;
struct wm831x {int irq_domain; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 struct wm831x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct wm831x_gpio *VAR_3 = FUNC_0(VAR_1);
 struct wm831x *VAR_4 = VAR_3->wm831x;

 return FUNC_1(VAR_4->irq_domain,
      VAR_0 + VAR_2);
}
