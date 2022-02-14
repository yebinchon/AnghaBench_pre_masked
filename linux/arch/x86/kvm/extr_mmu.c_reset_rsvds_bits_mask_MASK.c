
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int nx; int root_level; int guest_rsvd_check; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1,
      struct kvm_mmu *VAR_2)
{
 FUNC_0(VAR_1, &VAR_2->guest_rsvd_check,
    FUNC_1(VAR_1), VAR_2->root_level,
    VAR_2->nx,
    FUNC_2(VAR_1, VAR_0),
    FUNC_4(VAR_1), FUNC_3(VAR_1));
}
