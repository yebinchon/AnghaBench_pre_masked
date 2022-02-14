
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct t4_cqe {int dummy; } ;
struct TYPE_6__ {TYPE_3__* qp; TYPE_4__* cq; } ;
struct ib_event {int event; TYPE_2__ element; int device; } ;
struct c4iw_qp_attributes {int next_state; } ;
struct TYPE_7__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct TYPE_5__ {scalar_t__ state; } ;
struct c4iw_qp {TYPE_3__ ibqp; int rhp; TYPE_1__ attr; } ;
struct c4iw_dev {int dummy; } ;
struct TYPE_8__ {int cq_context; int (* comp_handler ) (TYPE_4__*,int ) ;int device; } ;
struct c4iw_cq {int comp_handler_lock; TYPE_4__ ibcq; int cq; } ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct c4iw_qp*,int ,struct c4iw_qp_attributes*,int ) ;
 int FUNC_1 (struct c4iw_dev*,struct t4_cqe*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct ib_event*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct c4iw_dev *VAR_4, struct c4iw_cq *VAR_5,
     struct c4iw_qp *VAR_6,
     struct t4_cqe *VAR_7,
     enum ib_event_type VAR_8)
{
 struct ib_event VAR_9;
 struct c4iw_qp_attributes VAR_10;
 unsigned long VAR_11;

 FUNC_1(VAR_4, VAR_7);

 if (VAR_6->attr.state == VAR_1) {
  VAR_10.next_state = VAR_2;
  FUNC_0(VAR_6->rhp, VAR_6, VAR_0,
          &VAR_10, 0);
 }

 VAR_9.event = VAR_8;
 VAR_9.device = VAR_5->ibcq.device;
 if (VAR_8 == VAR_3)
  VAR_9.element.cq = &VAR_5->ibcq;
 else
  VAR_9.element.qp = &VAR_6->ibqp;
 if (VAR_6->ibqp.event_handler)
  (*VAR_6->ibqp.event_handler)(&VAR_9, VAR_6->ibqp.qp_context);

 if (FUNC_6(&VAR_5->cq)) {
  FUNC_2(&VAR_5->comp_handler_lock, VAR_11);
  (*VAR_5->ibcq.comp_handler)(&VAR_5->ibcq, VAR_5->ibcq.cq_context);
  FUNC_3(&VAR_5->comp_handler_lock, VAR_11);
 }
}
