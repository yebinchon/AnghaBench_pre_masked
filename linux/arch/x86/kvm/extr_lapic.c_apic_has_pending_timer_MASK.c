
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int pending; } ;
struct kvm_lapic {TYPE_2__ lapic_timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_lapic*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct kvm_lapic *VAR_2 = VAR_1->arch.apic;

 if (FUNC_0(VAR_2) && FUNC_1(VAR_2, VAR_0))
  return FUNC_2(&VAR_2->lapic_timer.pending);

 return 0;
}
