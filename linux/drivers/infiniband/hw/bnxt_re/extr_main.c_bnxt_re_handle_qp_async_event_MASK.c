
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* qp; } ;
struct ib_event {int * device; int event; TYPE_2__ element; } ;
struct creq_qp_event {int dummy; } ;
struct TYPE_7__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;} ;
struct TYPE_8__ {scalar_t__ state; scalar_t__ srq; } ;
struct bnxt_re_qp {TYPE_3__ ib_qp; TYPE_1__* rdev; TYPE_4__ qplib_qp; } ;
typedef int event ;
struct TYPE_5__ {int ibdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 unsigned int FUNC_1 (struct bnxt_re_qp*) ;
 int FUNC_2 (struct bnxt_re_qp*,unsigned int) ;
 int FUNC_3 (struct ib_event*,int ,int) ;
 int FUNC_4 (struct ib_event*,int ) ;

__attribute__((used)) static int FUNC_5(struct creq_qp_event *VAR_2,
      struct bnxt_re_qp *VAR_3)
{
 struct ib_event VAR_4;
 unsigned int VAR_5;

 if (VAR_3->qplib_qp.state == VAR_0) {
  VAR_5 = FUNC_1(VAR_3);
  FUNC_0(&VAR_3->qplib_qp);
  FUNC_2(VAR_3, VAR_5);
 }

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 if (VAR_3->qplib_qp.srq) {
  VAR_4.device = &VAR_3->rdev->ibdev;
  VAR_4.element.qp = &VAR_3->ib_qp;
  VAR_4.event = VAR_1;
 }

 if (VAR_4.device && VAR_3->ib_qp.event_handler)
  VAR_3->ib_qp.event_handler(&VAR_4, VAR_3->ib_qp.qp_context);

 return 0;
}
