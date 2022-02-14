
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_one_reg {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_one_reg const*) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_one_reg const*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_one_reg const*) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_one_reg const*) ;

int FUNC_5(struct kvm_vcpu *VAR_6, const struct kvm_one_reg *VAR_7)
{

 if ((VAR_7->id & ~VAR_5) >> 32 != VAR_1 >> 32)
  return -VAR_0;


 if ((VAR_7->id & VAR_2) == VAR_3)
  return FUNC_0(VAR_6, VAR_7);

 if ((VAR_7->id & VAR_2) == VAR_4)
  return FUNC_4(VAR_6, VAR_7);

 if (FUNC_2(VAR_7->id))
  return FUNC_1(VAR_6, VAR_7);

 return FUNC_3(VAR_6, VAR_7);
}
