
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tid_rdma_request {scalar_t__ total_segs; scalar_t__ ack_pending; scalar_t__ comp_seg; } ;
struct TYPE_2__ {scalar_t__ opcode; } ;
struct rvt_swqe {scalar_t__ psn; int lpsn; TYPE_1__ wr; } ;
struct rvt_qp {scalar_t__ s_num_rd_atomic; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {scalar_t__ pkts_ps; int pending_tid_r_segs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct rvt_qp*,int ,scalar_t__,scalar_t__,int ,struct tid_rdma_request*) ;
 struct tid_rdma_request* FUNC_2 (struct rvt_swqe*) ;

__attribute__((used)) static void FUNC_3(struct rvt_qp *VAR_4, u32 VAR_5,
     struct rvt_swqe *VAR_6)
{
 u32 VAR_7 = VAR_6->wr.opcode;

 if (VAR_7 == VAR_2 ||
     VAR_7 == VAR_0 ||
     VAR_7 == VAR_1) {
  VAR_4->s_num_rd_atomic++;
 } else if (VAR_7 == VAR_3) {
  struct tid_rdma_request *VAR_8 = FUNC_2(VAR_6);
  struct hfi1_qp_priv *VAR_9 = VAR_4->priv;

  if (FUNC_0(VAR_5, VAR_6->lpsn) <= 0) {
   u32 VAR_10;

   VAR_10 = (VAR_5 - VAR_6->psn) / VAR_9->pkts_ps;
   VAR_8->ack_pending = VAR_10 - VAR_8->comp_seg;
   VAR_9->pending_tid_r_segs += VAR_8->ack_pending;
   VAR_4->s_num_rd_atomic += VAR_8->ack_pending;
   FUNC_1(VAR_4, 0,
        VAR_6->wr.opcode,
        VAR_6->psn,
        VAR_6->lpsn,
        VAR_8);
  } else {
   VAR_9->pending_tid_r_segs += VAR_8->total_segs;
   VAR_4->s_num_rd_atomic += VAR_8->total_segs;
  }
 }
}
