
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rvt_qp {TYPE_2__ ibqp; int r_flags; } ;
struct TYPE_3__ {TYPE_2__* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_event*,int ) ;

void FUNC_1(struct rvt_qp *VAR_2)
{
 VAR_2->r_flags |= VAR_1;
 if (VAR_2->ibqp.event_handler) {
  struct ib_event VAR_3;

  VAR_3.device = VAR_2->ibqp.device;
  VAR_3.element.qp = &VAR_2->ibqp;
  VAR_3.event = VAR_0;
  VAR_2->ibqp.event_handler(&VAR_3, VAR_2->ibqp.qp_context);
 }
}
