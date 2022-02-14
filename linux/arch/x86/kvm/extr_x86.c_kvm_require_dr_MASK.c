
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

bool FUNC_2(struct kvm_vcpu *VAR_2, int VAR_3)
{
 if ((VAR_3 != 4 && VAR_3 != 5) || !FUNC_1(VAR_2, VAR_1))
  return 1;

 FUNC_0(VAR_2, VAR_0);
 return 0;
}
