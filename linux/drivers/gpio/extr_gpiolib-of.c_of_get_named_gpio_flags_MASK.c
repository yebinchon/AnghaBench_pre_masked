
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_3 (struct device_node*,char const*,int,int*) ;

int FUNC_4(struct device_node *VAR_0, const char *VAR_1,
       int VAR_2, enum of_gpio_flags *VAR_3)
{
 struct gpio_desc *VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 else
  return FUNC_2(VAR_4);
}
