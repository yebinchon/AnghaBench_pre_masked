
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msr_val; } ;
struct TYPE_5__ {TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int (* vcpu_free ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 VAR_1->arch.apf.msr_val = 0;

 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);

 VAR_0->vcpu_free(VAR_1);
}
