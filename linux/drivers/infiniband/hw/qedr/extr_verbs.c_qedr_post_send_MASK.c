
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_7__ {int raw; TYPE_2__ data; } ;
struct TYPE_8__ {size_t prod; int db; TYPE_3__ db_data; } ;
struct qedr_qp {scalar_t__ qp_type; scalar_t__ state; int q_lock; TYPE_4__ sq; TYPE_1__* wqe_wr_id; int icid; } ;
struct qedr_dev {int ibdev; } ;
struct ib_send_wr {struct ib_send_wr* next; int wr_id; } ;
struct ib_qp {int device; } ;
struct TYPE_5__ {int wr_id; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ib_qp*,struct ib_send_wr const*,struct ib_send_wr const**) ;
 struct qedr_dev* FUNC_2 (int ) ;
 struct qedr_qp* FUNC_3 (struct ib_qp*) ;
 int FUNC_4 (struct ib_qp*,struct ib_send_wr const*,struct ib_send_wr const**) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(struct ib_qp *VAR_6, const struct ib_send_wr *VAR_7,
     const struct ib_send_wr **VAR_8)
{
 struct qedr_dev *VAR_9 = FUNC_2(VAR_6->device);
 struct qedr_qp *VAR_10 = FUNC_3(VAR_6);
 unsigned long VAR_11;
 int VAR_12 = 0;

 *VAR_8 = ((void*)0);

 if (VAR_10->qp_type == VAR_1)
  return FUNC_4(VAR_6, VAR_7, VAR_8);

 FUNC_8(&VAR_10->q_lock, VAR_11);

 if (FUNC_6(&VAR_9->ibdev, 1)) {
  if ((VAR_10->state != VAR_4) &&
      (VAR_10->state != VAR_3) &&
      (VAR_10->state != VAR_5)) {
   FUNC_9(&VAR_10->q_lock, VAR_11);
   *VAR_8 = VAR_7;
   FUNC_0(VAR_9, VAR_2,
     "QP in wrong state! QP icid=0x%x state %d\n",
     VAR_10->icid, VAR_10->state);
   return -VAR_0;
  }
 }

 while (VAR_7) {
  VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8);
  if (VAR_12)
   break;

  VAR_10->wqe_wr_id[VAR_10->sq.prod].wr_id = VAR_7->wr_id;

  FUNC_5(&VAR_10->sq);

  VAR_10->sq.db_data.data.value++;

  VAR_7 = VAR_7->next;
 }
 FUNC_7();
 FUNC_10(VAR_10->sq.db_data.raw, VAR_10->sq.db);

 FUNC_9(&VAR_10->q_lock, VAR_11);

 return VAR_12;
}
