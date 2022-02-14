
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu const*) ;

__attribute__((used)) static unsigned int FUNC_1(const struct kvm_vcpu *VAR_2,
       const struct sys_reg_desc *VAR_3)
{
 if (FUNC_0(VAR_2))
  return 0;

 return VAR_1 | VAR_0;
}
