
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_gpio {struct wm8994* wm8994; } ;
struct wm8994 {int type; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;

 struct wm8994_gpio* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct wm8994_gpio *VAR_3 = FUNC_0(VAR_1);
 struct wm8994 *VAR_4 = VAR_3->wm8994;

 switch (VAR_4->type) {
 case 128:
  switch (VAR_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
   return -VAR_0;
  }
  break;
 default:
  break;
 }

 return 0;
}
