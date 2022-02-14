
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t rt; int opcode; } ;
union mips_instruction {int word; TYPE_1__ i_format; } ;
typedef size_t u8 ;
typedef size_t u64 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_7__ {unsigned long pc; size_t* gprs; int host_cp0_badvaddr; } ;
struct kvm_vcpu {int mmio_needed; int mmio_is_write; TYPE_3__ arch; } ;
struct TYPE_6__ {scalar_t__ phys_addr; int len; int is_write; void* data; } ;
struct kvm_run {TYPE_2__ mmio; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;
struct TYPE_8__ {scalar_t__ (* gva_to_gpa ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,unsigned long,int ,size_t,size_t) ;
 int FUNC_1 (char*,int ) ;
 TYPE_4__* VAR_3 ;



 scalar_t__ FUNC_2 (int ) ;

 int FUNC_3 (struct kvm_vcpu*,size_t) ;

enum emulation_result FUNC_4(union mips_instruction VAR_4,
          u32 VAR_5,
          struct kvm_run *VAR_6,
          struct kvm_vcpu *VAR_7)
{
 enum emulation_result VAR_8;
 u32 VAR_9;
 void *VAR_10 = VAR_6->mmio.data;
 unsigned long VAR_11;





 VAR_11 = VAR_7->arch.pc;
 VAR_8 = FUNC_3(VAR_7, VAR_5);
 if (VAR_8 == VAR_1)
  return VAR_8;

 VAR_9 = VAR_4.i_format.rt;

 VAR_6->mmio.phys_addr = VAR_3->gva_to_gpa(
      VAR_7->arch.host_cp0_badvaddr);
 if (VAR_6->mmio.phys_addr == VAR_2)
  goto out_fail;

 switch (VAR_4.i_format.opcode) {
 case 128:
  VAR_6->mmio.len = 4;
  *(u32 *)VAR_10 = VAR_7->arch.gprs[VAR_9];

  FUNC_0("[%#lx] OP_SW: eaddr: %#lx, gpr: %#lx, data: %#x\n",
     VAR_7->arch.pc, VAR_7->arch.host_cp0_badvaddr,
     VAR_7->arch.gprs[VAR_9], *(u32 *)VAR_10);
  break;

 case 129:
  VAR_6->mmio.len = 2;
  *(u16 *)VAR_10 = VAR_7->arch.gprs[VAR_9];

  FUNC_0("[%#lx] OP_SH: eaddr: %#lx, gpr: %#lx, data: %#x\n",
     VAR_7->arch.pc, VAR_7->arch.host_cp0_badvaddr,
     VAR_7->arch.gprs[VAR_9], *(u16 *)VAR_10);
  break;

 case 131:
  VAR_6->mmio.len = 1;
  *(u8 *)VAR_10 = VAR_7->arch.gprs[VAR_9];

  FUNC_0("[%#lx] OP_SB: eaddr: %#lx, gpr: %#lx, data: %#x\n",
     VAR_7->arch.pc, VAR_7->arch.host_cp0_badvaddr,
     VAR_7->arch.gprs[VAR_9], *(u8 *)VAR_10);
  break;

 default:
  FUNC_1("Store not yet supported (inst=0x%08x)\n",
   VAR_4.word);
  goto out_fail;
 }

 VAR_6->mmio.is_write = 1;
 VAR_7->mmio_needed = 1;
 VAR_7->mmio_is_write = 1;
 return VAR_0;

out_fail:

 VAR_7->arch.pc = VAR_11;
 return VAR_1;
}
