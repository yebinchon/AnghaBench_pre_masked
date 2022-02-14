
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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_one_reg const*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_one_reg const*) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_one_reg const*) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_one_reg const*) ;
 int FUNC_5 (struct kvm_vcpu*,struct kvm_one_reg const*) ;

int FUNC_6(struct kvm_vcpu *VAR_4, const struct kvm_one_reg *VAR_5)
{

 if ((VAR_5->id & ~VAR_3) >> 32 != VAR_1 >> 32)
  return -VAR_0;

 switch (VAR_5->id & VAR_2) {
 case 129: return FUNC_3(VAR_4, VAR_5);
 case 128: return FUNC_1(VAR_4, VAR_5);
 case 130: return FUNC_4(VAR_4, VAR_5);
 }

 if (FUNC_0(VAR_5->id))
  return FUNC_5(VAR_4, VAR_5);

 return FUNC_2(VAR_4, VAR_5);
}
