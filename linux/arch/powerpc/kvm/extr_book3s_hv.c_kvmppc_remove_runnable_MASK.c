
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvmppc_vcore {int * runnable_threads; int n_runnable; } ;
struct TYPE_2__ {scalar_t__ state; size_t ptid; int tbacct_lock; int busy_preempt; scalar_t__ stolen_logged; int busy_stolen; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct kvmppc_vcore*,int ) ;

__attribute__((used)) static void FUNC_5(struct kvmppc_vcore *VAR_2,
       struct kvm_vcpu *VAR_3)
{
 u64 VAR_4;

 if (VAR_3->arch.state != VAR_1)
  return;
 FUNC_2(&VAR_3->arch.tbacct_lock);
 VAR_4 = FUNC_1();
 VAR_3->arch.busy_stolen += FUNC_4(VAR_2, VAR_4) -
  VAR_3->arch.stolen_logged;
 VAR_3->arch.busy_preempt = VAR_4;
 VAR_3->arch.state = VAR_0;
 FUNC_3(&VAR_3->arch.tbacct_lock);
 --VAR_2->n_runnable;
 FUNC_0(VAR_2->runnable_threads[VAR_3->arch.ptid], ((void*)0));
}
