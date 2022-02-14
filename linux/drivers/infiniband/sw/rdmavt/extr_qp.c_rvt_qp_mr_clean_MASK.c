
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ qp_type; int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rvt_qp {scalar_t__ state; TYPE_2__ ibqp; int r_lock; int s_hlock; int s_lock; int r_sge; } ;
struct TYPE_3__ {TYPE_2__* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rvt_qp*,int ) ;
 scalar_t__ FUNC_1 (struct rvt_qp*,int ) ;
 scalar_t__ FUNC_2 (struct rvt_qp*,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ib_event*,int ) ;

void FUNC_9(struct rvt_qp *VAR_6, u32 VAR_7)
{
 bool VAR_8 = 0;

 if (VAR_6->ibqp.qp_type == VAR_4 ||
     VAR_6->ibqp.qp_type == VAR_3)

  return;
 FUNC_5(&VAR_6->r_lock);
 FUNC_4(&VAR_6->s_hlock);
 FUNC_4(&VAR_6->s_lock);

 if (VAR_6->state == VAR_1 || VAR_6->state == VAR_2)
  goto check_lwqe;

 if (FUNC_3(&VAR_6->r_sge, VAR_7) ||
     FUNC_2(VAR_6, VAR_7) ||
     FUNC_1(VAR_6, VAR_7))
  VAR_8 = FUNC_0(VAR_6, VAR_5);
check_lwqe:
 FUNC_6(&VAR_6->s_lock);
 FUNC_6(&VAR_6->s_hlock);
 FUNC_7(&VAR_6->r_lock);
 if (VAR_8) {
  struct ib_event VAR_9;

  VAR_9.device = VAR_6->ibqp.device;
  VAR_9.element.qp = &VAR_6->ibqp;
  VAR_9.event = VAR_0;
  VAR_6->ibqp.event_handler(&VAR_9, VAR_6->ibqp.qp_context);
 }
}
