
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct rdma_rq_sge {int dummy; } ;
struct TYPE_11__ {int raw; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_10__ {int raw; TYPE_3__ data; } ;
struct TYPE_12__ {int max_sges; size_t prod; int iwarp_db2; TYPE_5__ iwarp_db2_data; int db; TYPE_4__ db_data; int pbl; } ;
struct qedr_qp {scalar_t__ qp_type; scalar_t__ state; int q_lock; TYPE_6__ rq; TYPE_2__* rqe_wr_id; struct qedr_dev* dev; } ;
struct qedr_dev {int ibdev; } ;
struct ib_recv_wr {int num_sge; struct ib_recv_wr* next; int wr_id; TYPE_1__* sg_list; } ;
struct ib_qp {int dummy; } ;
struct TYPE_8__ {int wqe_size; int wr_id; } ;
struct TYPE_7__ {int lkey; int length; int addr; } ;


 int FUNC_0 (struct qedr_dev*,char*,scalar_t__,scalar_t__,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rdma_rq_sge*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct qedr_qp* FUNC_3 (struct ib_qp*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct rdma_rq_sge* FUNC_5 (int *) ;
 int FUNC_6 (struct ib_qp*,struct ib_recv_wr const*,struct ib_recv_wr const**) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int ) ;

int FUNC_13(struct ib_qp *VAR_7, const struct ib_recv_wr *VAR_8,
     const struct ib_recv_wr **VAR_9)
{
 struct qedr_qp *VAR_10 = FUNC_3(VAR_7);
 struct qedr_dev *VAR_11 = VAR_10->dev;
 unsigned long VAR_12;
 int VAR_13 = 0;

 if (VAR_10->qp_type == VAR_2)
  return FUNC_6(VAR_7, VAR_8, VAR_9);

 FUNC_10(&VAR_10->q_lock, VAR_12);

 if (VAR_10->state == VAR_4) {
  FUNC_11(&VAR_10->q_lock, VAR_12);
  *VAR_9 = VAR_8;
  return -VAR_0;
 }

 while (VAR_8) {
  int VAR_14;

  if (FUNC_4(&VAR_10->rq.pbl) <
      VAR_3 ||
      VAR_8->num_sge > VAR_10->rq.max_sges) {
   FUNC_0(VAR_11, "Can't post WR  (%d < %d) || (%d > %d)\n",
          FUNC_4(&VAR_10->rq.pbl),
          VAR_3, VAR_8->num_sge,
          VAR_10->rq.max_sges);
   VAR_13 = -VAR_1;
   *VAR_9 = VAR_8;
   break;
  }
  for (VAR_14 = 0; VAR_14 < VAR_8->num_sge; VAR_14++) {
   u32 VAR_15 = 0;
   struct rdma_rq_sge *VAR_16 =
       FUNC_5(&VAR_10->rq.pbl);




   if (!VAR_14)
    FUNC_2(VAR_15, VAR_6,
       VAR_8->num_sge);

   FUNC_2(VAR_15, VAR_5,
      VAR_8->sg_list[VAR_14].lkey);

   FUNC_1(VAR_16, VAR_8->sg_list[VAR_14].addr,
       VAR_8->sg_list[VAR_14].length, VAR_15);
  }





  if (!VAR_8->num_sge) {
   u32 VAR_17 = 0;
   struct rdma_rq_sge *VAR_18 =
       FUNC_5(&VAR_10->rq.pbl);




   FUNC_2(VAR_17, VAR_5, 0);
   FUNC_2(VAR_17, VAR_6, 1);

   FUNC_1(VAR_18, 0, 0, VAR_17);
   VAR_14 = 1;
  }

  VAR_10->rqe_wr_id[VAR_10->rq.prod].wr_id = VAR_8->wr_id;
  VAR_10->rqe_wr_id[VAR_10->rq.prod].wqe_size = VAR_14;

  FUNC_7(&VAR_10->rq);
  FUNC_9();

  VAR_10->rq.db_data.data.value++;

  FUNC_12(VAR_10->rq.db_data.raw, VAR_10->rq.db);

  if (FUNC_8(&VAR_11->ibdev, 1)) {
   FUNC_12(VAR_10->rq.iwarp_db2_data.raw, VAR_10->rq.iwarp_db2);
  }

  VAR_8 = VAR_8->next;
 }

 FUNC_11(&VAR_10->q_lock, VAR_12);

 return VAR_13;
}
