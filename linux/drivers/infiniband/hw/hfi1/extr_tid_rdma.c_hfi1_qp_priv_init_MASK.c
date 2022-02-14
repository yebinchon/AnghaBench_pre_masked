
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rvt_swqe {struct hfi1_swqe_priv* priv; } ;
struct rvt_qp {int s_size; TYPE_5__* s_ack_queue; struct hfi1_qp_priv* priv; } ;
struct rvt_dev_info {int dummy; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; } ;
struct TYPE_12__ {TYPE_5__* ack; struct rvt_swqe* swqe; } ;
struct TYPE_15__ {TYPE_4__ e; } ;
struct hfi1_swqe_priv {TYPE_7__ tid_req; } ;
struct TYPE_11__ {int generation; void* last_index; void* index; scalar_t__ psn; } ;
struct TYPE_10__ {int trigger_work; } ;
struct TYPE_9__ {int opfn_work; int lock; } ;
struct hfi1_qp_priv {void* pages; TYPE_6__* rcd; int tid_wait; int s_tid_retry_timer; int s_tid_timer; int n_tid_requests; int n_requests; void* r_tid_alloc; void* r_tid_ack; void* r_tid_tail; void* r_tid_head; int rnr_nak_state; void* s_tid_tail; void* s_tid_head; void* s_tid_cur; int s_state; TYPE_3__ flow_state; TYPE_2__ tid_rdma; TYPE_1__ opfn; } ;
struct hfi1_devdata {int node; } ;
struct hfi1_ack_priv {TYPE_7__ tid_req; } ;
struct TYPE_14__ {struct hfi1_devdata* dd; } ;
struct TYPE_13__ {struct hfi1_ack_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct rvt_qp*,TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct hfi1_ack_priv*) ;
 void* FUNC_8 (int,int ,int ) ;
 int VAR_12 ;
 TYPE_6__* FUNC_9 (struct rvt_dev_info*,struct rvt_qp*) ;
 struct rvt_swqe* FUNC_10 (struct rvt_qp*,int) ;
 int FUNC_11 (struct rvt_dev_info*) ;
 int FUNC_12 (int *) ;
 int VAR_13 ;
 int FUNC_13 (int *,int ,int ) ;

int FUNC_14(struct rvt_dev_info *VAR_14, struct rvt_qp *VAR_15,
        struct ib_qp_init_attr *VAR_16)
{
 struct hfi1_qp_priv *VAR_17 = VAR_15->priv;
 int VAR_18, VAR_19;

 VAR_17->rcd = FUNC_9(VAR_14, VAR_15);

 FUNC_12(&VAR_17->opfn.lock);
 FUNC_2(&VAR_17->opfn.opfn_work, VAR_12);
 FUNC_2(&VAR_17->tid_rdma.trigger_work, VAR_13);
 VAR_17->flow_state.psn = 0;
 VAR_17->flow_state.index = VAR_5;
 VAR_17->flow_state.last_index = VAR_5;
 VAR_17->flow_state.generation = VAR_4;
 VAR_17->s_state = FUNC_3(VAR_9);
 VAR_17->s_tid_cur = VAR_2;
 VAR_17->s_tid_head = VAR_2;
 VAR_17->s_tid_tail = VAR_2;
 VAR_17->rnr_nak_state = VAR_8;
 VAR_17->r_tid_head = VAR_2;
 VAR_17->r_tid_tail = VAR_2;
 VAR_17->r_tid_ack = VAR_2;
 VAR_17->r_tid_alloc = VAR_2;
 FUNC_4(&VAR_17->n_requests, 0);
 FUNC_4(&VAR_17->n_tid_requests, 0);
 FUNC_13(&VAR_17->s_tid_timer, VAR_11, 0);
 FUNC_13(&VAR_17->s_tid_retry_timer, VAR_10, 0);
 FUNC_1(&VAR_17->tid_wait);

 if (VAR_16->qp_type == VAR_3 && FUNC_0(VAR_6)) {
  struct hfi1_devdata *VAR_20 = VAR_17->rcd->dd;

  VAR_17->pages = FUNC_8(VAR_7 *
      sizeof(*VAR_17->pages),
         VAR_1, VAR_20->node);
  if (!VAR_17->pages)
   return -VAR_0;
  for (VAR_18 = 0; VAR_18 < VAR_15->s_size; VAR_18++) {
   struct hfi1_swqe_priv *VAR_21;
   struct rvt_swqe *VAR_22 = FUNC_10(VAR_15, VAR_18);

   VAR_21 = FUNC_8(sizeof(*VAR_21), VAR_1,
         VAR_20->node);
   if (!VAR_21)
    return -VAR_0;

   FUNC_5(VAR_15, &VAR_21->tid_req);
   VAR_21->tid_req.e.swqe = VAR_22;
   VAR_22->priv = VAR_21;
  }
  for (VAR_18 = 0; VAR_18 < FUNC_11(VAR_14); VAR_18++) {
   struct hfi1_ack_priv *VAR_23;

   VAR_23 = FUNC_8(sizeof(*VAR_23), VAR_1,
         VAR_20->node);
   if (!VAR_23)
    return -VAR_0;

   FUNC_5(VAR_15, &VAR_23->tid_req);
   VAR_23->tid_req.e.ack = &VAR_15->s_ack_queue[VAR_18];

   VAR_19 = FUNC_6(&VAR_23->tid_req,
           VAR_1);
   if (VAR_19) {
    FUNC_7(VAR_23);
    return VAR_19;
   }
   VAR_15->s_ack_queue[VAR_18].priv = VAR_23;
  }
 }

 return 0;
}
