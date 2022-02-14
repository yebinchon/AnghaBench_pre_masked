
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_gpio {struct wm8994* wm8994; } ;
struct wm8994 {int irq_data; } ;
struct gpio_chip {int dummy; } ;


 struct wm8994_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct wm8994_gpio *VAR_2 = FUNC_0(VAR_0);
 struct wm8994 *VAR_3 = VAR_2->wm8994;

 return FUNC_1(VAR_3->irq_data, VAR_1);
}
