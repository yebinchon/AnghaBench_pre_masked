
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct perf_callchain_entry_ctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* is_in_guest ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,struct pt_regs*,int ,struct perf_callchain_entry_ctx*) ;

void FUNC_3(struct perf_callchain_entry_ctx *VAR_2,
      struct pt_regs *VAR_3)
{

 if (VAR_1 && VAR_1->is_in_guest()) {
  FUNC_0("RISC-V does not support perf in guest mode!");
  return;
 }

 FUNC_2(((void*)0), VAR_3, VAR_0, VAR_2);
}
