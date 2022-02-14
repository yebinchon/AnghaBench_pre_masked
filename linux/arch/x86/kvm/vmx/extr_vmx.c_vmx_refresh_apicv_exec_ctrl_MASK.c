
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct vcpu_vmx*,int ) ;
 int FUNC_4 (struct vcpu_vmx*,int) ;
 int FUNC_5 (struct vcpu_vmx*,int) ;
 struct vcpu_vmx* FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct vcpu_vmx*) ;
 int FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_2)
{
 struct vcpu_vmx *VAR_3 = FUNC_6(VAR_2);

 FUNC_3(VAR_3, FUNC_7(VAR_3));
 if (FUNC_0()) {
  if (FUNC_2(VAR_2))
   FUNC_5(VAR_3,
          VAR_0 |
          VAR_1);
  else
   FUNC_4(VAR_3,
     VAR_0 |
     VAR_1);
 }

 if (FUNC_1())
  FUNC_8(VAR_2);
}
