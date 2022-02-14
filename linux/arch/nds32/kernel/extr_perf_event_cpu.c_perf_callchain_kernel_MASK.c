
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stackframe {int sp; int lp; int fp; } ;
struct pt_regs {int sp; int lp; int fp; } ;
struct perf_callchain_entry_ctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* is_in_guest ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct stackframe*,int ,struct perf_callchain_entry_ctx*) ;

void
FUNC_2(struct perf_callchain_entry_ctx *VAR_2,
        struct pt_regs *VAR_3)
{
 struct stackframe VAR_4;

 if (VAR_1 && VAR_1->is_in_guest()) {

  return;
 }
 VAR_4.fp = VAR_3->fp;
 VAR_4.lp = VAR_3->lp;
 VAR_4.sp = VAR_3->sp;
 FUNC_1(&VAR_4, VAR_0, VAR_2);
}
