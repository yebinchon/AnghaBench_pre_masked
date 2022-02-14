
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long s0; int ra; int sepc; } ;
struct perf_callchain_entry_ctx {scalar_t__ nr; scalar_t__ max_stack; } ;
struct TYPE_2__ {scalar_t__ (* is_in_guest ) () ;} ;


 int FUNC_0 (struct perf_callchain_entry_ctx*,int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 (struct perf_callchain_entry_ctx*,unsigned long,int ) ;

void FUNC_3(struct perf_callchain_entry_ctx *VAR_1,
    struct pt_regs *VAR_2)
{
 unsigned long VAR_3 = 0;


 if (VAR_0 && VAR_0->is_in_guest())
  return;

 VAR_3 = VAR_2->s0;
 FUNC_0(VAR_1, VAR_2->sepc);

 VAR_3 = FUNC_2(VAR_1, VAR_3, VAR_2->ra);
 while (VAR_3 && !(VAR_3 & 0x3) && VAR_1->nr < VAR_1->max_stack)
  VAR_3 = FUNC_2(VAR_1, VAR_3, 0);
}
