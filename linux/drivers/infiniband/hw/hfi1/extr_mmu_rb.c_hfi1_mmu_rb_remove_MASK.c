
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_rb_node {int list; int len; int addr; } ;
struct mmu_rb_handler {int ops_arg; TYPE_1__* ops; int lock; int root; } ;
struct TYPE_2__ {int (* remove ) (int ,struct mmu_rb_node*) ;} ;


 int FUNC_0 (struct mmu_rb_node*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,struct mmu_rb_node*) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct mmu_rb_handler *VAR_0,
   struct mmu_rb_node *VAR_1)
{
 unsigned long VAR_2;


 FUNC_5(VAR_1->addr, VAR_1->len);
 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_0(VAR_1, &VAR_0->root);
 FUNC_1(&VAR_1->list);
 FUNC_3(&VAR_0->lock, VAR_2);

 VAR_0->ops->remove(VAR_0->ops_arg, VAR_1);
}
