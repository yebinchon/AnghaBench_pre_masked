
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vcpu_svm {scalar_t__ dfr_reg; int ldr_reg; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct kvm_vcpu*,int ,int) ;
 int FUNC_1 (int ,unsigned long*) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_2(VAR_2);
 bool VAR_4 = VAR_3->dfr_reg == VAR_0;
 u32 *VAR_5 = FUNC_0(VAR_2, VAR_3->ldr_reg, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_1, (unsigned long *)VAR_5);
}
