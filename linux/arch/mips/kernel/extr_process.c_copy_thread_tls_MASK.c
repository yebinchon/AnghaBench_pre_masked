
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {unsigned long tp_value; int addr_limit; } ;
struct TYPE_2__ {int cp0_status; unsigned long reg16; unsigned long reg17; unsigned long reg29; unsigned long reg31; int bd_emu_frame; } ;
struct task_struct {int flags; TYPE_1__ thread; } ;
struct pt_regs {unsigned long cp0_status; unsigned long* regs; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct task_struct*,int ) ;
 struct pt_regs* FUNC_2 () ;
 int FUNC_3 (struct pt_regs*,int ,int) ;
 int FUNC_4 () ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 struct thread_info* FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(unsigned long VAR_19, unsigned long VAR_20,
 unsigned long VAR_21, struct task_struct *VAR_22, unsigned long VAR_23)
{
 struct thread_info *VAR_24 = FUNC_6(VAR_22);
 struct pt_regs *VAR_25, *VAR_26 = FUNC_2();
 unsigned long VAR_27;

 VAR_27 = (unsigned long)FUNC_5(VAR_22) + VAR_11 - 32;


 VAR_25 = (struct pt_regs *) VAR_27 - 1;

 VAR_27 = (unsigned long) VAR_25;
 VAR_22->thread.cp0_status = FUNC_4() & ~(VAR_5|VAR_4);
 if (FUNC_7(VAR_22->flags & VAR_3)) {

  unsigned long VAR_28 = VAR_22->thread.cp0_status;
  FUNC_3(VAR_25, 0, sizeof(struct pt_regs));
  VAR_24->addr_limit = VAR_2;
  VAR_22->thread.reg16 = VAR_20;
  VAR_22->thread.reg17 = VAR_21;
  VAR_22->thread.reg29 = VAR_27;
  VAR_22->thread.reg31 = (unsigned long) VAR_18;




  VAR_28 |= VAR_6;

  VAR_25->cp0_status = VAR_28;
  return 0;
 }


 *VAR_25 = *VAR_26;
 VAR_25->regs[7] = 0;
 VAR_25->regs[2] = 0;
 if (VAR_20)
  VAR_25->regs[29] = VAR_20;
 VAR_24->addr_limit = VAR_16;

 VAR_22->thread.reg29 = (unsigned long) VAR_25;
 VAR_22->thread.reg31 = (unsigned long) VAR_17;





 VAR_25->cp0_status &= ~(VAR_5|VAR_4);

 FUNC_1(VAR_22, VAR_14);
 FUNC_1(VAR_22, VAR_15);
 FUNC_1(VAR_22, VAR_13);





 FUNC_0(&VAR_22->thread.bd_emu_frame, VAR_0);

 if (VAR_19 & VAR_1)
  VAR_24->tp_value = VAR_23;

 return 0;
}
