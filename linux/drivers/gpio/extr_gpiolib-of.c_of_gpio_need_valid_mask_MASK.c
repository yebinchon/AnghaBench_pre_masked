
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {struct device_node* of_node; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*) ;

bool FUNC_1(const struct gpio_chip *VAR_0)
{
 int VAR_1;
 struct device_node *VAR_2 = VAR_0->of_node;

 VAR_1 = FUNC_0(VAR_2, "gpio-reserved-ranges");
 if (VAR_1 > 0 && VAR_1 % 2 == 0)
  return 1;
 return 0;
}
