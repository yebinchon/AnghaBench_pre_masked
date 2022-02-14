
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preempted_vcore_list {int lock; int list; } ;
struct kvmppc_vcore {scalar_t__ num_threads; int preempt_list; int kvm; int pcpu; int vcore_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvmppc_vcore*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct preempted_vcore_list* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct kvmppc_vcore *VAR_2)
{
 struct preempted_vcore_list *VAR_3 = FUNC_5(&VAR_1);

 VAR_2->vcore_state = VAR_0;
 VAR_2->pcpu = FUNC_2();
 if (VAR_2->num_threads < FUNC_6(VAR_2->kvm)) {
  FUNC_3(&VAR_3->lock);
  FUNC_1(&VAR_2->preempt_list, &VAR_3->list);
  FUNC_4(&VAR_3->lock);
 }


 FUNC_0(VAR_2);
}
