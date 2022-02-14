
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int of_node; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct gpio_desc* FUNC_2 (int ,char const*,int ,int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static struct gpio_desc *FUNC_4(struct device *VAR_2,
           const char *VAR_3,
           enum of_gpio_flags *VAR_4)
{
 if (!FUNC_1(VAR_0))
  return FUNC_0(-VAR_1);

 if (!VAR_3 || FUNC_3(VAR_3, "wlf,reset"))
  return FUNC_0(-VAR_1);

 return FUNC_2(VAR_2->of_node, VAR_3, 0, VAR_4);
}
