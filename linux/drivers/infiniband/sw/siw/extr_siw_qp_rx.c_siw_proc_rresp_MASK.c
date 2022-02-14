
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct siw_sge* sge; int opcode; } ;
struct siw_wqe {int wr_status; scalar_t__ processed; int wc_status; int bytes; struct siw_mem** mem; TYPE_2__ sqe; } ;
struct siw_sge {scalar_t__ laddr; } ;
struct siw_rx_stream {scalar_t__ fpdu_part_rcvd; int ddp_to; scalar_t__ fpdu_part_rem; int skb_new; } ;
struct siw_rx_fpdu {int pbl_idx; scalar_t__ first_ddp_seg; } ;
struct TYPE_3__ {int orq_size; } ;
struct siw_qp {int orq_get; int pd; TYPE_1__ attrs; struct siw_rx_fpdu rx_tagged; struct siw_rx_stream rx_stream; } ;
struct siw_mem {int umem; int is_pbl; int * mem_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,int ,int,...) ;
 int FUNC_2 (struct siw_qp*) ;
 struct siw_wqe* FUNC_3 (struct siw_rx_fpdu*) ;
 int FUNC_4 (int ,struct siw_sge*,struct siw_mem**,int ,int ,int ) ;
 int FUNC_5 (struct siw_qp*,char*,int) ;
 int FUNC_6 (struct siw_qp*,int ,int ,int ,int ) ;
 int FUNC_7 (struct siw_qp*) ;
 int FUNC_8 (struct siw_qp*,int ) ;
 int FUNC_9 (struct siw_rx_stream*,struct siw_rx_fpdu*) ;
 int FUNC_10 (struct siw_rx_stream*,void*,int) ;
 int FUNC_11 (struct siw_rx_stream*,int *,struct siw_mem*,scalar_t__,int) ;
 int FUNC_12 (struct siw_rx_stream*,int ,scalar_t__,int) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct siw_qp *VAR_14)
{
 struct siw_rx_stream *VAR_15 = &VAR_14->rx_stream;
 struct siw_rx_fpdu *VAR_16 = &VAR_14->rx_tagged;
 struct siw_wqe *VAR_17 = FUNC_3(VAR_16);
 struct siw_mem **VAR_18, *VAR_19;
 struct siw_sge *VAR_20;
 int VAR_21, VAR_22;

 if (VAR_16->first_ddp_seg) {
  if (FUNC_14(VAR_17->wr_status != VAR_11)) {
   FUNC_1("siw: [QP %u]: proc RRESP: status %d, op %d\n",
    FUNC_2(VAR_14), VAR_17->wr_status, VAR_17->sqe.opcode);
   VAR_22 = -VAR_5;
   goto error_term;
  }



  VAR_22 = FUNC_7(VAR_14);
  if (VAR_22) {
   FUNC_1("siw: [QP %u]: ORQ empty at idx %d\n",
    FUNC_2(VAR_14), VAR_14->orq_get % VAR_14->attrs.orq_size);
   goto error_term;
  }
  VAR_22 = FUNC_9(VAR_15, VAR_16);
  if (FUNC_14(VAR_22)) {
   FUNC_8(VAR_14, VAR_8);
   return VAR_22;
  }
 } else {
  if (FUNC_14(VAR_17->wr_status != VAR_12)) {
   FUNC_1("siw: [QP %u]: resume RRESP: status %d\n",
    FUNC_2(VAR_14), VAR_17->wr_status);
   VAR_22 = -VAR_5;
   goto error_term;
  }
 }
 if (!VAR_15->fpdu_part_rem)
  return 0;

 VAR_20 = VAR_17->sqe.sge;
 VAR_18 = &VAR_17->mem[0];

 if (!(*VAR_18)) {



  VAR_22 = FUNC_4(VAR_14->pd, VAR_20, VAR_18, VAR_6, 0,
       VAR_17->bytes);
  if (FUNC_14(VAR_22)) {
   FUNC_5(VAR_14, "target mem check: %d\n", VAR_22);
   VAR_17->wc_status = VAR_10;

   FUNC_6(VAR_14, VAR_13,
        VAR_2,
        FUNC_13(-VAR_22), 0);

   FUNC_8(VAR_14, VAR_7);

   return -VAR_4;
  }
 }
 VAR_19 = *VAR_18;

 VAR_21 = FUNC_0(VAR_15->fpdu_part_rem, VAR_15->skb_new);

 if (VAR_19->mem_obj == ((void*)0))
  VAR_22 = FUNC_10(VAR_15,
   (void *)(uintptr_t)(VAR_20->laddr + VAR_17->processed),
   VAR_21);
 else if (!VAR_19->is_pbl)
  VAR_22 = FUNC_12(VAR_15, VAR_19->umem, VAR_20->laddr + VAR_17->processed,
     VAR_21);
 else
  VAR_22 = FUNC_11(VAR_15, &VAR_16->pbl_idx, VAR_19,
    VAR_20->laddr + VAR_17->processed, VAR_21);
 if (VAR_22 != VAR_21) {
  VAR_17->wc_status = VAR_9;
  VAR_22 = -VAR_4;
  goto error_term;
 }
 VAR_15->fpdu_part_rem -= VAR_22;
 VAR_15->fpdu_part_rcvd += VAR_22;
 VAR_17->processed += VAR_22;

 if (!VAR_15->fpdu_part_rem) {
  VAR_15->ddp_to += VAR_15->fpdu_part_rcvd;
  return 0;
 }
 return -VAR_3;

error_term:
 FUNC_6(VAR_14, VAR_13, VAR_1,
      VAR_0, 0);
 return VAR_22;
}
