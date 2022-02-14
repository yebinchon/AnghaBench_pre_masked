
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


struct TYPE_13__ {int max_send_sge; scalar_t__ max_recv_sge; scalar_t__ max_recv_wr; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; TYPE_6__ cap; TYPE_5__* rwq_ind_tbl; TYPE_4__* send_cq; TYPE_3__* srq; TYPE_2__* recv_cq; int qp_context; int event_handler; TYPE_1__* xrcd; } ;
struct ib_qp {scalar_t__ qp_type; int max_read_sge; int max_write_sge; TYPE_5__* rwq_ind_tbl; int * xrcd; TYPE_4__* send_cq; struct ib_pd* pd; TYPE_3__* srq; TYPE_2__* recv_cq; int qp_context; int event_handler; int mr_lock; int usecnt; int * uobject; struct ib_qp* real_qp; struct ib_device* device; } ;
struct ib_pd {int usecnt; struct ib_device* device; } ;
struct TYPE_14__ {int max_sge_rd; } ;
struct ib_device {TYPE_7__ attrs; struct ib_qp* (* create_qp ) (struct ib_pd*,struct ib_qp_init_attr*,int *) ;} ;
struct TYPE_12__ {int usecnt; } ;
struct TYPE_11__ {int usecnt; } ;
struct TYPE_10__ {int usecnt; } ;
struct TYPE_9__ {int usecnt; } ;
struct TYPE_8__ {struct ib_device* device; } ;


 int VAR_0 ;
 struct ib_qp* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct ib_qp* FUNC_4 (struct ib_qp*,struct ib_qp_init_attr*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 struct ib_qp* FUNC_7 (struct ib_pd*,struct ib_qp_init_attr*,int *) ;
 int VAR_3 ;

struct ib_qp *FUNC_8(struct ib_pd *VAR_4,
      struct ib_qp_init_attr *VAR_5)
{
 struct ib_device *VAR_6 = VAR_4 ? VAR_4->device : VAR_5->xrcd->device;
 struct ib_qp *VAR_7;

 if (VAR_5->rwq_ind_tbl &&
     (VAR_5->recv_cq ||
     VAR_5->srq || VAR_5->cap.max_recv_wr ||
     VAR_5->cap.max_recv_sge))
  return FUNC_0(-VAR_0);

 VAR_7 = VAR_6->create_qp(VAR_4, VAR_5, ((void*)0));
 if (FUNC_1(VAR_7))
  return VAR_7;

 VAR_7->device = VAR_6;
 VAR_7->real_qp = VAR_7;
 VAR_7->uobject = ((void*)0);
 VAR_7->qp_type = VAR_5->qp_type;
 VAR_7->rwq_ind_tbl = VAR_5->rwq_ind_tbl;

 FUNC_3(&VAR_7->usecnt, 0);
 FUNC_6(&VAR_7->mr_lock);

 if (VAR_5->qp_type == VAR_2)
  return FUNC_4(VAR_7, VAR_5);

 VAR_7->event_handler = VAR_5->event_handler;
 VAR_7->qp_context = VAR_5->qp_context;
 if (VAR_5->qp_type == VAR_1) {
  VAR_7->recv_cq = ((void*)0);
  VAR_7->srq = ((void*)0);
 } else {
  VAR_7->recv_cq = VAR_5->recv_cq;
  if (VAR_5->recv_cq)
   FUNC_2(&VAR_5->recv_cq->usecnt);
  VAR_7->srq = VAR_5->srq;
  if (VAR_7->srq)
   FUNC_2(&VAR_5->srq->usecnt);
 }

 VAR_7->pd = VAR_4;
 VAR_7->send_cq = VAR_5->send_cq;
 VAR_7->xrcd = ((void*)0);

 FUNC_2(&VAR_4->usecnt);
 if (VAR_5->send_cq)
  FUNC_2(&VAR_5->send_cq->usecnt);
 if (VAR_5->rwq_ind_tbl)
  FUNC_2(&VAR_7->rwq_ind_tbl->usecnt);






 VAR_7->max_write_sge = VAR_5->cap.max_send_sge;
 VAR_7->max_read_sge = FUNC_5(VAR_3, VAR_5->cap.max_send_sge,
     VAR_6->attrs.max_sge_rd);

 return VAR_7;
}
