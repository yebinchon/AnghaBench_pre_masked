
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int is_ftrace_insn; int * insn; } ;
struct kprobe {int* addr; TYPE_1__ ainsn; int opcode; } ;
struct ftrace_insn {int dummy; } ;
typedef int s64 ;
typedef int s32 ;


 int FUNC_0 (struct ftrace_insn*) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct kprobe *VAR_0)
{
 unsigned long VAR_1 = (unsigned long) VAR_0->addr;
 s64 VAR_2, VAR_3;
 u64 VAR_4, VAR_5;

 if (FUNC_1(VAR_1) == VAR_1) {






  FUNC_0((struct ftrace_insn *)VAR_0->ainsn.insn);
  VAR_0->ainsn.is_ftrace_insn = 1;
 } else
  FUNC_3(VAR_0->ainsn.insn, VAR_0->addr, FUNC_2(*VAR_0->addr >> 8));
 VAR_0->opcode = VAR_0->ainsn.insn[0];
 if (!FUNC_4(VAR_0->ainsn.insn))
  return;







 VAR_2 = *(s32 *)&VAR_0->ainsn.insn[1];
 VAR_4 = (u64)(unsigned long)VAR_0->addr;
 VAR_5 = (u64)(unsigned long)VAR_0->ainsn.insn;
 VAR_3 = ((VAR_4 + (VAR_2 * 2)) - VAR_5) / 2;
 *(s32 *)&VAR_0->ainsn.insn[1] = VAR_3;
}
