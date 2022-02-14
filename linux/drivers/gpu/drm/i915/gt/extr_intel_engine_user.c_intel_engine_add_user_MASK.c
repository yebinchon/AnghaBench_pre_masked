
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct llist_node {int dummy; } ;
struct llist_head {int dummy; } ;
struct intel_engine_cs {TYPE_1__* i915; int uabi_node; } ;
struct TYPE_2__ {int uabi_engines; } ;


 int FUNC_0 (struct llist_node*,struct llist_head*) ;

void FUNC_1(struct intel_engine_cs *VAR_0)
{
 FUNC_0((struct llist_node *)&VAR_0->uabi_node,
    (struct llist_head *)&VAR_0->i915->uabi_engines);
}
