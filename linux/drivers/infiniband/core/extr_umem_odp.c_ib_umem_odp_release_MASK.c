
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owning_mm; } ;
struct ib_umem_odp {TYPE_1__ umem; int notifier_completion; int interval_tree; int is_implicit_odp; int page_list; int dma_list; int umem_mutex; struct ib_ucontext_per_mm* per_mm; } ;
struct ib_ucontext_per_mm {int umem_rwsem; int mn; int umem_tree; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_umem_odp*) ;
 int FUNC_3 (struct ib_umem_odp*,int ,int ) ;
 int FUNC_4 (struct ib_umem_odp*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ib_umem_odp*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct ib_umem_odp *VAR_0)
{
 struct ib_ucontext_per_mm *VAR_1 = VAR_0->per_mm;







 if (!VAR_0->is_implicit_odp) {
  FUNC_10(&VAR_0->umem_mutex);
  FUNC_3(VAR_0, FUNC_4(VAR_0),
         FUNC_2(VAR_0));
  FUNC_11(&VAR_0->umem_mutex);
  FUNC_7(VAR_0->dma_list);
  FUNC_7(VAR_0->page_list);
 }

 FUNC_1(&VAR_1->umem_rwsem);
 if (!VAR_0->is_implicit_odp) {
  FUNC_5(&VAR_0->interval_tree,
         &VAR_1->umem_tree);
  FUNC_0(&VAR_0->notifier_completion);
 }
 FUNC_9(&VAR_1->mn);
 FUNC_12(&VAR_1->umem_rwsem);

 FUNC_8(VAR_0->umem.owning_mm);
 FUNC_6(VAR_0);
}
