
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned int ret; unsigned int bta; unsigned int lp_end; unsigned int lp_start; scalar_t__ lp_count; int status32; } ;
struct disasm_state {int zz; int * words; scalar_t__ instr_len; scalar_t__ fault; int write; scalar_t__ di; } ;
struct callee_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (unsigned int,struct disasm_state*,int,struct pt_regs*,struct callee_regs*) ;
 int FUNC_2 (struct disasm_state*,struct pt_regs*,struct callee_regs*) ;
 int FUNC_3 (struct disasm_state*,struct pt_regs*,struct callee_regs*) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,int,struct pt_regs*,unsigned long) ;
 int FUNC_6 (char*,int ,unsigned long) ;
 int FUNC_7 (char*,int ,int ,unsigned long,unsigned int) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (struct pt_regs*) ;

int FUNC_11(unsigned long VAR_6, struct pt_regs *VAR_7,
       struct callee_regs *VAR_8)
{
 struct disasm_state VAR_9;
 char VAR_10[VAR_2];


 if (!FUNC_10(VAR_7) || !VAR_5)
  return 1;

 if (VAR_4) {
  FUNC_8("%s(%d) made unaligned access which was emulated"
        " by kernel assist\n. This can degrade application"
        " performance significantly\n. To enable further"
        " logging of such instances, please \n"
        " echo 0 > /proc/sys/kernel/ignore-unaligned-usertrap\n",
        FUNC_4(VAR_10, VAR_3), FUNC_9(VAR_3));
 } else {

  FUNC_7("%s(%d): unaligned access to/from 0x%lx by PC: 0x%lx\n",
   FUNC_4(VAR_10, VAR_3), FUNC_9(VAR_3),
   VAR_6, VAR_7->ret);

 }

 FUNC_1(VAR_7->ret, &VAR_9, 1, VAR_7, VAR_8);

 if (VAR_9.fault)
  goto fault;


 if ((VAR_9.zz == 1) || (VAR_9.di))
  goto fault;

 if (!VAR_9.write)
  FUNC_2(&VAR_9, VAR_7, VAR_8);
 else
  FUNC_3(&VAR_9, VAR_7, VAR_8);

 if (VAR_9.fault)
  goto fault;


 if (FUNC_0(VAR_7)) {
  VAR_7->ret = VAR_7->bta & ~1U;
  VAR_7->status32 &= ~VAR_1;
 } else {
  VAR_7->ret += VAR_9.instr_len;


  if ((VAR_7->ret == VAR_7->lp_end) && (VAR_7->lp_count)) {
   VAR_7->ret = VAR_7->lp_start;
   VAR_7->lp_count--;
  }
 }

 FUNC_5(VAR_0, 1, VAR_7, VAR_6);
 return 0;

fault:
 FUNC_6("Alignment trap: fault in fix-up %08lx at [<%08lx>]\n",
  VAR_9.words[0], VAR_6);

 return 1;
}
