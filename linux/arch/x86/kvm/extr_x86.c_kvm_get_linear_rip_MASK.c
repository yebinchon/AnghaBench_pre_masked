
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;

unsigned long FUNC_3(struct kvm_vcpu *VAR_1)
{
 if (FUNC_1(VAR_1))
  return FUNC_2(VAR_1);
 return (u32)(FUNC_0(VAR_1, VAR_0) +
       FUNC_2(VAR_1));
}
