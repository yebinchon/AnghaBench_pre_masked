
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct ib_umem {struct ib_umem* odp_data; int page_list; int dma_list; int notifier_completion; int no_private_counters; int mn_counters_active; int interval_tree; struct ib_ucontext* context; } ;
struct ib_ucontext {int umem_rwsem; int mn; int tgid; int odp_mrs_count; int umem_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct task_struct* FUNC_3 (int ,int ) ;
 struct mm_struct* FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct ib_umem*) ;
 int FUNC_6 (struct ib_umem*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct ib_umem*) ;
 int FUNC_8 (struct ib_umem*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct mm_struct*) ;
 int FUNC_12 (int *,struct mm_struct*) ;
 int FUNC_13 (struct task_struct*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

void FUNC_17(struct ib_umem *VAR_1)
{
 struct ib_ucontext *VAR_2 = VAR_1->context;







 FUNC_6(VAR_1, FUNC_7(VAR_1),
        FUNC_5(VAR_1));

 FUNC_1(&VAR_2->umem_rwsem);
 if (FUNC_9(FUNC_7(VAR_1) != FUNC_5(VAR_1)))
  FUNC_14(&VAR_1->odp_data->interval_tree,
       &VAR_2->umem_tree);
 VAR_2->odp_mrs_count--;
 if (!VAR_1->odp_data->mn_counters_active) {
  FUNC_10(&VAR_1->odp_data->no_private_counters);
  FUNC_0(&VAR_1->odp_data->notifier_completion);
 }
 FUNC_2(&VAR_2->umem_rwsem);
 if (!VAR_2->odp_mrs_count) {
  struct task_struct *VAR_3 = ((void*)0);
  struct mm_struct *VAR_4 = ((void*)0);

  VAR_3 = FUNC_3(VAR_2->tgid,
           VAR_0);
  if (VAR_3 == ((void*)0))




   goto out;

  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4 == ((void*)0))




   goto out_put_task;
  FUNC_12(&VAR_2->mn, VAR_4);

  FUNC_11(VAR_4);

out_put_task:
  FUNC_13(VAR_3);
 }
out:
 FUNC_15(&VAR_2->umem_rwsem);

 FUNC_16(VAR_1->odp_data->dma_list);
 FUNC_16(VAR_1->odp_data->page_list);
 FUNC_8(VAR_1->odp_data);
 FUNC_8(VAR_1);
}
