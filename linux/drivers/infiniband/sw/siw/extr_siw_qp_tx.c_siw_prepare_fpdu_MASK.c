
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


typedef int u8 ;
struct TYPE_9__ {int raddr; } ;
struct siw_wqe {int processed; int bytes; TYPE_3__ sqe; } ;
struct TYPE_12__ {int ddp_rdmap_ctrl; int mpa_len; } ;
struct TYPE_8__ {int ddp_to; } ;
struct TYPE_7__ {int ddp_mo; } ;
struct TYPE_10__ {TYPE_6__ ctrl; TYPE_2__ c_tagged; TYPE_1__ c_untagged; } ;
struct siw_iwarp_tx {scalar_t__ ctrl_len; scalar_t__ tcp_seglen; int pad; int bytes_unsent; int do_crc; TYPE_4__ pkt; scalar_t__ mpa_crc_hd; scalar_t__ ctrl_sent; } ;
struct siw_qp {struct siw_iwarp_tx tx_ctx; } ;
struct TYPE_11__ {scalar_t__ hdr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_5__* VAR_4 ;

__attribute__((used)) static void FUNC_6(struct siw_qp *VAR_5, struct siw_wqe *VAR_6)
{
 struct siw_iwarp_tx *VAR_7 = &VAR_5->tx_ctx;
 int VAR_8;

 VAR_7->ctrl_len =
  VAR_4[FUNC_0(&VAR_7->pkt.ctrl)].hdr_len;
 VAR_7->ctrl_sent = 0;




 if (!(VAR_7->pkt.ctrl.ddp_rdmap_ctrl & VAR_1))

  VAR_7->pkt.c_untagged.ddp_mo = FUNC_1(VAR_6->processed);
 else
  VAR_7->pkt.c_tagged.ddp_to =
   FUNC_2(VAR_6->sqe.raddr + VAR_6->processed);

 VAR_8 = VAR_6->bytes - VAR_6->processed;
 if (VAR_8 + VAR_7->ctrl_len + VAR_2 > VAR_7->tcp_seglen) {

  VAR_8 = VAR_7->tcp_seglen - (VAR_7->ctrl_len + VAR_2);
  VAR_7->pkt.ctrl.ddp_rdmap_ctrl &= ~VAR_0;
  VAR_7->pad = 0;
 } else {
  VAR_7->pkt.ctrl.ddp_rdmap_ctrl |= VAR_0;
  VAR_7->pad = -VAR_8 & 0x3;
 }
 VAR_7->bytes_unsent = VAR_8;

 VAR_7->pkt.ctrl.mpa_len =
  FUNC_5(VAR_7->ctrl_len + VAR_8 - VAR_3);




 if (VAR_7->mpa_crc_hd) {
  FUNC_3(VAR_7->mpa_crc_hd);
  FUNC_4(VAR_7->mpa_crc_hd, (u8 *)&VAR_7->pkt,
        VAR_7->ctrl_len);
  VAR_7->do_crc = 1;
 }
}
