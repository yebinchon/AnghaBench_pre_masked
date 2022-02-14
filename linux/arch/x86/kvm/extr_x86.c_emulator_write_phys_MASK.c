
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (struct kvm_vcpu*,int ,void const*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ,void const*,int) ;

int FUNC_2(struct kvm_vcpu *VAR_0, gpa_t VAR_1,
   const void *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return 0;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 return 1;
}
