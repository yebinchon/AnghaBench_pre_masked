
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_17__ {size_t rkey; int raddr; TYPE_10__* sge; } ;
struct siw_wqe {int processed; scalar_t__ bytes; TYPE_11__ sqe; } ;
struct TYPE_29__ {void* ddp_to; } ;
struct TYPE_28__ {scalar_t__ ddp_mo; } ;
struct TYPE_20__ {int ddp_rdmap_ctrl; int mpa_len; } ;
struct TYPE_27__ {int crc; } ;
struct TYPE_26__ {void* sink_to; void* sink_stag; } ;
struct TYPE_25__ {void* sink_to; void* sink_stag; } ;
struct TYPE_24__ {int crc; } ;
struct TYPE_23__ {void* inval_stag; } ;
struct TYPE_22__ {size_t ddp_qn; int ddp_mo; void* ddp_msn; } ;
struct TYPE_18__ {int crc; } ;
struct TYPE_30__ {void* read_size; void* source_to; void* source_stag; void* sink_to; void* sink_stag; int ddp_mo; void* ddp_msn; void* ddp_qn; int rsvd; } ;
struct TYPE_19__ {TYPE_8__ c_tagged; TYPE_7__ c_untagged; TYPE_14__ ctrl; TYPE_6__ write_pkt; TYPE_5__ rresp; TYPE_4__ rwrite; TYPE_3__ send_pkt; TYPE_2__ send_inv; TYPE_1__ send; TYPE_12__ rreq_pkt; TYPE_9__ rreq; } ;
struct siw_iwarp_tx {size_t* ddp_msn; int ctrl_len; int use_sendpage; scalar_t__ zcopy_tx; scalar_t__ pbl_idx; scalar_t__ sge_off; scalar_t__ sge_idx; scalar_t__ mpa_crc_hd; TYPE_13__ pkt; scalar_t__ ctrl_sent; struct siw_wqe wqe_active; } ;
struct iwarp_send_inv {int dummy; } ;
struct iwarp_send {int dummy; } ;
struct iwarp_rdma_write {int dummy; } ;
struct iwarp_rdma_rresp {int dummy; } ;
struct iwarp_rdma_rreq {int dummy; } ;
struct iwarp_ctrl {int dummy; } ;
struct TYPE_21__ {int ctrl; } ;
struct TYPE_16__ {size_t lkey; size_t length; int laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;






 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_0 (size_t) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int) ;
 void* FUNC_5 (size_t) ;
 int FUNC_6 (int) ;
 TYPE_15__* VAR_20 ;
 int FUNC_7 (TYPE_14__*,int *,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct siw_iwarp_tx*,char*) ;
 int FUNC_10 (struct siw_wqe*) ;
 int FUNC_11 (struct siw_iwarp_tx*) ;
 int FUNC_12 (struct siw_wqe*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct siw_iwarp_tx *VAR_21)
{
 struct siw_wqe *VAR_22 = &VAR_21->wqe_active;
 char *VAR_23 = ((void*)0);
 int VAR_24 = 0;

 switch (FUNC_12(VAR_22)) {
 case 133:
 case 132:
  FUNC_7(&VAR_21->pkt.ctrl,
         &VAR_20[VAR_8].ctrl,
         sizeof(struct iwarp_ctrl));

  VAR_21->pkt.rreq.rsvd = 0;
  VAR_21->pkt.rreq.ddp_qn = FUNC_5(VAR_15);
  VAR_21->pkt.rreq.ddp_msn =
   FUNC_5(++VAR_21->ddp_msn[VAR_15]);
  VAR_21->pkt.rreq.ddp_mo = 0;
  VAR_21->pkt.rreq.sink_stag = FUNC_5(VAR_22->sqe.sge[0].lkey);
  VAR_21->pkt.rreq.sink_to =
   FUNC_1(VAR_22->sqe.sge[0].laddr);
  VAR_21->pkt.rreq.source_stag = FUNC_5(VAR_22->sqe.rkey);
  VAR_21->pkt.rreq.source_to = FUNC_1(VAR_22->sqe.raddr);
  VAR_21->pkt.rreq.read_size = FUNC_5(VAR_22->sqe.sge[0].length);

  VAR_21->ctrl_len = sizeof(struct iwarp_rdma_rreq);
  VAR_23 = (char *)&VAR_21->pkt.rreq_pkt.crc;
  break;

 case 130:
  if (FUNC_10(VAR_22) & VAR_19)
   FUNC_7(&VAR_21->pkt.ctrl,
          &VAR_20[VAR_13].ctrl,
          sizeof(struct iwarp_ctrl));
  else
   FUNC_7(&VAR_21->pkt.ctrl, &VAR_20[VAR_11].ctrl,
          sizeof(struct iwarp_ctrl));

  VAR_21->pkt.send.ddp_qn = VAR_16;
  VAR_21->pkt.send.ddp_msn =
   FUNC_5(++VAR_21->ddp_msn[VAR_16]);
  VAR_21->pkt.send.ddp_mo = 0;

  VAR_21->pkt.send_inv.inval_stag = 0;

  VAR_21->ctrl_len = sizeof(struct iwarp_send);

  VAR_23 = (char *)&VAR_21->pkt.send_pkt.crc;
  VAR_24 = FUNC_9(VAR_21, VAR_23);
  break;

 case 129:
  if (FUNC_10(VAR_22) & VAR_19)
   FUNC_7(&VAR_21->pkt.ctrl,
          &VAR_20[VAR_14].ctrl,
          sizeof(struct iwarp_ctrl));
  else
   FUNC_7(&VAR_21->pkt.ctrl,
          &VAR_20[VAR_12].ctrl,
          sizeof(struct iwarp_ctrl));

  VAR_21->pkt.send.ddp_qn = VAR_16;
  VAR_21->pkt.send.ddp_msn =
   FUNC_5(++VAR_21->ddp_msn[VAR_16]);
  VAR_21->pkt.send.ddp_mo = 0;

  VAR_21->pkt.send_inv.inval_stag = FUNC_0(VAR_22->sqe.rkey);

  VAR_21->ctrl_len = sizeof(struct iwarp_send_inv);

  VAR_23 = (char *)&VAR_21->pkt.send_pkt.crc;
  VAR_24 = FUNC_9(VAR_21, VAR_23);
  break;

 case 128:
  FUNC_7(&VAR_21->pkt.ctrl, &VAR_20[VAR_10].ctrl,
         sizeof(struct iwarp_ctrl));

  VAR_21->pkt.rwrite.sink_stag = FUNC_5(VAR_22->sqe.rkey);
  VAR_21->pkt.rwrite.sink_to = FUNC_1(VAR_22->sqe.raddr);
  VAR_21->ctrl_len = sizeof(struct iwarp_rdma_write);

  VAR_23 = (char *)&VAR_21->pkt.write_pkt.crc;
  VAR_24 = FUNC_9(VAR_21, VAR_23);
  break;

 case 131:
  FUNC_7(&VAR_21->pkt.ctrl,
         &VAR_20[VAR_9].ctrl,
         sizeof(struct iwarp_ctrl));


  VAR_21->pkt.rresp.sink_stag = FUNC_0(VAR_22->sqe.rkey);
  VAR_21->pkt.rresp.sink_to = FUNC_1(VAR_22->sqe.raddr);

  VAR_21->ctrl_len = sizeof(struct iwarp_rdma_rresp);

  VAR_23 = (char *)&VAR_21->pkt.write_pkt.crc;
  VAR_24 = FUNC_9(VAR_21, VAR_23);
  break;

 default:
  FUNC_8(FUNC_11(VAR_21), "stale wqe type %d\n", FUNC_12(VAR_22));
  return -VAR_2;
 }
 if (FUNC_13(VAR_24 < 0))
  return VAR_24;

 VAR_21->ctrl_sent = 0;

 if (VAR_24 <= VAR_3) {
  if (VAR_24) {
   VAR_22->processed = VAR_24;

   VAR_21->pkt.ctrl.mpa_len =
    FUNC_6(VAR_21->ctrl_len + VAR_24 - VAR_5);


   VAR_24 += -(int)VAR_24 & 0x3;

   VAR_23 += VAR_24;
   VAR_21->ctrl_len += VAR_24;

   if (!(VAR_21->pkt.ctrl.ddp_rdmap_ctrl & VAR_0))
    VAR_21->pkt.c_untagged.ddp_mo = 0;
   else
    VAR_21->pkt.c_tagged.ddp_to =
     FUNC_1(VAR_22->sqe.raddr);
  }

  *(u32 *)VAR_23 = 0;



  if (VAR_21->mpa_crc_hd) {
   FUNC_3(VAR_21->mpa_crc_hd);
   if (FUNC_4(VAR_21->mpa_crc_hd,
      (u8 *)&VAR_21->pkt,
      VAR_21->ctrl_len))
    return -VAR_1;
   FUNC_2(VAR_21->mpa_crc_hd, (u8 *)VAR_23);
  }
  VAR_21->ctrl_len += VAR_4;

  return VAR_6;
 }
 VAR_21->ctrl_len += VAR_4;
 VAR_21->sge_idx = 0;
 VAR_21->sge_off = 0;
 VAR_21->pbl_idx = 0;
 if (VAR_21->zcopy_tx && VAR_22->bytes >= VAR_17 &&
     !(FUNC_10(VAR_22) & VAR_18))
  VAR_21->use_sendpage = 1;
 else
  VAR_21->use_sendpage = 0;

 return VAR_7;
}
