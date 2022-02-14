
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_desc {int (* visibility ) (struct kvm_vcpu const*,struct sys_reg_desc const*) ;} ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu const*,struct sys_reg_desc const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct kvm_vcpu *VAR_1,
        const struct sys_reg_desc *VAR_2)
{
 if (FUNC_0(!VAR_2->visibility))
  return 0;

 return VAR_2->visibility(VAR_1, VAR_2) & VAR_0;
}
