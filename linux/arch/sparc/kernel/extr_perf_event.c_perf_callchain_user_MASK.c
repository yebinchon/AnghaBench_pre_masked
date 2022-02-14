
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct pt_regs {int tpc; } ;
struct perf_callchain_entry_ctx {int dummy; } ;
struct TYPE_4__ {int mm; } ;
struct TYPE_3__ {int fault_address; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct perf_callchain_entry_ctx*,int ) ;
 int FUNC_6 (struct perf_callchain_entry_ctx*,struct pt_regs*) ;
 int FUNC_7 (struct perf_callchain_entry_ctx*,struct pt_regs*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

void
FUNC_10(struct perf_callchain_entry_ctx *VAR_2, struct pt_regs *VAR_3)
{
 u64 VAR_4 = FUNC_0()->fault_address;
 u8 VAR_5 = FUNC_2();

 FUNC_5(VAR_2, VAR_3->tpc);

 if (!VAR_1->mm)
  return;

 FUNC_1();

 FUNC_3();

 if (FUNC_9(VAR_0))
  FUNC_6(VAR_2, VAR_3);
 else
  FUNC_7(VAR_2, VAR_3);

 FUNC_4();

 FUNC_8(VAR_5);
 FUNC_0()->fault_address = VAR_4;
}
