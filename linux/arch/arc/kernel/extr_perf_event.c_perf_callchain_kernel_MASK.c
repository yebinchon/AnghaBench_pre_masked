
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_callchain_entry_ctx {int dummy; } ;
struct arc_callchain_trace {struct perf_callchain_entry_ctx* perf_stuff; int depth; } ;


 int FUNC_0 (int *,struct pt_regs*,int ,struct arc_callchain_trace*) ;
 int VAR_0 ;

void FUNC_1(struct perf_callchain_entry_ctx *VAR_1,
      struct pt_regs *VAR_2)
{
 struct arc_callchain_trace VAR_3 = {
  .depth = 0,
  .perf_stuff = VAR_1,
 };

 FUNC_0(((void*)0), VAR_2, VAR_0, &VAR_3);
}
