
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_gpio {struct wm8994* wm8994; } ;
struct wm8994 {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wm8994_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct wm8994*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3,
         unsigned VAR_4, int VAR_5)
{
 struct wm8994_gpio *VAR_6 = FUNC_0(VAR_3);
 struct wm8994 *VAR_7 = VAR_6->wm8994;

 if (VAR_5)
  VAR_5 = VAR_2;

 return FUNC_1(VAR_7, VAR_0 + VAR_4,
          VAR_1 | VAR_2, VAR_5);
}
