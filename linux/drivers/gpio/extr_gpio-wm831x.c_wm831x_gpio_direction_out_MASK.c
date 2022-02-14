
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_gpio {struct wm831x* wm831x; } ;
struct wm831x {scalar_t__ has_gpio_ena; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm831x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (struct wm831x*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_4,
         unsigned VAR_5, int VAR_6)
{
 struct wm831x_gpio *VAR_7 = FUNC_0(VAR_4);
 struct wm831x *VAR_8 = VAR_7->wm831x;
 int VAR_9 = 0;
 int VAR_10;

 if (VAR_8->has_gpio_ena)
  VAR_9 |= VAR_3;

 VAR_10 = FUNC_2(VAR_8, VAR_0 + VAR_5,
         VAR_1 | VAR_3 |
         VAR_2, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;


 FUNC_1(VAR_4, VAR_5, VAR_6);

 return 0;
}
