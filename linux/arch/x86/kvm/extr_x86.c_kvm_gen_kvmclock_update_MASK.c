
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {struct kvm* kvm; } ;
struct TYPE_2__ {int kvmclock_update_work; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2)
{
 struct kvm *VAR_3 = VAR_2->kvm;

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(&VAR_3->arch.kvmclock_update_work,
     VAR_0);
}
