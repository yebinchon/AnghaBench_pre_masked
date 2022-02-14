
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {int cons; int prod; int db; TYPE_1__ db_data; } ;
struct qedr_qp {TYPE_2__ sq; TYPE_2__ rq; int prev_wqe_size; } ;
struct qedr_dev {int ibdev; } ;
typedef enum qed_roce_qp_state { ____Placeholder_qed_roce_qp_state } qed_roce_qp_state ;


 int FUNC_0 (struct qedr_dev*,char*,int ,int ,int ,int ) ;
 int VAR_0 ;






 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct qedr_dev *VAR_1,
    struct qedr_qp *VAR_2,
    enum qed_roce_qp_state VAR_3,
    enum qed_roce_qp_state VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 == VAR_3)
  return 0;

 switch (VAR_3) {
 case 131:
  switch (VAR_4) {
  case 132:
   VAR_2->prev_wqe_size = 0;
   FUNC_1(&VAR_2->sq);
   FUNC_1(&VAR_2->rq);
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  }
  break;
 case 132:
  switch (VAR_4) {
  case 130:




   if (FUNC_2(&VAR_1->ibdev, 1)) {
    FUNC_3(VAR_2->rq.db_data.raw, VAR_2->rq.db);
   }
   break;
  case 133:
   break;
  default:

   VAR_5 = -VAR_0;
   break;
  }
  break;
 case 130:

  switch (VAR_4) {
  case 129:
   break;
  case 133:
   break;
  default:

   VAR_5 = -VAR_0;
   break;
  }
  break;
 case 129:

  switch (VAR_4) {
  case 128:
   break;
  case 133:
   break;
  default:

   VAR_5 = -VAR_0;
   break;
  }
  break;
 case 128:

  switch (VAR_4) {
  case 129:
  case 133:
   break;
  default:

   VAR_5 = -VAR_0;
   break;
  }
  break;
 case 133:

  switch (VAR_4) {
  case 131:
   if ((VAR_2->rq.prod != VAR_2->rq.cons) ||
       (VAR_2->sq.prod != VAR_2->sq.cons)) {
    FUNC_0(VAR_1,
       "Error->Reset with rq/sq not empty rq.prod=%x rq.cons=%x sq.prod=%x sq.cons=%x\n",
       VAR_2->rq.prod, VAR_2->rq.cons, VAR_2->sq.prod,
       VAR_2->sq.cons);
    VAR_5 = -VAR_0;
   }
   break;
  default:
   VAR_5 = -VAR_0;
   break;
  }
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
