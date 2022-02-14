
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct siw_sge* sge; } ;
struct siw_wqe {int processed; struct siw_mem** mem; TYPE_1__ rqe; } ;
struct siw_sge {scalar_t__ length; scalar_t__ laddr; } ;
struct siw_rx_stream {scalar_t__ state; int fpdu_part_rem; scalar_t__ skb_new; int fpdu_part_rcvd; } ;
struct siw_rx_fpdu {size_t sge_idx; scalar_t__ sge_off; scalar_t__ pbl_idx; scalar_t__ first_ddp_seg; } ;
struct siw_qp {TYPE_3__* srq; struct ib_pd* pd; struct siw_rx_fpdu rx_untagged; struct siw_rx_stream rx_stream; } ;
struct siw_mem {int umem; int is_pbl; int * mem_obj; } ;
struct ib_pd {int dummy; } ;
struct TYPE_5__ {struct ib_pd* pd; } ;
struct TYPE_6__ {TYPE_2__ base_srq; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,scalar_t__) ;
 struct siw_wqe* FUNC_1 (struct siw_rx_fpdu*) ;
 int FUNC_2 (struct ib_pd*,struct siw_sge*,struct siw_mem**,int ,scalar_t__,int) ;
 int FUNC_3 (struct siw_qp*,int ,int ,int ,int ) ;
 int FUNC_4 (struct siw_qp*,int ) ;
 struct siw_wqe* FUNC_5 (struct siw_qp*) ;
 int FUNC_6 (struct siw_rx_stream*,void*,int) ;
 int FUNC_7 (struct siw_rx_stream*,scalar_t__*,struct siw_mem*,scalar_t__,int) ;
 int FUNC_8 (struct siw_rx_stream*,int ,scalar_t__,int) ;
 int FUNC_9 (struct siw_rx_stream*,struct siw_rx_fpdu*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct siw_qp *VAR_12)
{
 struct siw_rx_stream *VAR_13 = &VAR_12->rx_stream;
 struct siw_rx_fpdu *VAR_14 = &VAR_12->rx_untagged;
 struct siw_wqe *VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18 = 0;

 if (VAR_14->first_ddp_seg) {
  VAR_15 = FUNC_5(VAR_12);
  if (FUNC_10(!VAR_15)) {
   FUNC_3(VAR_12, VAR_11,
        VAR_3,
        VAR_1, 0);
   return -VAR_6;
  }
 } else {
  VAR_15 = FUNC_1(VAR_14);
 }
 if (VAR_13->state == VAR_10) {
  VAR_18 = FUNC_9(VAR_13, VAR_14);
  if (FUNC_10(VAR_18)) {
   FUNC_4(VAR_12, VAR_9);
   return VAR_18;
  }
  if (!VAR_13->fpdu_part_rem)
   return 0;
 }
 VAR_16 = FUNC_0(VAR_13->fpdu_part_rem, VAR_13->skb_new);
 VAR_17 = 0;


 while (VAR_16) {
  struct ib_pd *VAR_19;
  struct siw_mem **VAR_20, *VAR_21;
  struct siw_sge *VAR_22;
  u32 VAR_23;

  VAR_22 = &VAR_15->rqe.sge[VAR_14->sge_idx];

  if (!VAR_22->length) {

   VAR_14->sge_idx++;
   VAR_14->sge_off = 0;
   VAR_14->pbl_idx = 0;
   continue;
  }
  VAR_23 = FUNC_0(VAR_16, VAR_22->length - VAR_14->sge_off);
  VAR_20 = &VAR_15->mem[VAR_14->sge_idx];




  VAR_19 = VAR_12->srq == ((void*)0) ? VAR_12->pd : VAR_12->srq->base_srq.pd;

  VAR_18 = FUNC_2(VAR_19, VAR_22, VAR_20, VAR_7,
       VAR_14->sge_off, VAR_23);
  if (FUNC_10(VAR_18)) {
   FUNC_3(VAR_12, VAR_11,
        VAR_2,
        VAR_0, 0);

   FUNC_4(VAR_12, VAR_8);
   break;
  }
  VAR_21 = *VAR_20;
  if (VAR_21->mem_obj == ((void*)0))
   VAR_18 = FUNC_6(VAR_13,
    (void *)(uintptr_t)(VAR_22->laddr + VAR_14->sge_off),
    VAR_23);
  else if (!VAR_21->is_pbl)
   VAR_18 = FUNC_8(VAR_13, VAR_21->umem,
      VAR_22->laddr + VAR_14->sge_off, VAR_23);
  else
   VAR_18 = FUNC_7(VAR_13, &VAR_14->pbl_idx, VAR_21,
     VAR_22->laddr + VAR_14->sge_off, VAR_23);

  if (FUNC_10(VAR_18 != VAR_23)) {
   VAR_15->processed += VAR_17;

   FUNC_3(VAR_12, VAR_11,
        VAR_2,
        VAR_0, 0);
   return -VAR_5;
  }
  VAR_14->sge_off += VAR_18;

  if (VAR_14->sge_off == VAR_22->length) {
   VAR_14->sge_idx++;
   VAR_14->sge_off = 0;
   VAR_14->pbl_idx = 0;
  }
  VAR_16 -= VAR_18;
  VAR_17 += VAR_18;

  VAR_13->fpdu_part_rem -= VAR_18;
  VAR_13->fpdu_part_rcvd += VAR_18;
 }
 VAR_15->processed += VAR_17;

 if (!VAR_13->fpdu_part_rem)
  return 0;

 return (VAR_18 < 0) ? VAR_18 : -VAR_4;
}
