
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ hdr_type; } ;
struct TYPE_5__ {TYPE_3__ hdr; } ;
struct verbs_txreq {int hdr_dwords; int s_cur_size; TYPE_2__ phdr; int txreq; int sde; int wqe; } ;
struct TYPE_4__ {int device; } ;
struct rvt_qp {TYPE_1__ ibqp; int s_wqe; int srate_mbps; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_sc; struct hfi1_ahg_info* s_ahg; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_pkt_state {struct verbs_txreq* s_txreq; int pkts_sent; int wait; int opcode; struct hfi1_pportdata* ppd; struct hfi1_ibdev* dev; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_ahg_info {int dummy; } ;
typedef int pbc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,struct verbs_txreq*,struct hfi1_ahg_info*,int) ;
 int FUNC_1 (struct hfi1_pportdata*,int,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rvt_qp*,int ) ;
 int FUNC_4 (struct rvt_qp*,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct verbs_txreq*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct rvt_qp*,struct hfi1_pkt_state*,int) ;
 int FUNC_16 (struct hfi1_ibdev*,struct rvt_qp*,struct hfi1_pkt_state*) ;

int FUNC_17(struct rvt_qp *VAR_6, struct hfi1_pkt_state *VAR_7,
   u64 VAR_8)
{
 struct hfi1_qp_priv *VAR_9 = VAR_6->priv;
 struct hfi1_ahg_info *VAR_10 = VAR_9->s_ahg;
 u32 VAR_11 = VAR_7->s_txreq->hdr_dwords;
 u32 VAR_12 = VAR_7->s_txreq->s_cur_size;
 u32 VAR_13;
 struct hfi1_ibdev *VAR_14 = VAR_7->dev;
 struct hfi1_pportdata *VAR_15 = VAR_7->ppd;
 struct verbs_txreq *VAR_16;
 u8 VAR_17 = VAR_9->s_sc;
 int VAR_18;
 u32 VAR_19;

 if (VAR_7->s_txreq->phdr.hdr.hdr_type) {
  u8 VAR_20 = FUNC_5((VAR_11 << 2), VAR_12);

  VAR_19 = (VAR_12 + VAR_20 + (VAR_4 << 2) +
     VAR_5) >> 2;
 } else {
  VAR_19 = (VAR_12 + 3) >> 2;
 }
 VAR_13 = VAR_11 + VAR_19 + sizeof(VAR_8) / 4;

 VAR_16 = VAR_7->s_txreq;
 if (!FUNC_11(&VAR_16->txreq)) {
  if (FUNC_8(VAR_8 == 0)) {
   u32 VAR_21 = FUNC_9(FUNC_2(VAR_6->ibqp.device), VAR_17);



   if (VAR_7->s_txreq->phdr.hdr.hdr_type)
    VAR_8 |= VAR_3 |
           VAR_2;
   else
    VAR_8 |= (FUNC_7(VAR_17) << VAR_1);

   VAR_8 = FUNC_1(VAR_15,
      VAR_8,
      VAR_6->srate_mbps,
      VAR_21,
      VAR_13);

   if (FUNC_13(FUNC_3(VAR_6, VAR_7->opcode)))
    VAR_8 = FUNC_4(VAR_6, VAR_7->opcode, VAR_8);
   else

    VAR_8 = FUNC_14(VAR_7->opcode, VAR_8);
  }
  VAR_16->wqe = VAR_6->s_wqe;
  VAR_18 = FUNC_0(VAR_16->sde, VAR_12, VAR_16, VAR_10, VAR_8);
  if (FUNC_13(VAR_18))
   goto bail_build;
 }
 VAR_18 = FUNC_10(VAR_16->sde, VAR_7->wait, &VAR_16->txreq, VAR_7->pkts_sent);
 if (FUNC_13(VAR_18 < 0)) {
  if (VAR_18 == -VAR_0)
   goto bail_ecomm;
  return VAR_18;
 }

 FUNC_15(VAR_6, VAR_7, VAR_13);
 FUNC_12(FUNC_2(VAR_6->ibqp.device),
    &VAR_7->s_txreq->phdr.hdr, FUNC_7(VAR_17));
 return VAR_18;

bail_ecomm:

 return 0;
bail_build:
 VAR_18 = FUNC_16(VAR_14, VAR_6, VAR_7);
 if (!VAR_18) {

  FUNC_6(VAR_7->s_txreq);
  VAR_7->s_txreq = ((void*)0);
 }
 return VAR_18;
}
