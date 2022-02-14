
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct ib_umem {TYPE_2__* odp_data; } ;
struct TYPE_4__ {int * ops; int hlist; } ;
struct ib_ucontext {scalar_t__ tgid; int odp_mrs_count; int umem_rwsem; TYPE_1__ mn; int notifier_count; int no_private_counters; int umem_tree; } ;
typedef scalar_t__ pid_t ;
struct TYPE_5__ {int mn_counters_active; void* page_list; void* dma_list; int no_private_counters; int interval_tree; int notifier_completion; int umem_mutex; struct ib_umem* umem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 struct mm_struct* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct ib_umem*) ;
 int VAR_5 ;
 int FUNC_8 (struct ib_umem*) ;
 scalar_t__ FUNC_9 (struct ib_umem*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_2__* FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (struct mm_struct*) ;
 int FUNC_16 (TYPE_1__*,struct mm_struct*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (void*) ;
 void* FUNC_26 (int) ;

int FUNC_27(struct ib_ucontext *VAR_6, struct ib_umem *VAR_7)
{
 int VAR_8;
 pid_t VAR_9;
 struct mm_struct *VAR_10 = FUNC_6(VAR_4);

 if (!VAR_10)
  return -VAR_1;


 FUNC_21();
 VAR_9 = FUNC_5(FUNC_23(VAR_4));
 FUNC_22();
 FUNC_19(VAR_9);
 if (VAR_6->tgid != VAR_9) {
  VAR_8 = -VAR_1;
  goto out_mm;
 }

 VAR_7->odp_data = FUNC_12(sizeof(*VAR_7->odp_data), VAR_3);
 if (!VAR_7->odp_data) {
  VAR_8 = -VAR_2;
  goto out_mm;
 }
 VAR_7->odp_data->umem = VAR_7;

 FUNC_17(&VAR_7->odp_data->umem_mutex);

 FUNC_10(&VAR_7->odp_data->notifier_completion);

 VAR_7->odp_data->page_list = FUNC_26(FUNC_8(VAR_7) *
         sizeof(*VAR_7->odp_data->page_list));
 if (!VAR_7->odp_data->page_list) {
  VAR_8 = -VAR_2;
  goto out_odp_data;
 }

 VAR_7->odp_data->dma_list = FUNC_26(FUNC_8(VAR_7) *
       sizeof(*VAR_7->odp_data->dma_list));
 if (!VAR_7->odp_data->dma_list) {
  VAR_8 = -VAR_2;
  goto out_page_list;
 }






 FUNC_3(&VAR_6->umem_rwsem);
 VAR_6->odp_mrs_count++;
 if (FUNC_13(FUNC_9(VAR_7) != FUNC_7(VAR_7)))
  FUNC_20(&VAR_7->odp_data->interval_tree,
       &VAR_6->umem_tree);
 if (FUNC_13(!FUNC_1(&VAR_6->notifier_count)) ||
     VAR_6->odp_mrs_count == 1)
  VAR_7->odp_data->mn_counters_active = 1;
 else
  FUNC_14(&VAR_7->odp_data->no_private_counters,
    &VAR_6->no_private_counters);
 FUNC_4(&VAR_6->umem_rwsem);

 if (VAR_6->odp_mrs_count == 1) {




  FUNC_2(&VAR_6->notifier_count, 0);
  FUNC_0(&VAR_6->mn.hlist);
  VAR_6->mn.ops = &VAR_5;




  VAR_8 = FUNC_16(&VAR_6->mn, VAR_10);
  if (VAR_8) {
   FUNC_18("Failed to register mmu_notifier %d\n", VAR_8);
   VAR_8 = -VAR_0;
   goto out_mutex;
  }
 }

 FUNC_24(&VAR_6->umem_rwsem);







 FUNC_15(VAR_10);
 return 0;

out_mutex:
 FUNC_24(&VAR_6->umem_rwsem);
 FUNC_25(VAR_7->odp_data->dma_list);
out_page_list:
 FUNC_25(VAR_7->odp_data->page_list);
out_odp_data:
 FUNC_11(VAR_7->odp_data);
out_mm:
 FUNC_15(VAR_10);
 return VAR_8;
}
