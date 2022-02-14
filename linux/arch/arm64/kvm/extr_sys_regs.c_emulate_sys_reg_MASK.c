
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sys_reg_params {int dummy; } ;
struct sys_reg_desc {int dummy; } ;
struct TYPE_2__ {int target; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 size_t FUNC_0 (struct sys_reg_desc const*) ;
 struct sys_reg_desc* FUNC_1 (struct sys_reg_params*,struct sys_reg_desc const*,size_t) ;
 struct sys_reg_desc* FUNC_2 (int ,int,size_t*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct sys_reg_desc const*) ;
 int FUNC_6 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;
 int FUNC_7 (struct sys_reg_params*) ;
 struct sys_reg_desc const* VAR_0 ;
 int * FUNC_8 (struct kvm_vcpu*) ;
 int * FUNC_9 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_10(struct kvm_vcpu *VAR_1,
      struct sys_reg_params *VAR_2)
{
 size_t VAR_3;
 const struct sys_reg_desc *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(VAR_1->arch.target, 1, &VAR_3);


 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_0));

 if (FUNC_5(VAR_5)) {
  FUNC_6(VAR_1, VAR_2, VAR_5);
 } else {
  FUNC_3("Unsupported guest sys_reg access at: %lx [%08lx]\n",
   *FUNC_9(VAR_1), *FUNC_8(VAR_1));
  FUNC_7(VAR_2);
  FUNC_4(VAR_1);
 }
 return 1;
}
