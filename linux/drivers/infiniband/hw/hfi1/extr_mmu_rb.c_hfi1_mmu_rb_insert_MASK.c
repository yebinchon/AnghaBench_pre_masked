
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_rb_node {int list; int len; int addr; } ;
struct mmu_rb_handler {int lock; int root; int ops_arg; TYPE_1__* ops; int lru_list; } ;
struct TYPE_2__ {int (* insert ) (int ,struct mmu_rb_node*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mmu_rb_node*,int *) ;
 int FUNC_1 (struct mmu_rb_node*,int *) ;
 struct mmu_rb_node* FUNC_2 (struct mmu_rb_handler*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,struct mmu_rb_node*) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct mmu_rb_handler *VAR_1,
         struct mmu_rb_node *VAR_2)
{
 struct mmu_rb_node *VAR_3;
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_8(VAR_2->addr, VAR_2->len);
 FUNC_5(&VAR_1->lock, VAR_4);
 VAR_3 = FUNC_2(VAR_1, VAR_2->addr, VAR_2->len);
 if (VAR_3) {
  VAR_5 = -VAR_0;
  goto unlock;
 }
 FUNC_0(VAR_2, &VAR_1->root);
 FUNC_3(&VAR_2->list, &VAR_1->lru_list);

 VAR_5 = VAR_1->ops->insert(VAR_1->ops_arg, VAR_2);
 if (VAR_5) {
  FUNC_1(VAR_2, &VAR_1->root);
  FUNC_4(&VAR_2->list);
 }
unlock:
 FUNC_6(&VAR_1->lock, VAR_4);
 return VAR_5;
}
