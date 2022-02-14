
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {TYPE_2__* apic; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int timer_advance_ns; } ;
struct TYPE_5__ {TYPE_1__ lapic_timer; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, u64 *VAR_1)
{
 struct kvm_vcpu *VAR_2 = (struct kvm_vcpu *) VAR_0;
 *VAR_1 = VAR_2->arch.apic->lapic_timer.timer_advance_ns;
 return 0;
}
