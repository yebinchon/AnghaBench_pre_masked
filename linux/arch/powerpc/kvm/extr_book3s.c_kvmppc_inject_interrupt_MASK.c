
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int (* reset_msr ) (struct kvm_vcpu*) ;} ;
struct TYPE_4__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;

void FUNC_8(struct kvm_vcpu *VAR_0, int VAR_1, u64 VAR_2)
{
 FUNC_6(VAR_0);
 FUNC_4(VAR_0, FUNC_1(VAR_0));
 FUNC_5(VAR_0, (FUNC_0(VAR_0) & ~0x783f0000ul) | VAR_2);
 FUNC_3(VAR_0, FUNC_2(VAR_0) + VAR_1);
 VAR_0->arch.mmu.reset_msr(VAR_0);
}
