
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int shadow_zero_check; } ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct kvm_vcpu *VAR_1,
    struct kvm_mmu *VAR_2, bool VAR_3)
{
 FUNC_0(&VAR_2->shadow_zero_check,
        VAR_0, VAR_3);
}
