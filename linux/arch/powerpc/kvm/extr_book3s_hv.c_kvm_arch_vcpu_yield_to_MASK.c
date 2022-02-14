
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcore {scalar_t__ vcore_state; int lock; struct kvm_vcpu* runner; } ;
struct TYPE_2__ {scalar_t__ state; struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct kvmppc_vcore *VAR_3 = VAR_2->arch.vcore;
 FUNC_1(&VAR_3->lock);
 if (VAR_2->arch.state == VAR_0 &&
     VAR_3->vcore_state != VAR_1 &&
     VAR_3->runner)
  VAR_2 = VAR_3->runner;
 FUNC_2(&VAR_3->lock);

 return FUNC_0(VAR_2);
}
