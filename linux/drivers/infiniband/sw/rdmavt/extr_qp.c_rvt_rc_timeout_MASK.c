
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int device; } ;
struct rvt_qp {int s_flags; int port_num; int r_lock; int s_lock; scalar_t__ s_last_psn; int s_timer; TYPE_1__ ibqp; } ;
struct rvt_ibport {int n_rc_timeouts; } ;
struct TYPE_4__ {int (* schedule_send ) (struct rvt_qp*) ;int (* notify_restart_rc ) (struct rvt_qp*,scalar_t__,int) ;} ;
struct rvt_dev_info {TYPE_2__ driver_f; struct rvt_ibport** ports; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct rvt_qp* FUNC_1 (int ,struct timer_list*,int ) ;
 struct rvt_dev_info* FUNC_2 (int ) ;
 struct rvt_qp* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct rvt_qp*,scalar_t__,int) ;
 int FUNC_8 (struct rvt_qp*) ;
 int FUNC_9 (struct rvt_qp*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_3)
{
 struct rvt_qp *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct rvt_dev_info *VAR_5 = FUNC_2(VAR_4->ibqp.device);
 unsigned long VAR_6;

 FUNC_4(&VAR_4->r_lock, VAR_6);
 FUNC_3(&VAR_4->s_lock);
 if (VAR_4->s_flags & VAR_0) {
  struct rvt_ibport *VAR_7 = VAR_5->ports[VAR_4->port_num - 1];

  VAR_4->s_flags &= ~VAR_0;
  VAR_7->n_rc_timeouts++;
  FUNC_0(&VAR_4->s_timer);
  FUNC_9(VAR_4, VAR_4->s_last_psn + 1);
  if (VAR_5->driver_f.notify_restart_rc)
   VAR_5->driver_f.notify_restart_rc(VAR_4,
       VAR_4->s_last_psn + 1,
       1);
  VAR_5->driver_f.schedule_send(VAR_4);
 }
 FUNC_5(&VAR_4->s_lock);
 FUNC_6(&VAR_4->r_lock, VAR_6);
}
