
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const**,int ,char const*) ;
 struct gpio_desc* FUNC_4 (struct device_node*,char const*,int ,int*) ;

__attribute__((used)) static struct gpio_desc *FUNC_5(struct device *VAR_2, const char *VAR_3,
      enum of_gpio_flags *VAR_4)
{

 const char *VAR_5[] = {
  "wlf,ldoena",
  "wlf,ldo1ena",
  "wlf,ldo2ena",
 };
 struct device_node *VAR_6 = VAR_2->of_node;
 struct gpio_desc *VAR_7;
 int VAR_8;

 if (!FUNC_2(VAR_0))
  return FUNC_1(-VAR_1);

 if (!VAR_3)
  return FUNC_1(-VAR_1);

 VAR_8 = FUNC_3(VAR_5, FUNC_0(VAR_5), VAR_3);
 if (VAR_8 < 0)
  return FUNC_1(-VAR_1);

 VAR_7 = FUNC_4(VAR_6, VAR_3, 0, VAR_4);
 return VAR_7;
}
