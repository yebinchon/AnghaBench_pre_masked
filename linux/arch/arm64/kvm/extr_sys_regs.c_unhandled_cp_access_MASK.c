
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sys_reg_params {int dummy; } ;
struct kvm_vcpu {int dummy; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct sys_reg_params*) ;
 int * FUNC_5 (struct kvm_vcpu*) ;
 int * FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_0,
    struct sys_reg_params *VAR_1)
{
 u8 VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = -1;

 switch(VAR_2) {
 case 129:
 case 128:
  VAR_3 = 15;
  break;
 case 130:
 case 131:
  VAR_3 = 14;
  break;
 default:
  FUNC_0(1);
 }

 FUNC_1("Unsupported guest CP%d access at: %08lx [%08lx]\n",
  VAR_3, *FUNC_6(VAR_0), *FUNC_5(VAR_0));
 FUNC_4(VAR_1);
 FUNC_2(VAR_0);
}
