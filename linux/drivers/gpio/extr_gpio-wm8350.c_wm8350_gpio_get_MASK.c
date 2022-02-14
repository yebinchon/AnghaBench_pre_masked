
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_gpio_data {struct wm8350* wm8350; } ;
struct wm8350 {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct wm8350_gpio_data* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct wm8350*,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct wm8350_gpio_data *VAR_3 = FUNC_0(VAR_1);
 struct wm8350 *VAR_4 = VAR_3->wm8350;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 & (1 << VAR_2))
  return 1;
 else
  return 0;
}
