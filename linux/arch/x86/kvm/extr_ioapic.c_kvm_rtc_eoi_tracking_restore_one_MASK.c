
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_ioapic {int lock; } ;
struct TYPE_3__ {struct kvm_ioapic* vioapic; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct kvm_ioapic *VAR_1 = VAR_0->kvm->arch.vioapic;

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock);
}
