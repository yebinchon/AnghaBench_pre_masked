
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* apic; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {scalar_t__ pending_events; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm_vcpu *VAR_0)
{
 return FUNC_0(VAR_0) && VAR_0->arch.apic->pending_events;
}
