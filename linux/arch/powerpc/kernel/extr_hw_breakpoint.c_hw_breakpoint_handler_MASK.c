
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long dar; } ;
struct TYPE_2__ {unsigned long bp_addr; unsigned long bp_len; } ;
struct perf_event {scalar_t__ overflow_handler; TYPE_1__ attr; } ;
struct die_args {struct pt_regs* regs; } ;
struct arch_hw_breakpoint {int type; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct arch_hw_breakpoint*) ;
 struct perf_event* FUNC_2 (int ) ;
 int VAR_4 ;
 struct arch_hw_breakpoint* FUNC_3 (struct perf_event*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct perf_event*,struct pt_regs*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct pt_regs*,struct perf_event*,int ) ;

int FUNC_9(struct die_args *VAR_6)
{
 int VAR_7 = VAR_3;
 struct perf_event *VAR_8;
 struct pt_regs *VAR_9 = VAR_6->regs;
 struct arch_hw_breakpoint *VAR_10;
 unsigned long VAR_11 = VAR_9->dar;


 FUNC_4();







 FUNC_6();

 VAR_8 = FUNC_2(VAR_4);
 if (!VAR_8) {
  VAR_7 = VAR_2;
  goto out;
 }
 VAR_10 = FUNC_3(VAR_8);







 if (VAR_8->overflow_handler == VAR_5) {
  FUNC_5(VAR_8, VAR_9);
  VAR_7 = VAR_2;
  goto out;
 }







 VAR_10->type &= ~VAR_1;
 if (!((VAR_8->attr.bp_addr <= VAR_11) &&
       (VAR_11 - VAR_8->attr.bp_addr < VAR_8->attr.bp_len)))
  VAR_10->type |= VAR_1;

 if (!FUNC_0(VAR_0) && !FUNC_8(VAR_9, VAR_8, VAR_10->address))
  goto out;





 if (!(VAR_10->type & VAR_1))
  FUNC_5(VAR_8, VAR_9);

 FUNC_1(VAR_10);
out:
 FUNC_7();
 return VAR_7;
}
