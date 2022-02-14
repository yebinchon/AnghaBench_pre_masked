
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


struct ib_udata {int dummy; } ;
struct TYPE_13__ {int max_send_sge; scalar_t__ max_rdma_ctxs; scalar_t__ max_recv_sge; scalar_t__ max_recv_wr; } ;
struct ib_qp_init_attr {int create_flags; scalar_t__ qp_type; TYPE_6__ cap; TYPE_5__* rwq_ind_tbl; TYPE_4__* send_cq; TYPE_3__* srq; TYPE_2__* recv_cq; int qp_context; int event_handler; TYPE_1__* xrcd; } ;
struct ib_qp {scalar_t__ qp_type; int integrity_en; int max_read_sge; int max_write_sge; TYPE_5__* rwq_ind_tbl; int * xrcd; TYPE_4__* send_cq; TYPE_3__* srq; TYPE_2__* recv_cq; int qp_context; int event_handler; scalar_t__ port; int sig_mrs; int rdma_mrs; int mr_lock; scalar_t__ mrs_used; int usecnt; } ;
struct ib_pd {int usecnt; struct ib_device* device; } ;
struct TYPE_14__ {int device_cap_flags; int max_sge_rd; } ;
struct ib_device {TYPE_7__ attrs; } ;
struct TYPE_12__ {int usecnt; } ;
struct TYPE_11__ {int usecnt; } ;
struct TYPE_10__ {int usecnt; } ;
struct TYPE_9__ {int usecnt; } ;
struct TYPE_8__ {struct ib_device* device; } ;


 int VAR_0 ;
 struct ib_qp* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (struct ib_qp*) ;
 struct ib_qp* FUNC_4 (struct ib_device*,struct ib_pd*,struct ib_qp_init_attr*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 struct ib_qp* FUNC_7 (struct ib_qp*,struct ib_qp_init_attr*,struct ib_udata*) ;
 int FUNC_8 (struct ib_qp*,struct ib_device*) ;
 int FUNC_9 (struct ib_qp*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct ib_qp*,struct ib_qp_init_attr*) ;
 int FUNC_12 (struct ib_device*,struct ib_qp_init_attr*) ;
 int FUNC_13 (int *) ;
 int VAR_5 ;

struct ib_qp *FUNC_14(struct ib_pd *VAR_6,
    struct ib_qp_init_attr *VAR_7,
    struct ib_udata *VAR_8)
{
 struct ib_device *VAR_9 = VAR_6 ? VAR_6->device : VAR_7->xrcd->device;
 struct ib_qp *VAR_10;
 int VAR_11;

 if (VAR_7->rwq_ind_tbl &&
     (VAR_7->recv_cq ||
     VAR_7->srq || VAR_7->cap.max_recv_wr ||
     VAR_7->cap.max_recv_sge))
  return FUNC_0(-VAR_0);

 if ((VAR_7->create_flags & VAR_4) &&
     !(VAR_9->attrs.device_cap_flags & VAR_1))
  return FUNC_0(-VAR_0);







 if (VAR_7->cap.max_rdma_ctxs)
  FUNC_12(VAR_9, VAR_7);

 VAR_10 = FUNC_4(VAR_9, VAR_6, VAR_7, ((void*)0), ((void*)0));
 if (FUNC_2(VAR_10))
  return VAR_10;

 VAR_11 = FUNC_8(VAR_10, VAR_9);
 if (VAR_11)
  goto err;

 VAR_10->qp_type = VAR_7->qp_type;
 VAR_10->rwq_ind_tbl = VAR_7->rwq_ind_tbl;

 FUNC_6(&VAR_10->usecnt, 0);
 VAR_10->mrs_used = 0;
 FUNC_13(&VAR_10->mr_lock);
 FUNC_1(&VAR_10->rdma_mrs);
 FUNC_1(&VAR_10->sig_mrs);
 VAR_10->port = 0;

 if (VAR_7->qp_type == VAR_3) {
  struct ib_qp *VAR_12 =
   FUNC_7(VAR_10, VAR_7, VAR_8);

  if (FUNC_2(VAR_12)) {
   VAR_11 = FUNC_3(VAR_12);
   goto err;
  }
  return VAR_12;
 }

 VAR_10->event_handler = VAR_7->event_handler;
 VAR_10->qp_context = VAR_7->qp_context;
 if (VAR_7->qp_type == VAR_2) {
  VAR_10->recv_cq = ((void*)0);
  VAR_10->srq = ((void*)0);
 } else {
  VAR_10->recv_cq = VAR_7->recv_cq;
  if (VAR_7->recv_cq)
   FUNC_5(&VAR_7->recv_cq->usecnt);
  VAR_10->srq = VAR_7->srq;
  if (VAR_10->srq)
   FUNC_5(&VAR_7->srq->usecnt);
 }

 VAR_10->send_cq = VAR_7->send_cq;
 VAR_10->xrcd = ((void*)0);

 FUNC_5(&VAR_6->usecnt);
 if (VAR_7->send_cq)
  FUNC_5(&VAR_7->send_cq->usecnt);
 if (VAR_7->rwq_ind_tbl)
  FUNC_5(&VAR_10->rwq_ind_tbl->usecnt);

 if (VAR_7->cap.max_rdma_ctxs) {
  VAR_11 = FUNC_11(VAR_10, VAR_7);
  if (VAR_11)
   goto err;
 }






 VAR_10->max_write_sge = VAR_7->cap.max_send_sge;
 VAR_10->max_read_sge = FUNC_10(VAR_5, VAR_7->cap.max_send_sge,
     VAR_9->attrs.max_sge_rd);
 if (VAR_7->create_flags & VAR_4)
  VAR_10->integrity_en = 1;

 return VAR_10;

err:
 FUNC_9(VAR_10);
 return FUNC_0(VAR_11);

}
