
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int posted_intr_nv; int pi_pending; } ;
struct vcpu_vmx {TYPE_1__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 struct vcpu_vmx* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_1,
      int VAR_2)
{
 struct vcpu_vmx *VAR_3 = FUNC_4(VAR_1);

 if (FUNC_0(VAR_1) &&
     VAR_2 == VAR_3->nested.posted_intr_nv) {




  VAR_3->nested.pi_pending = 1;
  FUNC_1(VAR_0, VAR_1);

  if (!FUNC_3(VAR_1, 1))
   FUNC_2(VAR_1);
  return 0;
 }
 return -1;
}
