
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_qp {scalar_t__ qp_type; scalar_t__ state; int qp_id; int refcnt; TYPE_1__* ep; struct qedr_dev* dev; } ;
struct qedr_dev {int qps; int ibdev; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int dummy; } ;
struct TYPE_2__ {scalar_t__ during_connect; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,...) ;
 int FUNC_1 (struct qedr_dev*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 struct qedr_qp* FUNC_3 (struct ib_qp*) ;
 int FUNC_4 (struct qedr_qp*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct qedr_dev*) ;
 int FUNC_7 (struct qedr_dev*,struct qedr_qp*,struct ib_udata*) ;
 int FUNC_8 (struct ib_qp*,struct ib_qp_attr*,int,int *) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ) ;

int FUNC_12(struct ib_qp *VAR_7, struct ib_udata *VAR_8)
{
 struct qedr_qp *VAR_9 = FUNC_3(VAR_7);
 struct qedr_dev *VAR_10 = VAR_9->dev;
 struct ib_qp_attr VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_10, VAR_3, "destroy qp: destroying %p, qp type=%d\n",
   VAR_9, VAR_9->qp_type);

 if (FUNC_10(&VAR_10->ibdev, 1)) {
  if ((VAR_9->state != VAR_6) &&
      (VAR_9->state != VAR_4) &&
      (VAR_9->state != VAR_5)) {

   VAR_11.qp_state = VAR_0;
   VAR_12 |= VAR_2;


   FUNC_8(VAR_7, &VAR_11, VAR_12, ((void*)0));
  }
 } else {

  if (VAR_9->ep) {
   int VAR_13 = 1;

   while (VAR_9->ep->during_connect) {
    FUNC_0(VAR_10, VAR_3,
      "Still in during connect/accept\n");

    FUNC_5(100);
    if (VAR_13++ > 200) {
     FUNC_1(VAR_10,
        "during connect timeout\n");
     break;
    }
   }
  }
 }

 if (VAR_9->qp_type == VAR_1)
  FUNC_6(VAR_10);

 FUNC_7(VAR_10, VAR_9, VAR_8);

 if (FUNC_2(&VAR_9->refcnt) &&
     FUNC_9(&VAR_10->ibdev, 1)) {
  FUNC_11(&VAR_10->qps, VAR_9->qp_id);
  FUNC_4(VAR_9);
 }
 return 0;
}
