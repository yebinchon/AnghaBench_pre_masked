
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi {unsigned int last_watch_mask; int watch_lock; int send_info; TYPE_1__* handlers; int command_waiters; int watchdog_waiters; int response_waiters; } ;
struct TYPE_2__ {int (* set_need_watch ) (int ,unsigned int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct ipmi_smi *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_3->handlers->set_need_watch)
  return;

 FUNC_0(&VAR_3->watch_lock, VAR_5);
 if (VAR_4 & VAR_1)
  VAR_3->response_waiters++;

 if (VAR_4 & VAR_2)
  VAR_3->watchdog_waiters++;

 if (VAR_4 & VAR_0)
  VAR_3->command_waiters++;

 if ((VAR_3->last_watch_mask & VAR_4) != VAR_4) {
  VAR_3->last_watch_mask |= VAR_4;
  VAR_3->handlers->set_need_watch(VAR_3->send_info,
            VAR_3->last_watch_mask);
 }
 FUNC_1(&VAR_3->watch_lock, VAR_5);
}
