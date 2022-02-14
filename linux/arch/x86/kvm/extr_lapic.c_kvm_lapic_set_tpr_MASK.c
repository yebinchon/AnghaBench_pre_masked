
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_lapic*,unsigned long) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{
 struct kvm_lapic *VAR_3 = VAR_1->arch.apic;

 FUNC_0(VAR_3, ((VAR_2 & 0x0f) << 4)
       | (FUNC_1(VAR_3, VAR_0) & 4));
}
