
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ irq; } ;
struct smi_info {int timer_running; int si_lock; int interrupt_disabled; TYPE_1__ io; scalar_t__ last_timeout_jiffies; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (char*) ;
 struct smi_info* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct smi_info*,long) ;
 int FUNC_3 (struct smi_info*,int ) ;
 struct smi_info* VAR_8 ;
 int FUNC_4 (struct smi_info*,long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_9)
{
 struct smi_info *VAR_10 = FUNC_1(VAR_10, VAR_9, VAR_7);
 enum si_sm_result VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 long VAR_14;
 long VAR_15;

 FUNC_5(&(VAR_10->si_lock), VAR_12);
 FUNC_0("Timer");

 VAR_13 = VAR_4;
 VAR_14 = (((long)VAR_13 - (long)VAR_10->last_timeout_jiffies)
       * VAR_3);
 VAR_11 = FUNC_2(VAR_10, VAR_14);

 if ((VAR_10->io.irq) && (!VAR_10->interrupt_disabled)) {

  VAR_15 = VAR_4 + VAR_2;
  FUNC_3(VAR_10, VAR_5);
  goto do_mod_timer;
 }





 if (VAR_11 == VAR_0) {
  FUNC_3(VAR_10, VAR_6);
  VAR_15 = VAR_4 + 1;
 } else {
  FUNC_3(VAR_10, VAR_5);
  VAR_15 = VAR_4 + VAR_2;
 }

do_mod_timer:
 if (VAR_11 != VAR_1)
  FUNC_4(VAR_10, VAR_15);
 else
  VAR_10->timer_running = 0;
 FUNC_6(&(VAR_10->si_lock), VAR_12);
}
