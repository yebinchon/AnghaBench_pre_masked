
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_stackf {unsigned long callers_pc; scalar_t__ fp; } ;
struct pt_regs {unsigned long tpc; unsigned long* u_regs; } ;
struct perf_callchain_entry_ctx {scalar_t__ nr; scalar_t__ max_stack; } ;
struct ftrace_ret_stack {unsigned long ret; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct ftrace_ret_stack* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,struct pt_regs*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct perf_callchain_entry_ctx*,unsigned long) ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;

void FUNC_7(struct perf_callchain_entry_ctx *VAR_4,
      struct pt_regs *VAR_5)
{
 unsigned long VAR_6, VAR_7;




 FUNC_5();

 FUNC_4(VAR_4, VAR_5->tpc);

 VAR_6 = VAR_5->u_regs[VAR_1];
 VAR_7 = VAR_6 + VAR_0;
 do {
  struct sparc_stackf *VAR_8;
  struct pt_regs *VAR_9;
  unsigned long VAR_10;

  if (!FUNC_3(FUNC_0(), VAR_7))
   break;

  VAR_8 = (struct sparc_stackf *) VAR_7;
  VAR_9 = (struct pt_regs *) (VAR_8 + 1);

  if (FUNC_2(FUNC_0(), VAR_9)) {
   if (FUNC_6(VAR_9))
    break;
   VAR_10 = VAR_9->tpc;
   VAR_7 = VAR_9->u_regs[VAR_1] + VAR_0;
  } else {
   VAR_10 = VAR_8->callers_pc;
   VAR_7 = (unsigned long)VAR_8->fp + VAR_0;
  }
  FUNC_4(VAR_4, VAR_10);
 } while (VAR_4->nr < VAR_4->max_stack);
}
