
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_descs {int dummy; } ;
struct device {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_descs*) ;
 int FUNC_1 (struct gpio_descs*) ;
 int FUNC_2 (struct device*,char*,char const*,int,...) ;
 struct gpio_descs* FUNC_3 (struct device*,char const*,int) ;
 int FUNC_4 (struct device*,char const*) ;

__attribute__((used)) static struct gpio_descs *FUNC_5(
    struct device *VAR_1, const char *VAR_2,
    enum gpiod_flags VAR_3, unsigned int VAR_4)
{
 struct gpio_descs *VAR_5;
 int VAR_6 = FUNC_4(VAR_1, VAR_2);

 if (VAR_6 == -VAR_0)
  return ((void*)0);

 if (VAR_6 != VAR_4 && VAR_6 != 1) {
  FUNC_2(VAR_1, "ignoring %s-gpios: found %d, expected %u or 1\n",
   VAR_2, VAR_6, VAR_4);
  return ((void*)0);
 }

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_1, "failed to get %s-gpios: %ld\n",
   VAR_2, FUNC_1(VAR_5));
  return ((void*)0);
 }

 return VAR_5;
}
