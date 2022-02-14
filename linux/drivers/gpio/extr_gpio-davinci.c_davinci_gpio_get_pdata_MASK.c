
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct davinci_gpio_platform_data {void* gpio_unbanked; void* ngpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 struct davinci_gpio_platform_data* FUNC_2 (TYPE_1__*) ;
 struct davinci_gpio_platform_data* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct device_node*,char*,void**) ;

__attribute__((used)) static struct davinci_gpio_platform_data *
FUNC_5(struct platform_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 struct davinci_gpio_platform_data *VAR_4;
 int VAR_5;
 u32 VAR_6;

 if (!FUNC_0(VAR_0) || !VAR_2->dev.of_node)
  return FUNC_2(&VAR_2->dev);

 VAR_4 = FUNC_3(&VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_4(VAR_3, "ti,ngpio", &VAR_6);
 if (VAR_5)
  goto of_err;

 VAR_4->ngpio = VAR_6;

 VAR_5 = FUNC_4(VAR_3, "ti,davinci-gpio-unbanked", &VAR_6);
 if (VAR_5)
  goto of_err;

 VAR_4->gpio_unbanked = VAR_6;

 return VAR_4;

of_err:
 FUNC_1(&VAR_2->dev, "Populating pdata from DT failed: err %d\n", VAR_5);
 return ((void*)0);
}
