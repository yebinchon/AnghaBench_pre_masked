
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vpa_update_lock; int vpa; int slb_shadow; int dtl; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1)
{
 FUNC_2(&VAR_1->arch.vpa_update_lock);
 FUNC_4(VAR_1->kvm, &VAR_1->arch.dtl);
 FUNC_4(VAR_1->kvm, &VAR_1->arch.slb_shadow);
 FUNC_4(VAR_1->kvm, &VAR_1->arch.vpa);
 FUNC_3(&VAR_1->arch.vpa_update_lock);
 FUNC_1(VAR_1);
 FUNC_0(VAR_0, VAR_1);
}
