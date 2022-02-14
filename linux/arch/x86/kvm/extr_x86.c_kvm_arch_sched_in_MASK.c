
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l1tf_flush_l1d; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* sched_in ) (struct kvm_vcpu*,int) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;

void FUNC_1(struct kvm_vcpu *VAR_1, int VAR_2)
{
 VAR_1->arch.l1tf_flush_l1d = 1;
 VAR_0->sched_in(VAR_1, VAR_2);
}
