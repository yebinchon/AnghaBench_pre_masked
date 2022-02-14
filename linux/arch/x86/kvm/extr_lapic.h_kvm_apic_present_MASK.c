
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_2(struct kvm_vcpu *VAR_0)
{
 return FUNC_1(VAR_0) && FUNC_0(VAR_0->arch.apic);
}
