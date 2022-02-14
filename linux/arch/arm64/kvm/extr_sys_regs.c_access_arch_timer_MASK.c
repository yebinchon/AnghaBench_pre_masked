
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int regval; scalar_t__ is_write; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef enum kvm_arch_timers { ____Placeholder_kvm_arch_timers } kvm_arch_timers ;
typedef enum kvm_arch_timer_regs { ____Placeholder_kvm_arch_timer_regs } kvm_arch_timer_regs ;


 int FUNC_0 () ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,int,int,int ) ;
 int FUNC_3 (struct sys_reg_desc const*) ;

__attribute__((used)) static bool FUNC_4(struct kvm_vcpu *VAR_4,
         struct sys_reg_params *VAR_5,
         const struct sys_reg_desc *VAR_6)
{
 enum kvm_arch_timers VAR_7;
 enum kvm_arch_timer_regs VAR_8;
 u64 VAR_9 = FUNC_3(VAR_6);

 switch (VAR_9) {
 case 128:
 case 131:
  VAR_7 = VAR_0;
  VAR_8 = VAR_3;
  break;
 case 130:
 case 133:
  VAR_7 = VAR_0;
  VAR_8 = VAR_1;
  break;
 case 129:
 case 132:
  VAR_7 = VAR_0;
  VAR_8 = VAR_2;
  break;
 default:
  FUNC_0();
 }

 if (VAR_5->is_write)
  FUNC_2(VAR_4, VAR_7, VAR_8, VAR_5->regval);
 else
  VAR_5->regval = FUNC_1(VAR_4, VAR_7, VAR_8);

 return 1;
}
