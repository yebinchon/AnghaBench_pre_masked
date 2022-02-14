
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 128:
  if (!FUNC_2(VAR_2))
   return -VAR_0;

  if (FUNC_0(VAR_2))
   return -VAR_1;

  return FUNC_1(VAR_2);
 }

 return -VAR_0;
}
