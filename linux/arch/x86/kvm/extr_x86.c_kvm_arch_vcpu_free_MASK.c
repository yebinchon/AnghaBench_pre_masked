
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* wbinvd_dirty_mask; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* vcpu_free ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (void*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_1)
{
 void *VAR_2 = VAR_1->arch.wbinvd_dirty_mask;

 FUNC_1(VAR_1);

 VAR_0->vcpu_free(VAR_1);
 FUNC_0(VAR_2);
}
