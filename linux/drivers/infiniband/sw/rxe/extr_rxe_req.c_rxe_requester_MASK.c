
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_14__ {int resid; } ;
struct TYPE_18__ {TYPE_10__* mr; int key; int access; } ;
struct TYPE_19__ {TYPE_5__ reg; } ;
struct TYPE_17__ {int invalidate_rkey; } ;
struct TYPE_20__ {int send_flags; int opcode; TYPE_6__ wr; TYPE_4__ ex; } ;
struct rxe_send_wqe {int mask; scalar_t__ first_psn; scalar_t__ last_psn; void* state; void* status; TYPE_1__ dma; TYPE_7__ wr; } ;
struct TYPE_21__ {scalar_t__ psn; int task; } ;
struct TYPE_22__ {scalar_t__ state; int opcode; int wait_psn; int need_retry; scalar_t__ psn; int task; void* wqe_index; scalar_t__ need_rd_atomic; } ;
struct TYPE_15__ {int queue; } ;
struct TYPE_16__ {int device; } ;
struct rxe_qp {scalar_t__ sq_sig_type; int need_req_skb; TYPE_8__ comp; TYPE_9__ req; TYPE_2__ sq; int skb_out; int iova; int rkey; int lkey; int access; int state; TYPE_3__ ibqp; int valid; } ;
struct rxe_pkt_info {int dummy; } ;
struct rxe_mem {scalar_t__ sq_sig_type; int need_req_skb; TYPE_8__ comp; TYPE_9__ req; TYPE_2__ sq; int skb_out; int iova; int rkey; int lkey; int access; int state; TYPE_3__ ibqp; int valid; } ;
struct rxe_dev {int mr_pool; } ;
typedef enum rxe_hdr_mask { ____Placeholder_rxe_hdr_mask } rxe_hdr_mask ;
struct TYPE_13__ {int mask; } ;
struct TYPE_12__ {int iova; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct rxe_qp*,struct rxe_send_wqe*) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct rxe_qp*,struct rxe_send_wqe*,struct rxe_pkt_info*,struct sk_buff*,int) ;
 int FUNC_5 (struct rxe_qp*) ;
 struct sk_buff* FUNC_6 (struct rxe_qp*,struct rxe_send_wqe*,int,int,struct rxe_pkt_info*) ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (int ,void*) ;
 int FUNC_9 (struct rxe_qp*,struct rxe_send_wqe*,int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (struct rxe_qp*) ;
 scalar_t__ FUNC_13 (struct rxe_qp*) ;
 struct rxe_send_wqe* FUNC_14 (struct rxe_qp*) ;
 int FUNC_15 (struct rxe_qp*) ;
 int FUNC_16 (struct rxe_send_wqe*,struct rxe_qp*,struct rxe_send_wqe*,int ) ;
 int FUNC_17 (struct rxe_qp*) ;
 int FUNC_18 (struct rxe_qp*) ;
 TYPE_11__* VAR_22 ;
 struct rxe_qp* FUNC_19 (int *,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (struct rxe_qp*,struct rxe_pkt_info*,struct sk_buff*) ;
 int FUNC_22 (struct rxe_send_wqe*,struct rxe_qp*,struct rxe_send_wqe*,int *) ;
 struct rxe_dev* FUNC_23 (int ) ;
 struct rxe_qp* FUNC_24 (TYPE_10__*) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (struct rxe_qp*,struct rxe_send_wqe*,struct rxe_pkt_info*,int) ;
 int FUNC_27 (struct rxe_qp*,struct rxe_send_wqe*,struct rxe_pkt_info*,int) ;
 int FUNC_28 (struct rxe_qp*,struct rxe_send_wqe*,struct rxe_pkt_info*) ;
 void* VAR_23 ;
 void* VAR_24 ;

int FUNC_29(void *VAR_25)
{
 struct rxe_qp *VAR_26 = (struct rxe_qp *)VAR_25;
 struct rxe_pkt_info VAR_27;
 struct sk_buff *VAR_28;
 struct rxe_send_wqe *VAR_29;
 enum rxe_hdr_mask VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 struct rxe_send_wqe VAR_35;
 u32 VAR_36;

 FUNC_17(VAR_26);

next_wqe:
 if (FUNC_25(!VAR_26->valid || VAR_26->req.state == VAR_13))
  goto exit;

 if (FUNC_25(VAR_26->req.state == VAR_14)) {
  VAR_26->req.wqe_index = FUNC_3(VAR_26->sq.queue);
  VAR_26->req.opcode = -1;
  VAR_26->req.need_rd_atomic = 0;
  VAR_26->req.wait_psn = 0;
  VAR_26->req.need_retry = 0;
  goto exit;
 }

 if (FUNC_25(VAR_26->req.need_retry)) {
  FUNC_15(VAR_26);
  VAR_26->req.need_retry = 0;
 }

 VAR_29 = FUNC_14(VAR_26);
 if (FUNC_25(!VAR_29))
  goto exit;

 if (VAR_29->mask & VAR_21) {
  if (VAR_29->wr.opcode == VAR_11) {
   struct rxe_dev *VAR_37 = FUNC_23(VAR_26->ibqp.device);
   struct rxe_mem *VAR_38;

   VAR_38 = FUNC_19(&VAR_37->mr_pool,
       VAR_29->wr.ex.invalidate_rkey >> 8);
   if (!VAR_38) {
    FUNC_11("No mr for key %#x\n",
           VAR_29->wr.ex.invalidate_rkey);
    VAR_29->state = VAR_24;
    VAR_29->status = VAR_9;
    goto exit;
   }
   VAR_38->state = VAR_17;
   FUNC_18(VAR_38);
   VAR_29->state = VAR_23;
   VAR_29->status = VAR_10;
  } else if (VAR_29->wr.opcode == VAR_12) {
   struct rxe_mem *VAR_39 = FUNC_24(VAR_29->wr.wr.reg.mr);

   VAR_39->state = VAR_18;
   VAR_39->access = VAR_29->wr.wr.reg.access;
   VAR_39->lkey = VAR_29->wr.wr.reg.key;
   VAR_39->rkey = VAR_29->wr.wr.reg.key;
   VAR_39->iova = VAR_29->wr.wr.reg.mr->iova;
   VAR_29->state = VAR_23;
   VAR_29->status = VAR_10;
  } else {
   goto exit;
  }
  if ((VAR_29->wr.send_flags & VAR_5) ||
      VAR_26->sq_sig_type == VAR_6)
   FUNC_20(&VAR_26->comp.task, 1);
  VAR_26->req.wqe_index = FUNC_8(VAR_26->sq.queue,
      VAR_26->req.wqe_index);
  goto next_wqe;
 }

 if (FUNC_25(FUNC_13(VAR_26) == VAR_3 &&
       VAR_26->req.psn > (VAR_26->comp.psn + VAR_16))) {
  VAR_26->req.wait_psn = 1;
  goto exit;
 }


 if (FUNC_25(FUNC_1(&VAR_26->skb_out) >
       VAR_15)) {
  VAR_26->need_req_skb = 1;
  goto exit;
 }

 VAR_33 = FUNC_9(VAR_26, VAR_29, VAR_29->wr.opcode);
 if (FUNC_25(VAR_33 < 0)) {
  VAR_29->status = VAR_8;
  goto exit;
 }

 VAR_30 = VAR_22[VAR_33].mask;
 if (FUNC_25(VAR_30 & VAR_19)) {
  if (FUNC_2(VAR_26, VAR_29))
   goto exit;
 }

 VAR_32 = FUNC_5(VAR_26);
 VAR_31 = (VAR_30 & VAR_20) ? VAR_29->dma.resid : 0;
 if (VAR_31 > VAR_32) {
  if (FUNC_13(VAR_26) == VAR_4) {







   VAR_29->first_psn = VAR_26->req.psn;
   VAR_29->last_psn = VAR_26->req.psn;
   VAR_26->req.psn = (VAR_26->req.psn + 1) & VAR_0;
   VAR_26->req.opcode = VAR_2;
   VAR_26->req.wqe_index = FUNC_8(VAR_26->sq.queue,
             VAR_26->req.wqe_index);
   VAR_29->state = VAR_23;
   VAR_29->status = VAR_10;
   FUNC_0(&VAR_26->comp.task);
   FUNC_18(VAR_26);
   return 0;
  }
  VAR_31 = VAR_32;
 }

 VAR_28 = FUNC_6(VAR_26, VAR_29, VAR_33, VAR_31, &VAR_27);
 if (FUNC_25(!VAR_28)) {
  FUNC_11("qp#%d Failed allocating skb\n", FUNC_12(VAR_26));
  goto err;
 }

 if (FUNC_4(VAR_26, VAR_29, &VAR_27, VAR_28, VAR_31)) {
  FUNC_10("qp#%d Error during fill packet\n", FUNC_12(VAR_26));
  FUNC_7(VAR_28);
  goto err;
 }







 FUNC_22(VAR_29, VAR_26, &VAR_35, &VAR_36);
 FUNC_28(VAR_26, VAR_29, &VAR_27);
 FUNC_27(VAR_26, VAR_29, &VAR_27, VAR_31);
 VAR_34 = FUNC_21(VAR_26, &VAR_27, VAR_28);
 if (VAR_34) {
  VAR_26->need_req_skb = 1;

  FUNC_16(VAR_29, VAR_26, &VAR_35, VAR_36);

  if (VAR_34 == -VAR_1) {
   FUNC_20(&VAR_26->req.task, 1);
   goto exit;
  }

  goto err;
 }

 FUNC_26(VAR_26, VAR_29, &VAR_27, VAR_31);

 goto next_wqe;

err:
 VAR_29->status = VAR_7;
 VAR_29->state = VAR_24;
 FUNC_0(&VAR_26->comp.task);

exit:
 FUNC_18(VAR_26);
 return -VAR_1;
}
