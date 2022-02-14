
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_gpio {struct wm8994* wm8994; } ;
struct wm8994 {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct wm8994_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct wm8994*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct wm8994_gpio *VAR_4 = FUNC_0(VAR_2);
 struct wm8994 *VAR_5 = VAR_4->wm8994;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0 + VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 & VAR_1)
  return 1;
 else
  return 0;
}
