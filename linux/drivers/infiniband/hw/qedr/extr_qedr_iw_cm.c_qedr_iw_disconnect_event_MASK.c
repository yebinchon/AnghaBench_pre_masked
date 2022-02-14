
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_qp {int ibqp; } ;
struct qedr_iw_ep {struct qedr_qp* qp; struct qedr_dev* dev; } ;
struct qedr_discon_work {int work; int status; int event; struct qedr_iw_ep* ep; } ;
struct qedr_dev {int iwarp_wq; } ;
struct qed_iwarp_cm_event_params {int status; int event; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct qedr_discon_work* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2,
    struct qed_iwarp_cm_event_params *VAR_3)
{
 struct qedr_discon_work *VAR_4;
 struct qedr_iw_ep *VAR_5 = (struct qedr_iw_ep *)VAR_2;
 struct qedr_dev *VAR_6 = VAR_5->dev;
 struct qedr_qp *VAR_7 = VAR_5->qp;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 FUNC_2(&VAR_7->ibqp);
 VAR_4->ep = VAR_5;
 VAR_4->event = VAR_3->event;
 VAR_4->status = VAR_3->status;

 FUNC_0(&VAR_4->work, VAR_1);
 FUNC_3(VAR_6->iwarp_wq, &VAR_4->work);
}
