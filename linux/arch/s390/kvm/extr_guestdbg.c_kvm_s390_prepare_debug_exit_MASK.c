
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int guest_debug; TYPE_1__* run; } ;
struct TYPE_2__ {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct kvm_vcpu *VAR_2)
{
 VAR_2->run->exit_reason = VAR_0;
 VAR_2->guest_debug &= ~VAR_1;
}
