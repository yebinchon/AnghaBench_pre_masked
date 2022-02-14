
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int vm_cr_msr; } ;
struct vcpu_svm {TYPE_2__ nested; } ;
struct TYPE_3__ {int efer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vcpu_svm* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_4, u64 VAR_5)
{
 struct vcpu_svm *VAR_6 = FUNC_0(VAR_4);
 int VAR_7, VAR_8;

 if (VAR_5 & ~VAR_3)
  return 1;

 VAR_8 = VAR_3;

 if (VAR_6->nested.vm_cr_msr & VAR_1)
  VAR_8 &= ~(VAR_2 | VAR_1);

 VAR_6->nested.vm_cr_msr &= ~VAR_8;
 VAR_6->nested.vm_cr_msr |= (VAR_5 & VAR_8);

 VAR_7 = VAR_6->nested.vm_cr_msr & VAR_1;


 if (VAR_7 && (VAR_4->arch.efer & VAR_0))
  return 1;

 return 0;
}
