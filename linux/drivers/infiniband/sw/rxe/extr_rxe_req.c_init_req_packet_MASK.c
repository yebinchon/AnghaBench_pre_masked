
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_18__ {size_t pkey_index; int remote_qkey; int remote_qpn; } ;
struct TYPE_17__ {int rkey; int compare_add; int swap; } ;
struct TYPE_14__ {int rkey; } ;
struct TYPE_19__ {TYPE_7__ ud; TYPE_6__ atomic; TYPE_3__ rdma; } ;
struct TYPE_16__ {int invalidate_rkey; int imm_data; } ;
struct rxe_send_wr {int send_flags; TYPE_8__ wr; TYPE_5__ ex; } ;
struct TYPE_15__ {int resid; } ;
struct rxe_send_wqe {int iova; TYPE_4__ dma; struct rxe_send_wr wr; } ;
struct TYPE_20__ {int qp_num; int device; } ;
struct TYPE_13__ {scalar_t__ noack_pkts; int psn; } ;
struct TYPE_12__ {size_t pkey_index; int dest_qp_num; } ;
struct rxe_qp {TYPE_9__ ibqp; TYPE_2__ req; TYPE_1__ attr; } ;
struct rxe_port {int * pkey_tbl; } ;
struct rxe_pkt_info {int opcode; int mask; int paylen; int psn; struct rxe_send_wqe* wqe; scalar_t__ offset; struct rxe_qp* qp; } ;
struct rxe_dev {struct rxe_port port; } ;
struct rxe_av {int dummy; } ;
struct TYPE_11__ {int length; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct rxe_pkt_info*,int ) ;
 int FUNC_1 (struct rxe_pkt_info*,int ) ;
 int FUNC_2 (struct rxe_pkt_info*,int ) ;
 int FUNC_3 (struct rxe_pkt_info*,int ) ;
 int FUNC_4 (struct rxe_pkt_info*,int,int,int ,int,int ,int ,int,int ) ;
 int FUNC_5 (struct rxe_pkt_info*,int ) ;
 int FUNC_6 (struct rxe_pkt_info*,int) ;
 int FUNC_7 (struct rxe_pkt_info*,int ) ;
 int FUNC_8 (struct rxe_pkt_info*,int ) ;
 scalar_t__ FUNC_9 (struct rxe_qp*) ;
 int FUNC_10 (struct rxe_pkt_info*,int ) ;
 int FUNC_11 (struct rxe_pkt_info*,int ) ;
 int FUNC_12 (struct rxe_pkt_info*,int ) ;
 struct rxe_av* FUNC_13 (struct rxe_pkt_info*) ;
 struct sk_buff* FUNC_14 (struct rxe_dev*,struct rxe_av*,int,struct rxe_pkt_info*) ;
 TYPE_10__* VAR_15 ;
 struct rxe_dev* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_17(struct rxe_qp *VAR_16,
           struct rxe_send_wqe *VAR_17,
           int VAR_18, int VAR_19,
           struct rxe_pkt_info *VAR_20)
{
 struct rxe_dev *VAR_21 = FUNC_15(VAR_16->ibqp.device);
 struct rxe_port *VAR_22 = &VAR_21->port;
 struct sk_buff *VAR_23;
 struct rxe_send_wr *VAR_24 = &VAR_17->wr;
 struct rxe_av *VAR_25;
 int VAR_26 = (-VAR_19) & 0x3;
 int VAR_27;
 int VAR_28;
 u16 VAR_29;
 u32 VAR_30;
 int VAR_31;


 VAR_27 = VAR_15[VAR_18].length + VAR_19 + VAR_26 + VAR_8;




 VAR_20->opcode = VAR_18;
 VAR_20->qp = VAR_16;
 VAR_20->psn = VAR_16->req.psn;
 VAR_20->mask = VAR_15[VAR_18].mask;
 VAR_20->paylen = VAR_27;
 VAR_20->offset = 0;
 VAR_20->wqe = VAR_17;


 VAR_25 = FUNC_13(VAR_20);
 VAR_23 = FUNC_14(VAR_21, VAR_25, VAR_27, VAR_20);
 if (FUNC_16(!VAR_23))
  return ((void*)0);


 VAR_28 = (VAR_24->send_flags & VAR_4) &&
   (VAR_20->mask & VAR_7) &&
   ((VAR_20->mask & (VAR_13)) ||
   (VAR_20->mask & (VAR_14 | VAR_10)) ==
   (VAR_14 | VAR_10));

 VAR_29 = (FUNC_9(VAR_16) == VAR_3) ?
   VAR_22->pkey_tbl[VAR_24->wr.ud.pkey_index] :
   VAR_22->pkey_tbl[VAR_16->attr.pkey_index];

 VAR_30 = (VAR_20->mask & VAR_6) ? VAR_24->wr.ud.remote_qpn :
      VAR_16->attr.dest_qp_num;

 VAR_31 = ((VAR_20->mask & VAR_7) ||
  (VAR_16->req.noack_pkts++ > VAR_11));
 if (VAR_31)
  VAR_16->req.noack_pkts = 0;

 FUNC_4(VAR_20, VAR_20->opcode, VAR_28, 0, VAR_26, VAR_29, VAR_30,
   VAR_31, VAR_20->psn);


 if (VAR_20->mask & VAR_12) {
  FUNC_11(VAR_20, VAR_24->wr.rdma.rkey);
  FUNC_12(VAR_20, VAR_17->iova);
  FUNC_10(VAR_20, VAR_17->dma.resid);
 }

 if (VAR_20->mask & VAR_10)
  FUNC_8(VAR_20, VAR_24->ex.imm_data);

 if (VAR_20->mask & VAR_9)
  FUNC_7(VAR_20, VAR_24->ex.invalidate_rkey);

 if (VAR_20->mask & VAR_5) {
  FUNC_3(VAR_20, VAR_17->iova);
  if (VAR_18 == VAR_1 ||
      VAR_18 == VAR_2) {
   FUNC_2(VAR_20, VAR_24->wr.atomic.swap);
   FUNC_0(VAR_20, VAR_24->wr.atomic.compare_add);
  } else {
   FUNC_2(VAR_20, VAR_24->wr.atomic.compare_add);
  }
  FUNC_1(VAR_20, VAR_24->wr.atomic.rkey);
 }

 if (VAR_20->mask & VAR_6) {
  if (VAR_16->ibqp.qp_num == 1)
   FUNC_5(VAR_20, VAR_0);
  else
   FUNC_5(VAR_20, VAR_24->wr.ud.remote_qkey);
  FUNC_6(VAR_20, VAR_16->ibqp.qp_num);
 }

 return VAR_23;
}
