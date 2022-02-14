
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {int dummy; } ;


 int FUNC_0 (struct kvm_lapic*,int *) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;
 int FUNC_2 (struct kvm_lapic*) ;

int FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct kvm_lapic *VAR_1 = VAR_0->arch.apic;
 u32 VAR_2;

 if (!FUNC_2(VAR_1))
  return -1;

 FUNC_0(VAR_1, &VAR_2);
 return FUNC_1(VAR_1, VAR_2);
}
