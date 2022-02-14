
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sys_reg_params {int regval; scalar_t__ is_write; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct sys_reg_params*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_6,
   struct sys_reg_params *VAR_7,
   const struct sys_reg_desc *VAR_8)
{
 if (VAR_7->is_write) {
  return FUNC_1(VAR_6, VAR_7);
 } else {
  u64 VAR_9 = FUNC_2(VAR_4);
  u64 VAR_10 = FUNC_2(VAR_5);
  u32 VAR_11 = !!FUNC_0(VAR_10, VAR_3);

  VAR_7->regval = ((((VAR_9 >> VAR_2) & 0xf) << 28) |
        (((VAR_9 >> VAR_0) & 0xf) << 24) |
        (((VAR_9 >> VAR_1) & 0xf) << 20)
        | (6 << 16) | (VAR_11 << 14) | (VAR_11 << 12));
  return 1;
 }
}
