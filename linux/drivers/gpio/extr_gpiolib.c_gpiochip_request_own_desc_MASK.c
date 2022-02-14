
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gpio_desc {int dummy; } ;
struct gpio_chip {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;
typedef enum gpio_lookup_flags { ____Placeholder_gpio_lookup_flags } gpio_lookup_flags ;


 struct gpio_desc* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_chip*,char*,...) ;
 struct gpio_desc* FUNC_3 (struct gpio_chip*,int ) ;
 int FUNC_4 (struct gpio_desc*,char const*,int,int) ;
 int FUNC_5 (struct gpio_desc*) ;
 int FUNC_6 (struct gpio_desc*,char const*) ;

struct gpio_desc *FUNC_7(struct gpio_chip *VAR_0, u16 VAR_1,
         const char *VAR_2,
         enum gpio_lookup_flags VAR_3,
         enum gpiod_flags VAR_4)
{
 struct gpio_desc *VAR_5 = FUNC_3(VAR_0, VAR_1);
 int VAR_6;

 if (FUNC_1(VAR_5)) {
  FUNC_2(VAR_0, "failed to get GPIO descriptor\n");
  return VAR_5;
 }

 VAR_6 = FUNC_6(VAR_5, VAR_2);
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);

 VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_0, "setup of own GPIO %s failed\n", VAR_2);
  FUNC_5(VAR_5);
  return FUNC_0(VAR_6);
 }

 return VAR_5;
}
