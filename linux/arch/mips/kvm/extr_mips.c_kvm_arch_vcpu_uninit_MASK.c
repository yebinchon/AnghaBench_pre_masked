
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* vcpu_uninit ) (struct kvm_vcpu*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

void FUNC_1(struct kvm_vcpu *VAR_1)
{
 VAR_0->vcpu_uninit(VAR_1);
}
