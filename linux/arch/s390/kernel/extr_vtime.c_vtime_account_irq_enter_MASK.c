
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int flags; } ;
struct TYPE_2__ {int system_timer; int softirq_timer; int hardirq_timer; int guest_timer; scalar_t__ last_update_timer; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct task_struct *VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_1.last_update_timer;
 VAR_1.last_update_timer = FUNC_0();
 VAR_3 -= VAR_1.last_update_timer;

 if ((VAR_2->flags & VAR_0) && (FUNC_3() == 0))
  VAR_1.guest_timer += VAR_3;
 else if (FUNC_1())
  VAR_1.hardirq_timer += VAR_3;
 else if (FUNC_2())
  VAR_1.softirq_timer += VAR_3;
 else
  VAR_1.system_timer += VAR_3;

 FUNC_4(VAR_3);
}
