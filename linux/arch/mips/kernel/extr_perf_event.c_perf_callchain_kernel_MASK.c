
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* regs; unsigned long cp0_epc; } ;
struct perf_callchain_entry_ctx {scalar_t__ nr; scalar_t__ max_stack; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (struct perf_callchain_entry_ctx*,unsigned long) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct perf_callchain_entry_ctx*,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ,unsigned long*,unsigned long,unsigned long*) ;

void FUNC_5(struct perf_callchain_entry_ctx *VAR_3,
      struct pt_regs *VAR_4)
{
 unsigned long VAR_5 = VAR_4->regs[29];
 FUNC_2(VAR_3, VAR_5);

}
