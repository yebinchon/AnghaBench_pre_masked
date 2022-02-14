
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_rb_node {unsigned long addr; unsigned long len; int list; } ;
struct mmu_rb_handler {int lock; int root; } ;


 int FUNC_0 (struct mmu_rb_node*,int *) ;
 struct mmu_rb_node* FUNC_1 (struct mmu_rb_handler*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

bool FUNC_5(struct mmu_rb_handler *VAR_0,
         unsigned long VAR_1, unsigned long VAR_2,
         struct mmu_rb_node **VAR_3)
{
 struct mmu_rb_node *VAR_4;
 unsigned long VAR_5;
 bool VAR_6 = 0;

 FUNC_3(&VAR_0->lock, VAR_5);
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_4) {
  if (VAR_4->addr == VAR_1 && VAR_4->len == VAR_2)
   goto unlock;
  FUNC_0(VAR_4, &VAR_0->root);
  FUNC_2(&VAR_4->list);
  VAR_6 = 1;
 }
unlock:
 FUNC_4(&VAR_0->lock, VAR_5);
 *VAR_3 = VAR_4;
 return VAR_6;
}
