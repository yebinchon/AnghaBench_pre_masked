
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ opcode; int rs; int simmediate; } ;
union mips_instruction {int word; int halfword; TYPE_1__ mm_a_format; } ;
struct pt_regs {int cp0_epc; long* regs; } ;
struct emuframe {int emul; int badinst; } ;
typedef int s32 ;
typedef int mips_instruction ;
typedef int fr ;
struct TYPE_6__ {unsigned long bd_emu_branch_pc; unsigned long bd_emu_cont_pc; int bd_emu_frame; } ;
struct TYPE_7__ {TYPE_2__ thread; int mm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,unsigned long,struct emuframe*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 TYPE_3__* VAR_5 ;
 int * FUNC_6 () ;
 int VAR_6 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (char*,int,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct pt_regs *VAR_8, mips_instruction VAR_9,
  unsigned long VAR_10, unsigned long VAR_11)
{
 int VAR_12 = FUNC_8(VAR_8->cp0_epc);
 mips_instruction VAR_13;
 unsigned long VAR_14;
 struct emuframe VAR_15;
 int VAR_16, VAR_17;


 if (VAR_9 == 0)
  return -1;


 if (VAR_12) {
  union mips_instruction VAR_18 = { .word = VAR_9 };


  if ((VAR_9 >> 16) == VAR_3)
   return -1;


  if (VAR_18.mm_a_format.opcode == VAR_7) {
   unsigned int VAR_19;
   s32 VAR_20;

   VAR_19 = (((VAR_18.mm_a_format.rs + 0xe) & 0xf) + 2);
   VAR_20 = VAR_8->cp0_epc & ~3;
   VAR_20 += VAR_18.mm_a_format.simmediate << 2;
   VAR_8->regs[VAR_19] = (long)VAR_20;
   return -1;
  }
 }

 FUNC_9("dsemul 0x%08lx cont at 0x%08lx\n", VAR_8->cp0_epc, VAR_11);


 VAR_16 = FUNC_4(&VAR_5->thread.bd_emu_frame);
 if (VAR_16 == VAR_0)
  VAR_16 = FUNC_3();
 if (VAR_16 == VAR_0)
  return VAR_4;


 VAR_13 = FUNC_0(VAR_12);


 if (VAR_12) {
  union mips_instruction VAR_21 = {
   .halfword = { VAR_9 >> 16, VAR_9 }
  };
  union mips_instruction VAR_22 = {
   .halfword = { VAR_13 >> 16, VAR_13 }
  };

  VAR_15.emul = VAR_21.word;
  VAR_15.badinst = VAR_22.word;
 } else {
  VAR_15.emul = VAR_9;
  VAR_15.badinst = VAR_13;
 }


 VAR_14 = (unsigned long)&FUNC_6()[VAR_16];
 VAR_17 = FUNC_2(VAR_5, VAR_14, &VAR_15, sizeof(VAR_15),
    VAR_1 | VAR_2);
 if (FUNC_10(VAR_17 != sizeof(VAR_15))) {
  FUNC_1(VAR_6);
  FUNC_7(VAR_16, VAR_5->mm);
  return VAR_4;
 }


 VAR_5->thread.bd_emu_branch_pc = VAR_10;
 VAR_5->thread.bd_emu_cont_pc = VAR_11;
 FUNC_5(&VAR_5->thread.bd_emu_frame, VAR_16);


 VAR_8->cp0_epc = VAR_14 | VAR_12;

 return 0;
}
