
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* apic; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int pending_events; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline int FUNC_2(struct kvm_vcpu *VAR_1)
{
 return FUNC_0(VAR_1) && FUNC_1(VAR_0, &VAR_1->arch.apic->pending_events);
}
