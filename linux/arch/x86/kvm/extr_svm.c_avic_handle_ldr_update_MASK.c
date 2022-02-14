
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vcpu_svm {scalar_t__ ldr_reg; } ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct vcpu_svm* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_1)
{
 int VAR_2 = 0;
 struct vcpu_svm *VAR_3 = FUNC_4(VAR_1);
 u32 VAR_4 = FUNC_2(VAR_1->arch.apic, VAR_0);
 u32 VAR_5 = FUNC_3(VAR_1->arch.apic);

 if (VAR_4 == VAR_3->ldr_reg)
  return 0;

 FUNC_0(VAR_1);

 if (VAR_4)
  VAR_2 = FUNC_1(VAR_1, VAR_5, VAR_4);

 if (!VAR_2)
  VAR_3->ldr_reg = VAR_4;

 return VAR_2;
}
