
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_gpio_data {struct wm8350* wm8350; } ;
struct wm8350 {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct wm8350_gpio_data* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct wm8350*,int ,int) ;
 int FUNC_2 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
         unsigned VAR_2, int VAR_3)
{
 struct wm8350_gpio_data *VAR_4 = FUNC_0(VAR_1);
 struct wm8350 *VAR_5 = VAR_4->wm8350;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0,
    1 << VAR_2);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_2(VAR_1, VAR_2, VAR_3);

 return 0;
}
