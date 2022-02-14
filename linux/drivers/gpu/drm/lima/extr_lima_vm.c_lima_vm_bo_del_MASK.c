
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lima_vm {int lock; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ start; } ;
struct lima_bo_va {scalar_t__ ref_count; int list; TYPE_1__ node; } ;
struct lima_bo {int lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct lima_bo_va*) ;
 struct lima_bo_va* FUNC_2 (struct lima_vm*,struct lima_bo*) ;
 int FUNC_3 (struct lima_vm*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct lima_vm *VAR_0, struct lima_bo *VAR_1)
{
 struct lima_bo_va *VAR_2;

 FUNC_5(&VAR_1->lock);

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (--VAR_2->ref_count > 0) {
  FUNC_6(&VAR_1->lock);
  return;
 }

 FUNC_5(&VAR_0->lock);

 FUNC_3(VAR_0, VAR_2->node.start,
     VAR_2->node.start + VAR_2->node.size - 1);

 FUNC_0(&VAR_2->node);

 FUNC_6(&VAR_0->lock);

 FUNC_4(&VAR_2->list);

 FUNC_6(&VAR_1->lock);

 FUNC_1(VAR_2);
}
