
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mpa_len; } ;
union iwarp_hdr {TYPE_3__ ctrl; } ;
typedef int u8 ;
typedef int u16 ;
typedef int term_info ;
struct sk_buff {int dummy; } ;
struct iwarp_terminate {scalar_t__ flag_m; scalar_t__ flag_d; scalar_t__ flag_r; int ddp_mo; int ddp_msn; int ddp_qn; } ;
struct TYPE_4__ {struct iwarp_terminate terminate; } ;
struct siw_rx_stream {scalar_t__* ddp_msn; int skb_new; int skb_offset; int skb_copied; int fpdu_part_rcvd; int fpdu_part_rem; TYPE_1__ hdr; struct sk_buff* skb; } ;
struct siw_qp {struct siw_rx_stream rx_stream; } ;
struct iwarp_ctrl_tagged {int dummy; } ;
struct iwarp_ctrl {int dummy; } ;
typedef enum rdma_opcode { ____Placeholder_rdma_opcode } rdma_opcode ;
struct TYPE_5__ {int hdr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct iwarp_terminate*) ;
 scalar_t__ FUNC_2 (struct iwarp_terminate*) ;
 scalar_t__ FUNC_3 (struct iwarp_terminate*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct siw_qp*,char*,int,int ,char*) ;
 int FUNC_9 (struct sk_buff*,int,int *,int) ;

int FUNC_10(struct siw_qp *VAR_5)
{
 struct siw_rx_stream *VAR_6 = &VAR_5->rx_stream;
 struct sk_buff *VAR_7 = VAR_6->skb;
 struct iwarp_terminate *VAR_8 = &VAR_6->hdr.terminate;
 union iwarp_hdr VAR_9;
 u8 *VAR_10 = (u8 *)&VAR_9;
 enum rdma_opcode VAR_11;
 u16 VAR_12 = sizeof(struct iwarp_ctrl);

 FUNC_7("siw: got TERMINATE. layer %d, type %d, code %d\n",
  FUNC_3(VAR_8), FUNC_2(VAR_8),
  FUNC_1(VAR_8));

 if (FUNC_5(VAR_8->ddp_qn) != VAR_3 ||
     FUNC_5(VAR_8->ddp_msn) !=
      VAR_5->rx_stream.ddp_msn[VAR_3] ||
     FUNC_5(VAR_8->ddp_mo) != 0) {
  FUNC_7("siw: rx bogus TERM [QN x%08x, MSN x%08x, MO x%08x]\n",
   FUNC_5(VAR_8->ddp_qn), FUNC_5(VAR_8->ddp_msn),
   FUNC_5(VAR_8->ddp_mo));
  return -VAR_0;
 }



 if (!VAR_8->flag_m)
  return -VAR_0;




 if (VAR_6->skb_new < sizeof(struct iwarp_ctrl_tagged))
  return -VAR_0;

 FUNC_6(VAR_10, 0, sizeof(VAR_9));

 FUNC_9(VAR_7, VAR_6->skb_offset, VAR_10, VAR_12);

 VAR_11 = FUNC_0(&VAR_9.ctrl);
 if (VAR_11 >= VAR_2)
  goto out;

 VAR_10 += VAR_12;
 VAR_6->skb_offset += VAR_12;
 VAR_6->skb_new -= VAR_12;
 VAR_6->skb_copied += VAR_12;
 VAR_6->fpdu_part_rcvd += VAR_12;
 VAR_6->fpdu_part_rem -= VAR_12;

 VAR_12 = VAR_4[VAR_11].hdr_len - VAR_12;


 if (VAR_12 + VAR_1 > VAR_6->skb_new)
  return -VAR_0;

 FUNC_9(VAR_7, VAR_6->skb_offset, VAR_10, VAR_12);

 if (VAR_8->flag_r) {
  FUNC_8(VAR_5, "TERM reports RDMAP hdr type %u, len %u (%s)\n",
      VAR_11, FUNC_4(VAR_9.ctrl.mpa_len),
      VAR_8->flag_m ? "valid" : "invalid");
 } else if (VAR_8->flag_d) {
  FUNC_8(VAR_5, "TERM reports DDP hdr type %u, len %u (%s)\n",
      VAR_11, FUNC_4(VAR_9.ctrl.mpa_len),
      VAR_8->flag_m ? "valid" : "invalid");
 }
out:
 VAR_6->skb_new -= VAR_12;
 VAR_6->skb_offset += VAR_12;
 VAR_6->skb_copied += VAR_12;
 VAR_6->fpdu_part_rcvd += VAR_12;
 VAR_6->fpdu_part_rem -= VAR_12;

 return -VAR_0;
}
