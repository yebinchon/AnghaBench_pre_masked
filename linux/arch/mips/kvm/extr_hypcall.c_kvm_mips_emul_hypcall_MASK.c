
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code; } ;
union mips_instruction {TYPE_1__ co_format; } ;
struct TYPE_4__ {int pc; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,unsigned int) ;

enum emulation_result FUNC_1(struct kvm_vcpu *VAR_2,
         union mips_instruction VAR_3)
{
 unsigned int VAR_4 = (VAR_3.co_format.code >> 5) & 0x3ff;

 FUNC_0("[%#lx] HYPCALL %#03x\n", VAR_2->arch.pc, VAR_4);

 switch (VAR_4) {
 case 0:
  return VAR_1;
 default:
  return VAR_0;
 };
}
