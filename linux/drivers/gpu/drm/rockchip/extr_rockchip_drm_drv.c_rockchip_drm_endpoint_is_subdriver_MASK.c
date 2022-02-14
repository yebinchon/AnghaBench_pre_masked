
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_driver* driver; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct platform_device* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct platform_device*) ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_4 (struct device_driver*) ;

int FUNC_5(struct device_node *VAR_3)
{
 struct device_node *VAR_4 = FUNC_1(VAR_3);
 struct platform_device *VAR_5;
 struct device_driver *VAR_6;
 int VAR_7;

 if (!VAR_4)
  return -VAR_0;


 VAR_5 = FUNC_0(VAR_4);
 FUNC_2(VAR_4);
 if (!VAR_5)
  return -VAR_0;





 VAR_6 = VAR_5->dev.driver;
 if (!VAR_6) {
  FUNC_3(VAR_5);
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_2[VAR_7] == FUNC_4(VAR_6)) {
   FUNC_3(VAR_5);
   return 1;
  }
 }

 FUNC_3(VAR_5);
 return 0;
}
