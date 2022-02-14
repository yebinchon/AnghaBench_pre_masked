
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;

long FUNC_2(struct kvm_vcpu *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, FUNC_1(VAR_2, 4),
   FUNC_1(VAR_2, 5), FUNC_1(VAR_2, 6));
 if (VAR_3)
  return VAR_0;
 return VAR_1;
}
