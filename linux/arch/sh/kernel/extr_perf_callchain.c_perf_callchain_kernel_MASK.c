
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;
struct perf_callchain_entry_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_callchain_entry_ctx*,int ) ;
 int FUNC_1 (int *,struct pt_regs*,int *,int *,struct perf_callchain_entry_ctx*) ;

void
FUNC_2(struct perf_callchain_entry_ctx *VAR_1, struct pt_regs *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->pc);

 FUNC_1(((void*)0), VAR_2, ((void*)0), &VAR_0, VAR_1);
}
