
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct omap_dss_device {scalar_t__ type; int * panel; int bridge; TYPE_1__* next; TYPE_3__* dev; int of_ports; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;
 int * FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (struct device_node*) ;

int FUNC_10(struct omap_dss_device *VAR_2)
{
 struct device_node *VAR_3;

 VAR_3 = FUNC_6(VAR_2->dev->of_node,
            FUNC_3(VAR_2->of_ports) - 1, 0);
 if (!VAR_3) {
  FUNC_1(VAR_2->dev, "failed to find video sink\n");
  return 0;
 }

 VAR_2->next = FUNC_9(VAR_3);
 VAR_2->bridge = FUNC_4(VAR_3);
 VAR_2->panel = FUNC_5(VAR_3);
 if (FUNC_0(VAR_2->panel))
  VAR_2->panel = ((void*)0);

 FUNC_7(VAR_3);

 if (VAR_2->next && VAR_2->type != VAR_2->next->type) {
  FUNC_2(VAR_2->dev, "output type and display type don't match\n");
  FUNC_8(VAR_2->next);
  VAR_2->next = ((void*)0);
  return -VAR_0;
 }

 return VAR_2->next || VAR_2->bridge || VAR_2->panel ? 0 : -VAR_1;
}
