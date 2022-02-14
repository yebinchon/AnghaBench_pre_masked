
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ib_recv_wr {int num_sge; int wr_id; TYPE_5__* sg_list; struct ib_recv_wr* next; } ;
struct ib_qp_attr {scalar_t__ qp_state; } ;
struct ib_qp {int device; } ;
struct hns_roce_v2_wqe_data_seg {scalar_t__ addr; int lkey; } ;
struct hns_roce_rinl_sge {scalar_t__ len; void* addr; } ;
struct TYPE_13__ {int head; int wqe_cnt; int max_gs; int lock; int * wrid; } ;
struct TYPE_14__ {int recv_cq; } ;
struct TYPE_11__ {int* db_record; } ;
struct TYPE_10__ {TYPE_2__* wqe_list; } ;
struct hns_roce_qp {scalar_t__ state; TYPE_6__ rq; TYPE_7__ ibqp; TYPE_4__ rdb; TYPE_3__ rq_inl_buf; } ;
struct TYPE_8__ {int flags; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_12__ {scalar_t__ length; scalar_t__ addr; } ;
struct TYPE_9__ {scalar_t__ sge_cnt; struct hns_roce_rinl_sge* sg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 void* FUNC_2 (struct hns_roce_qp*,int) ;
 int FUNC_3 (TYPE_7__*,struct ib_qp_attr*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct hns_roce_v2_wqe_data_seg*,TYPE_5__*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct hns_roce_dev* FUNC_9 (int ) ;
 struct hns_roce_qp* FUNC_10 (struct ib_qp*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct ib_qp *VAR_7,
     const struct ib_recv_wr *VAR_8,
     const struct ib_recv_wr **VAR_9)
{
 struct hns_roce_dev *VAR_10 = FUNC_9(VAR_7->device);
 struct hns_roce_qp *VAR_11 = FUNC_10(VAR_7);
 struct hns_roce_v2_wqe_data_seg *VAR_12;
 struct hns_roce_rinl_sge *VAR_13;
 struct device *VAR_14 = VAR_10->dev;
 struct ib_qp_attr VAR_15;
 unsigned long VAR_16;
 void *VAR_17 = ((void*)0);
 int VAR_18;
 int VAR_19 = 0;
 int VAR_20;
 int VAR_21;
 int VAR_22;

 FUNC_7(&VAR_11->rq.lock, VAR_16);
 VAR_21 = VAR_11->rq.head & (VAR_11->rq.wqe_cnt - 1);

 if (VAR_11->state == VAR_5) {
  FUNC_8(&VAR_11->rq.lock, VAR_16);
  *VAR_9 = VAR_8;
  return -VAR_0;
 }

 for (VAR_20 = 0; VAR_8; ++VAR_20, VAR_8 = VAR_8->next) {
  if (FUNC_4(&VAR_11->rq, VAR_20,
   VAR_11->ibqp.recv_cq)) {
   VAR_19 = -VAR_1;
   *VAR_9 = VAR_8;
   goto out;
  }

  if (FUNC_11(VAR_8->num_sge > VAR_11->rq.max_gs)) {
   FUNC_1(VAR_14, "rq:num_sge=%d > qp->sq.max_gs=%d\n",
    VAR_8->num_sge, VAR_11->rq.max_gs);
   VAR_19 = -VAR_0;
   *VAR_9 = VAR_8;
   goto out;
  }

  VAR_17 = FUNC_2(VAR_11, VAR_21);
  VAR_12 = (struct hns_roce_v2_wqe_data_seg *)VAR_17;
  for (VAR_22 = 0; VAR_22 < VAR_8->num_sge; VAR_22++) {
   if (!VAR_8->sg_list[VAR_22].length)
    continue;
   FUNC_6(VAR_12, VAR_8->sg_list + VAR_22);
   VAR_12++;
  }

  if (VAR_22 < VAR_11->rq.max_gs) {
   VAR_12->lkey = FUNC_0(VAR_3);
   VAR_12->addr = 0;
  }


  if (VAR_10->caps.flags & VAR_2) {
   VAR_13 = VAR_11->rq_inl_buf.wqe_list[VAR_21].sg_list;
   VAR_11->rq_inl_buf.wqe_list[VAR_21].sge_cnt =
              (u32)VAR_8->num_sge;
   for (VAR_22 = 0; VAR_22 < VAR_8->num_sge; VAR_22++) {
    VAR_13[VAR_22].addr =
            (void *)(u64)VAR_8->sg_list[VAR_22].addr;
    VAR_13[VAR_22].len = VAR_8->sg_list[VAR_22].length;
   }
  }

  VAR_11->rq.wrid[VAR_21] = VAR_8->wr_id;

  VAR_21 = (VAR_21 + 1) & (VAR_11->rq.wqe_cnt - 1);
 }

out:
 if (FUNC_5(VAR_20)) {
  VAR_11->rq.head += VAR_20;

  FUNC_12();

  *VAR_11->rdb.db_record = VAR_11->rq.head & 0xffff;

  if (VAR_11->state == VAR_4) {
   VAR_18 = VAR_6;
   VAR_15.qp_state = VAR_4;

   VAR_19 = FUNC_3(&VAR_11->ibqp, &VAR_15,
          VAR_18, VAR_11->state,
          VAR_4);
   if (VAR_19) {
    FUNC_8(&VAR_11->rq.lock, VAR_16);
    *VAR_9 = VAR_8;
    return VAR_19;
   }
  }
 }
 FUNC_8(&VAR_11->rq.lock, VAR_16);

 return VAR_19;
}
