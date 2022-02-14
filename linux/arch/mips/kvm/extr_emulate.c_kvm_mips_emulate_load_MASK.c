
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rt; int opcode; } ;
union mips_instruction {int word; TYPE_1__ i_format; } ;
typedef int u32 ;
struct TYPE_6__ {unsigned long pc; unsigned long io_pc; int io_gpr; int host_cp0_badvaddr; } ;
struct kvm_vcpu {int mmio_needed; scalar_t__ mmio_is_write; TYPE_2__ arch; } ;
struct TYPE_7__ {scalar_t__ phys_addr; int len; scalar_t__ is_write; } ;
struct kvm_run {TYPE_3__ mmio; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;
struct TYPE_8__ {scalar_t__ (* gva_to_gpa ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 TYPE_4__* VAR_3 ;







 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

enum emulation_result FUNC_3(union mips_instruction VAR_4,
         u32 VAR_5, struct kvm_run *VAR_6,
         struct kvm_vcpu *VAR_7)
{
 enum emulation_result VAR_8;
 unsigned long VAR_9;
 u32 VAR_10, VAR_11;

 VAR_11 = VAR_4.i_format.rt;
 VAR_10 = VAR_4.i_format.opcode;






 VAR_9 = VAR_7->arch.pc;
 VAR_8 = FUNC_2(VAR_7, VAR_5);
 if (VAR_8 == VAR_1)
  return VAR_8;
 VAR_7->arch.io_pc = VAR_7->arch.pc;
 VAR_7->arch.pc = VAR_9;

 VAR_7->arch.io_gpr = VAR_11;

 VAR_6->mmio.phys_addr = VAR_3->gva_to_gpa(
      VAR_7->arch.host_cp0_badvaddr);
 if (VAR_6->mmio.phys_addr == VAR_2)
  return VAR_1;

 VAR_7->mmio_needed = 2;
 switch (VAR_10) {
 case 129:
  VAR_6->mmio.len = 4;
  break;

 case 130:
  VAR_7->mmio_needed = 1;

 case 131:
  VAR_6->mmio.len = 2;
  break;

 case 133:
  VAR_7->mmio_needed = 1;

 case 134:
  VAR_6->mmio.len = 1;
  break;

 default:
  FUNC_0("Load not yet supported (inst=0x%08x)\n",
   VAR_4.word);
  VAR_7->mmio_needed = 0;
  return VAR_1;
 }

 VAR_6->mmio.is_write = 0;
 VAR_7->mmio_is_write = 0;
 return VAR_0;
}
