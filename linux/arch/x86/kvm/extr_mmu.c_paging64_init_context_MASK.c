
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_mmu*,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2,
      struct kvm_mmu *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2) ?
    VAR_1 : VAR_0;

 FUNC_1(VAR_2, VAR_3, VAR_4);
}
