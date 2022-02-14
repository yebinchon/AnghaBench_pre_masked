
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pir; } ;
struct vcpu_vmx {TYPE_2__ pi_desc; } ;
struct TYPE_4__ {int apicv_active; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 () ;
 struct vcpu_vmx* FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_12(struct kvm_vcpu *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_10(VAR_1);
 int VAR_3;
 bool VAR_4;

 FUNC_0(!VAR_1->arch.apicv_active);
 if (FUNC_8(&VAR_2->pi_desc)) {
  FUNC_7(&VAR_2->pi_desc);




  FUNC_9();
  VAR_4 =
   FUNC_2(VAR_1, VAR_2->pi_desc.pir, &VAR_3);
  if (FUNC_1(VAR_1) && VAR_4) {
   if (FUNC_6(VAR_1))
    FUNC_5(VAR_1);
   else
    FUNC_4(VAR_0, VAR_1);
  }
 } else {
  VAR_3 = FUNC_3(VAR_1);
 }
 FUNC_11(VAR_1, VAR_3);
 return VAR_3;
}
