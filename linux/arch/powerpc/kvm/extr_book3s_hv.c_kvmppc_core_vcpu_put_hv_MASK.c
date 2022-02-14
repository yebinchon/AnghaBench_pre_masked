
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcore {scalar_t__ vcore_state; struct kvm_vcpu* runner; } ;
struct TYPE_2__ {scalar_t__ state; int tbacct_lock; int busy_preempt; struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvmppc_vcore*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2)
{
 struct kvmppc_vcore *VAR_3 = VAR_2->arch.vcore;
 unsigned long VAR_4;

 if (VAR_3->runner == VAR_2 && VAR_3->vcore_state >= VAR_1)
  FUNC_0(VAR_3);

 FUNC_2(&VAR_2->arch.tbacct_lock, VAR_4);
 if (VAR_2->arch.state == VAR_0)
  VAR_2->arch.busy_preempt = FUNC_1();
 FUNC_3(&VAR_2->arch.tbacct_lock, VAR_4);
}
