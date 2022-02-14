
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct kvm_vcpu *VAR_0)
{
 return FUNC_0(VAR_0) && FUNC_1(VAR_0->arch.apic);
}
