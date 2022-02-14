
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_gpio {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm831x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct wm831x*,unsigned int,int ) ;
 int FUNC_4 (struct wm831x*,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_4, unsigned int VAR_5,
        unsigned long VAR_6)
{
 struct wm831x_gpio *VAR_7 = FUNC_0(VAR_4);
 struct wm831x *VAR_8 = VAR_7->wm831x;
 int VAR_9 = VAR_1 + VAR_5;

 switch (FUNC_2(VAR_6)) {
 case 130:
  return FUNC_4(VAR_8, VAR_9,
           VAR_3, VAR_2);
 case 129:
  return FUNC_4(VAR_8, VAR_9,
           VAR_3, 0);
 case 128:
  return FUNC_3(VAR_8, VAR_5,
   FUNC_1(VAR_6));
 default:
  break;
 }

 return -VAR_0;
}
