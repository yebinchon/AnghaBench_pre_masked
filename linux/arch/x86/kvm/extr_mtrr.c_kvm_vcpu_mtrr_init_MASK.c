
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int head; } ;
struct TYPE_4__ {TYPE_1__ mtrr_state; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct kvm_vcpu *VAR_0)
{
 FUNC_0(&VAR_0->arch.mtrr_state.head);
}
