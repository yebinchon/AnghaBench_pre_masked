
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int regval; int is_32bit; scalar_t__ is_aarch32; int is_write; } ;
struct sys_reg_desc {int reg; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static bool FUNC_7(struct kvm_vcpu *VAR_0,
     struct sys_reg_params *VAR_1,
     const struct sys_reg_desc *VAR_2)
{
 bool VAR_3 = FUNC_4(VAR_0);
 u64 VAR_4;
 int VAR_5 = VAR_2->reg;

 FUNC_0(!VAR_1->is_write);


 if (VAR_1->is_aarch32)
  VAR_5 = VAR_2->reg / 2;

 if (!VAR_1->is_aarch32 || !VAR_1->is_32bit) {
  VAR_4 = VAR_1->regval;
 } else {
  VAR_4 = FUNC_5(VAR_0, VAR_5);
  if (VAR_2->reg % 2)
   VAR_4 = (VAR_1->regval << 32) | (u64)FUNC_2(VAR_4);
  else
   VAR_4 = ((u64)FUNC_3(VAR_4) << 32) |
    FUNC_2(VAR_1->regval);
 }
 FUNC_6(VAR_0, VAR_4, VAR_5);

 FUNC_1(VAR_0, VAR_3);
 return 1;
}
