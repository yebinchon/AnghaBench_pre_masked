
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vm86_active; } ;
struct vcpu_vmx {TYPE_1__ rmode; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct vcpu_vmx*,int ) ;

int FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_2->rmode.vm86_active))
  return 0;
 else {
  int VAR_3 = FUNC_3(VAR_2, VAR_0);
  return FUNC_0(VAR_3);
 }
}
