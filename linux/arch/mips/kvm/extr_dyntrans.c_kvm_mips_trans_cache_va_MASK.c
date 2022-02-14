
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int simmediate; int rt; int rs; int opcode; } ;
struct TYPE_3__ {int simmediate; } ;
union mips_instruction {TYPE_2__ i_format; TYPE_1__ spec3_format; int member_0; } ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int *,union mips_instruction) ;
 int VAR_2 ;

int FUNC_1(union mips_instruction VAR_3, u32 *VAR_4,
       struct kvm_vcpu *VAR_5)
{
 union mips_instruction VAR_6 = { 0 };

 VAR_6.i_format.opcode = VAR_0;
 VAR_6.i_format.rs = VAR_3.i_format.rs;
 VAR_6.i_format.rt = VAR_2;
 if (VAR_1)
  VAR_6.i_format.simmediate = VAR_3.spec3_format.simmediate;
 else
  VAR_6.i_format.simmediate = VAR_3.i_format.simmediate;

 return FUNC_0(VAR_5, VAR_4, VAR_6);
}
