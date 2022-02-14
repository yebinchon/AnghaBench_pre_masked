
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ apicv_active; scalar_t__ apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



__attribute__((used)) static inline bool FUNC_0(struct kvm_vcpu *VAR_0)
{
 return VAR_0->arch.apic && VAR_0->arch.apicv_active;
}
