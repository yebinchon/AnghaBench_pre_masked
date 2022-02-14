
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_gpio {struct wm8994* wm8994; } ;
struct wm8994 {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm8994_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct wm8994*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_4, unsigned int VAR_5,
      unsigned long VAR_6)
{
 struct wm8994_gpio *VAR_7 = FUNC_0(VAR_4);
 struct wm8994 *VAR_8 = VAR_7->wm8994;

 switch (FUNC_1(VAR_6)) {
 case 129:
  return FUNC_2(VAR_8, VAR_1 + VAR_5,
           VAR_3,
           VAR_2);
 case 128:
  return FUNC_2(VAR_8, VAR_1 + VAR_5,
           VAR_3, 0);
 default:
  break;
 }

 return -VAR_0;
}
