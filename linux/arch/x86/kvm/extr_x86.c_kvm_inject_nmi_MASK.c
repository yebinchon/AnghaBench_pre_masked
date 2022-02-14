
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nmi_queued; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_1)
{
 FUNC_0(&VAR_1->arch.nmi_queued);
 FUNC_1(VAR_0, VAR_1);
}
