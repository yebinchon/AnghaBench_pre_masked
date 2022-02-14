
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int prop_name ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 struct gpio_desc* FUNC_3 (struct device_node*,char*,int ,int*) ;
 int FUNC_4 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static struct gpio_desc *FUNC_5(struct device *VAR_2, const char *VAR_3,
       enum of_gpio_flags *VAR_4)
{
 char VAR_5[32];
 struct device_node *VAR_6 = VAR_2->of_node;
 struct gpio_desc *VAR_7;





 if (!FUNC_1(VAR_0))
  return FUNC_0(-VAR_1);


 if (!FUNC_2(VAR_6, "spi-gpio") || !VAR_3)
  return FUNC_0(-VAR_1);


 FUNC_4(VAR_5, sizeof(VAR_5), "%s-%s", "gpio", VAR_3);

 VAR_7 = FUNC_3(VAR_6, VAR_5, 0, VAR_4);
 return VAR_7;
}
