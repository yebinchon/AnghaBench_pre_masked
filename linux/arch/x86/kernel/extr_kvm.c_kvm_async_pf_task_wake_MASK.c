
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct kvm_task_sleep_node {size_t token; int link; int wq; int cpu; } ;
struct kvm_task_sleep_head {int lock; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_task_sleep_node* FUNC_0 (struct kvm_task_sleep_head*,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_task_sleep_node*) ;
 struct kvm_task_sleep_head* VAR_2 ;
 int FUNC_3 () ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 struct kvm_task_sleep_node* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

void FUNC_11(u32 VAR_3)
{
 u32 VAR_4 = FUNC_4(VAR_3, VAR_1);
 struct kvm_task_sleep_head *VAR_5 = &VAR_2[VAR_4];
 struct kvm_task_sleep_node *VAR_6;

 if (VAR_3 == ~0) {
  FUNC_1();
  return;
 }

again:
 FUNC_8(&VAR_5->lock);
 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (!VAR_6) {




  VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_0);
  if (!VAR_6) {




   FUNC_9(&VAR_5->lock);
   FUNC_3();
   goto again;
  }
  VAR_6->token = VAR_3;
  VAR_6->cpu = FUNC_10();
  FUNC_6(&VAR_6->wq);
  FUNC_5(&VAR_6->link, &VAR_5->list);
 } else
  FUNC_2(VAR_6);
 FUNC_9(&VAR_5->lock);
 return;
}
