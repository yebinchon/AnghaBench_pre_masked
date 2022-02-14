
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_hw_breakpoint {unsigned long address; int len; int type; } ;
struct thread_struct {struct arch_hw_breakpoint hw_brk; struct perf_event** ptrace_bps; } ;
struct task_struct {struct thread_struct thread; } ;
struct ppc_hw_breakpoint {int version; int trigger_type; int addr_mode; int condition_mode; unsigned long addr; int addr2; } ;
struct perf_event_attr {unsigned long bp_addr; int bp_len; int bp_type; } ;
struct perf_event {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 long FUNC_1 (struct perf_event*) ;
 unsigned long VAR_19 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct perf_event_attr*) ;
 int FUNC_4 () ;
 int VAR_20 ;
 struct perf_event* FUNC_5 (struct perf_event_attr*,int ,int *,struct task_struct*) ;
 long FUNC_6 (struct task_struct*,struct ppc_hw_breakpoint*) ;
 long FUNC_7 (struct task_struct*,struct ppc_hw_breakpoint*) ;
 long FUNC_8 (struct task_struct*,struct ppc_hw_breakpoint*) ;

__attribute__((used)) static long FUNC_9(struct task_struct *VAR_21,
       struct ppc_hw_breakpoint *VAR_22)
{







 struct arch_hw_breakpoint VAR_23;


 if (VAR_22->version != 1)
  return -VAR_4;
 if ((VAR_22->trigger_type & VAR_17) == 0 ||
     (VAR_22->trigger_type & ~VAR_17) != 0 ||
     VAR_22->condition_mode != VAR_11)
  return -VAR_0;

 if ((unsigned long)VAR_22->addr >= VAR_19)
  return -VAR_1;

 VAR_23.address = VAR_22->addr & ~7UL;
 VAR_23.type = VAR_7;
 VAR_23.len = 8;
 if (VAR_22->trigger_type & VAR_16)
  VAR_23.type |= VAR_6;
 if (VAR_22->trigger_type & VAR_18)
  VAR_23.type |= VAR_8;
 if (VAR_22->addr_mode != VAR_12)
  return -VAR_0;

 if (VAR_21->thread.hw_brk.address)
  return -VAR_3;

 if (!FUNC_4())
  return -VAR_2;

 VAR_21->thread.hw_brk = VAR_23;

 return 1;

}
