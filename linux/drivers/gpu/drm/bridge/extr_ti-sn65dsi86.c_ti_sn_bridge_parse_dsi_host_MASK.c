
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_sn_bridge {int host_node; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct device_node*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ti_sn_bridge *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev->of_node;

 VAR_1->host_node = FUNC_1(VAR_2, 0, 0);

 if (!VAR_1->host_node) {
  FUNC_0("remote dsi host node not found\n");
  return -VAR_0;
 }

 return 0;
}
