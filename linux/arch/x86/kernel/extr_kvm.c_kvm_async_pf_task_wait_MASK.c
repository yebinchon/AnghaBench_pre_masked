
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct kvm_task_sleep_node {size_t token; int halted; int wq; int link; int cpu; } ;
struct kvm_task_sleep_head {int lock; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct kvm_task_sleep_node* FUNC_2 (struct kvm_task_sleep_head*,size_t) ;
 struct kvm_task_sleep_head* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct kvm_task_sleep_node*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int VAR_5 ;

void FUNC_23(u32 VAR_6, int VAR_7)
{
 u32 VAR_8 = FUNC_4(VAR_6, VAR_1);
 struct kvm_task_sleep_head *VAR_9 = &VAR_3[VAR_8];
 struct kvm_task_sleep_node VAR_10, *VAR_11;
 FUNC_0(VAR_5);

 FUNC_18();

 FUNC_16(&VAR_9->lock);
 VAR_11 = FUNC_2(VAR_9, VAR_6);
 if (VAR_11) {

  FUNC_6(&VAR_11->link);
  FUNC_10(VAR_11);
  FUNC_17(&VAR_9->lock);

  FUNC_19();
  return;
 }

 VAR_10.token = VAR_6;
 VAR_10.cpu = FUNC_22();
 VAR_10.halted = FUNC_9(VAR_4) ||
     (FUNC_1(VAR_0)
      ? FUNC_14() > 1 || FUNC_20()
      : VAR_7);
 FUNC_8(&VAR_10.wq);
 FUNC_5(&VAR_10.link, &VAR_9->list);
 FUNC_17(&VAR_9->lock);

 for (;;) {
  if (!VAR_10.halted)
   FUNC_15(&VAR_10.wq, &VAR_5, VAR_2);
  if (FUNC_7(&VAR_10.link))
   break;

  FUNC_19();

  if (!VAR_10.halted) {
   FUNC_12();
   FUNC_21();
   FUNC_11();
  } else {



   FUNC_13();
   FUNC_11();
  }

  FUNC_18();
 }
 if (!VAR_10.halted)
  FUNC_3(&VAR_10.wq, &VAR_5);

 FUNC_19();
 return;
}
