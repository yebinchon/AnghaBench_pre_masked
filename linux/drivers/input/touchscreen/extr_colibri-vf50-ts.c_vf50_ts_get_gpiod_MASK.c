
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*,char const*,int) ;
 struct gpio_desc* FUNC_3 (struct device*,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct gpio_desc **VAR_1,
        const char *VAR_2, enum gpiod_flags VAR_3)
{
 int VAR_4;

 *VAR_1 = FUNC_3(VAR_0, VAR_2, VAR_3);
 if (FUNC_0(*VAR_1)) {
  VAR_4 = FUNC_1(*VAR_1);
  FUNC_2(VAR_0, "Could not get gpio_%s %d\n", VAR_2, VAR_4);
  return VAR_4;
 }

 return 0;
}
