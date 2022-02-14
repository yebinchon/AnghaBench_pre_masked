
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unwind_state {int dummy; } ;
struct pt_regs {unsigned long ip; scalar_t__ sp; } ;
struct perf_callchain_entry_ctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* is_in_guest ) () ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_callchain_entry_ctx*,unsigned long) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct unwind_state*) ;
 unsigned long FUNC_4 (struct unwind_state*) ;
 int FUNC_5 (struct unwind_state*) ;
 int FUNC_6 (struct unwind_state*,int ,struct pt_regs*,void*) ;

void
FUNC_7(struct perf_callchain_entry_ctx *VAR_2, struct pt_regs *VAR_3)
{
 struct unwind_state VAR_4;
 unsigned long VAR_5;

 if (VAR_1 && VAR_1->is_in_guest()) {

  return;
 }

 if (FUNC_0(VAR_2, VAR_3->ip))
  return;

 if (FUNC_1(VAR_3))
  FUNC_6(&VAR_4, VAR_0, VAR_3, ((void*)0));
 else
  FUNC_6(&VAR_4, VAR_0, ((void*)0), (void *)VAR_3->sp);

 for (; !FUNC_3(&VAR_4); FUNC_5(&VAR_4)) {
  VAR_5 = FUNC_4(&VAR_4);
  if (!VAR_5 || FUNC_0(VAR_2, VAR_5))
   return;
 }
}
