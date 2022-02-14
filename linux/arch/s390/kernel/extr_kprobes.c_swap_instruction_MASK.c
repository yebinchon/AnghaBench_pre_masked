
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_insn_args {scalar_t__ arm_kprobe; struct kprobe* p; } ;
struct TYPE_2__ {int is_ftrace_insn; } ;
struct kprobe {scalar_t__ addr; TYPE_1__ ainsn; int opcode; } ;
struct ftrace_insn {scalar_t__ disp; int opc; } ;
typedef int new_insn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ftrace_insn*,unsigned long) ;
 int FUNC_1 (struct ftrace_insn*) ;
 scalar_t__ FUNC_2 (struct ftrace_insn*) ;
 int FUNC_3 (scalar_t__,struct ftrace_insn*,size_t) ;

__attribute__((used)) static int FUNC_4(void *VAR_3)
{
 struct swap_insn_args *VAR_4 = VAR_3;
 struct ftrace_insn VAR_5, *VAR_6;
 struct kprobe *VAR_7 = VAR_4->p;
 size_t VAR_8;

 VAR_5.opc = VAR_4->arm_kprobe ? VAR_0 : VAR_7->opcode;
 VAR_8 = sizeof(VAR_5.opc);
 if (!VAR_7->ainsn.is_ftrace_insn)
  goto skip_ftrace;
 VAR_8 = sizeof(VAR_5);
 VAR_6 = (struct ftrace_insn *) VAR_7->addr;
 if (VAR_4->arm_kprobe) {
  if (FUNC_2(VAR_6))
   VAR_5.disp = VAR_2;
  else
   VAR_5.disp = VAR_1;
 } else {
  FUNC_0(&VAR_5, (unsigned long)VAR_7->addr);
  if (VAR_6->disp == VAR_2)
   FUNC_1(&VAR_5);
 }
skip_ftrace:
 FUNC_3(VAR_7->addr, &VAR_5, VAR_8);
 return 0;
}
