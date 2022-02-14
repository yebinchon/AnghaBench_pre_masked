
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_gpio_data {struct wm8350* wm8350; } ;
struct wm8350 {int irq_base; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct wm8350_gpio_data* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct wm8350_gpio_data *VAR_3 = FUNC_1(VAR_1);
 struct wm8350 *VAR_4 = VAR_3->wm8350;

 if (!VAR_4->irq_base)
  return -VAR_0;

 return VAR_4->irq_base + FUNC_0(VAR_2);
}
