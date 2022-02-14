
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct applesmc_node_group {struct applesmc_dev_attr* nodes; } ;
struct TYPE_9__ {scalar_t__ name; } ;
struct TYPE_7__ {TYPE_4__ attr; } ;
struct TYPE_8__ {TYPE_2__ dev_attr; } ;
struct applesmc_dev_attr {TYPE_3__ sda; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_10__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct applesmc_dev_attr*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(struct applesmc_node_group *VAR_1)
{
 struct applesmc_node_group *VAR_2;
 struct applesmc_dev_attr *VAR_3;

 for (VAR_2 = VAR_1; VAR_2->nodes; VAR_2++) {
  for (VAR_3 = VAR_2->nodes; VAR_3->sda.dev_attr.attr.name; VAR_3++)
   FUNC_1(&VAR_0->dev.kobj,
       &VAR_3->sda.dev_attr.attr);
  FUNC_0(VAR_2->nodes);
  VAR_2->nodes = ((void*)0);
 }
}
