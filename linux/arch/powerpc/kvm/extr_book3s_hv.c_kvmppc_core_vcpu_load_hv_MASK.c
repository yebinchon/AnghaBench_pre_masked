
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcore {scalar_t__ vcore_state; struct kvm_vcpu* runner; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ busy_preempt; int tbacct_lock; int busy_stolen; struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kvmppc_vcore*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_3, int VAR_4)
{
 struct kvmppc_vcore *VAR_5 = VAR_3->arch.vcore;
 unsigned long VAR_6;







 if (VAR_5->runner == VAR_3 && VAR_5->vcore_state >= VAR_2)
  FUNC_0(VAR_5);

 FUNC_2(&VAR_3->arch.tbacct_lock, VAR_6);
 if (VAR_3->arch.state == VAR_0 &&
     VAR_3->arch.busy_preempt != VAR_1) {
  VAR_3->arch.busy_stolen += FUNC_1() - VAR_3->arch.busy_preempt;
  VAR_3->arch.busy_preempt = VAR_1;
 }
 FUNC_3(&VAR_3->arch.tbacct_lock, VAR_6);
}
