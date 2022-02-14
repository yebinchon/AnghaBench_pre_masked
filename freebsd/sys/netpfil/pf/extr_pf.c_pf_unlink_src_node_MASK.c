
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ptr; } ;
struct pf_src_node {TYPE_2__ rule; int af; int addr; } ;
struct TYPE_3__ {int src_nodes; } ;


 int FUNC_0 (struct pf_src_node*,int ) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 size_t FUNC_3 (int *,int ) ;

void
FUNC_4(struct pf_src_node *VAR_2)
{

 FUNC_1(&VAR_0[FUNC_3(&VAR_2->addr, VAR_2->af)]);
 FUNC_0(VAR_2, VAR_1);
 if (VAR_2->rule.ptr)
  FUNC_2(VAR_2->rule.ptr->src_nodes, -1);
}
