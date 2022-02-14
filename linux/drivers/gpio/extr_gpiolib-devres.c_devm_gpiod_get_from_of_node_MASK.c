
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct devres {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 struct gpio_desc* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*,struct gpio_desc**) ;
 struct gpio_desc** FUNC_3 (int ,int,int ) ;
 struct devres* FUNC_4 (struct device*,int ,int ,struct gpio_desc**) ;
 struct gpio_desc* FUNC_5 (struct device_node*,char const*,int,int,char const*) ;
 int FUNC_6 (struct gpio_desc*) ;

struct gpio_desc *FUNC_7(struct device *VAR_5,
           struct device_node *VAR_6,
           const char *VAR_7, int VAR_8,
           enum gpiod_flags VAR_9,
           const char *VAR_10)
{
 struct gpio_desc **VAR_11;
 struct gpio_desc *VAR_12;

 VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 if (FUNC_1(VAR_12))
  return VAR_12;





 if (VAR_9 & VAR_2) {
  struct devres *VAR_13;

  VAR_13 = FUNC_4(VAR_5, VAR_4,
       VAR_3, &VAR_12);
  if (VAR_13)
   return VAR_12;
 }

 VAR_11 = FUNC_3(VAR_4, sizeof(struct gpio_desc *),
     VAR_1);
 if (!VAR_11) {
  FUNC_6(VAR_12);
  return FUNC_0(-VAR_0);
 }

 *VAR_11 = VAR_12;
 FUNC_2(VAR_5, VAR_11);

 return VAR_12;
}
