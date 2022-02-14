
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long addr; } ;
struct pt_regs {unsigned long* gprs; TYPE_1__ psw; } ;
struct kprobe_ctlblk {int dummy; } ;
struct TYPE_4__ {int* insn; scalar_t__ is_ftrace_insn; } ;
struct kprobe {TYPE_2__ ainsn; scalar_t__ addr; } ;
struct ftrace_insn {scalar_t__ disp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kprobe_ctlblk*,struct pt_regs*,unsigned long) ;
 int FUNC_1 (struct ftrace_insn*,unsigned long) ;
 struct kprobe_ctlblk* FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5(struct kprobe *VAR_5, struct pt_regs *VAR_6)
{
 struct kprobe_ctlblk *VAR_7 = FUNC_2();
 unsigned long VAR_8 = VAR_6->psw.addr;
 int VAR_9 = FUNC_4(VAR_5->ainsn.insn);


 if (VAR_5->ainsn.is_ftrace_insn) {
  struct ftrace_insn *VAR_10 = (struct ftrace_insn *) VAR_5->addr;
  struct ftrace_insn VAR_11;

  FUNC_1(&VAR_11, (unsigned long) VAR_5->addr);






  if (VAR_10->disp == VAR_3) {
   VAR_8 += VAR_11.disp * 2 - VAR_4;
   VAR_6->gprs[0] = (unsigned long)VAR_5->addr + sizeof(*VAR_10);
  }
 }

 if (VAR_9 & VAR_1)
  VAR_8 += (unsigned long) VAR_5->addr - (unsigned long) VAR_5->ainsn.insn;

 if (VAR_9 & VAR_0) {
  int VAR_12 = FUNC_3(VAR_5->ainsn.insn[0] >> 8);
  if (VAR_8 - (unsigned long) VAR_5->ainsn.insn == VAR_12)
   VAR_8 = (unsigned long) VAR_5->addr + VAR_12;
 }

 if (VAR_9 & VAR_2) {
  int VAR_13 = (VAR_5->ainsn.insn[0] & 0xf0) >> 4;
  VAR_6->gprs[VAR_13] += (unsigned long) VAR_5->addr -
       (unsigned long) VAR_5->ainsn.insn;
 }

 FUNC_0(VAR_7, VAR_6, VAR_8);
}
