
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sys_reg_params {int regval; scalar_t__ is_32bit; } ;
struct TYPE_2__ {int flags; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_1,
         struct sys_reg_params *VAR_2,
         u64 *VAR_3)
{
 u64 VAR_4 = VAR_2->regval;

 if (VAR_2->is_32bit) {
  VAR_4 &= 0xffffffffUL;
  VAR_4 |= ((*VAR_3 >> 32) << 32);
 }

 *VAR_3 = VAR_4;
 VAR_1->arch.flags |= VAR_0;
}
