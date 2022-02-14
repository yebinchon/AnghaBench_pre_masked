
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_0, unsigned long VAR_1)
{
 if (FUNC_2(VAR_0))
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, 1, VAR_1);
}
