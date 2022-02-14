
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dss_device {TYPE_2__* feat; struct platform_device* pdev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int num_ports; int* ports; } ;




 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,int) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static void FUNC_3(struct dss_device *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->pdev;
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct device_node *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->feat->num_ports; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2, VAR_4);
  if (!VAR_3)
   continue;

  switch (VAR_0->feat->ports[VAR_4]) {
  case 129:
   FUNC_0(VAR_3);
   break;
  case 128:
   FUNC_2(VAR_3);
   break;
  default:
   break;
  }
 }
}
