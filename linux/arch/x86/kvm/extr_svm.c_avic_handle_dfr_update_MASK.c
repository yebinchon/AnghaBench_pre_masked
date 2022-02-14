
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vcpu_svm {scalar_t__ dfr_reg; } ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_1->arch.apic, VAR_0);

 if (VAR_2->dfr_reg == VAR_3)
  return;

 FUNC_0(VAR_1);
 VAR_2->dfr_reg = VAR_3;
}
