
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int msr; scalar_t__ nip; } ;
struct perf_event {int dummy; } ;
struct TYPE_3__ {struct perf_event* last_hit_ubp; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct pt_regs*,unsigned int) ;
 scalar_t__ FUNC_3 (struct pt_regs*,unsigned int) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (char*,unsigned long) ;
 scalar_t__ FUNC_6 (struct pt_regs*) ;

__attribute__((used)) static bool FUNC_7(struct pt_regs *VAR_2, struct perf_event *VAR_3,
        unsigned long VAR_4)
{
 unsigned int VAR_5 = 0;

 if (FUNC_1(VAR_5, (unsigned int *)VAR_2->nip))
  goto fail;

 if (FUNC_3(VAR_2, VAR_5)) {
  FUNC_5("Breakpoint hit on instruction that can't be emulated."
       " Breakpoint at 0x%lx will be disabled.\n", VAR_4);
  goto disable;
 }


 if (FUNC_6(VAR_2)) {
  VAR_1->thread.last_hit_ubp = VAR_3;
  VAR_2->msr |= VAR_0;
  return 0;
 }

 if (!FUNC_2(VAR_2, VAR_5))
  goto fail;

 return 1;

fail:




 FUNC_0(1, "Unable to handle hardware breakpoint. Breakpoint at "
  "0x%lx will be disabled.", VAR_4);

disable:
 FUNC_4(VAR_3);
 return 0;
}
