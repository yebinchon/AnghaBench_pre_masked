
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_rb_node {int dummy; } ;
struct mmu_rb_handler {TYPE_1__* ops; int root; } ;
struct TYPE_2__ {scalar_t__ (* filter ) (struct mmu_rb_node*,unsigned long,unsigned long) ;} ;


 struct mmu_rb_node* FUNC_0 (int *,unsigned long,unsigned long) ;
 struct mmu_rb_node* FUNC_1 (struct mmu_rb_node*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct mmu_rb_node*,unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static struct mmu_rb_node *FUNC_4(struct mmu_rb_handler *VAR_0,
        unsigned long VAR_1,
        unsigned long VAR_2)
{
 struct mmu_rb_node *VAR_3 = ((void*)0);

 FUNC_3(VAR_1, VAR_2);
 if (!VAR_0->ops->filter) {
  VAR_3 = FUNC_0(&VAR_0->root, VAR_1,
            (VAR_1 + VAR_2) - 1);
 } else {
  for (VAR_3 = FUNC_0(&VAR_0->root, VAR_1,
          (VAR_1 + VAR_2) - 1);
       VAR_3;
       VAR_3 = FUNC_1(VAR_3, VAR_1,
         (VAR_1 + VAR_2) - 1)) {
   if (VAR_0->ops->filter(VAR_3, VAR_1, VAR_2))
    return VAR_3;
  }
 }
 return VAR_3;
}
