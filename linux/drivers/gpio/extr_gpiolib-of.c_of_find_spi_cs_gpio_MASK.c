
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 struct gpio_desc* FUNC_3 (struct device*,int *,unsigned int,unsigned long*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static struct gpio_desc *FUNC_5(struct device *VAR_2,
          const char *VAR_3,
          unsigned int VAR_4,
          unsigned long *VAR_5)
{
 struct device_node *VAR_6 = VAR_2->of_node;

 if (!FUNC_1(VAR_0))
  return FUNC_0(-VAR_1);


 if (!FUNC_2(VAR_6, "fsl,spi") &&
     !FUNC_2(VAR_6, "aeroflexgaisler,spictrl"))
  return FUNC_0(-VAR_1);

 if (!VAR_3 || FUNC_4(VAR_3, "cs"))
  return FUNC_0(-VAR_1);






 return FUNC_3(VAR_2, ((void*)0), VAR_4, VAR_5);
}
