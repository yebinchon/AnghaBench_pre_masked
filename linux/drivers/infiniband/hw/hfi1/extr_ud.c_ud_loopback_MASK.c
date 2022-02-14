
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wc ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_11__ {int imm_data; } ;
struct TYPE_12__ {scalar_t__ opcode; int send_flags; int num_sge; TYPE_4__ ex; } ;
struct rvt_swqe {scalar_t__ length; TYPE_5__ wr; struct rvt_sge* sg_list; } ;
struct rvt_sge {struct ib_grh* vaddr; } ;
struct rvt_sge_state {struct rvt_sge sge; int num_sge; struct rvt_sge* sg_list; } ;
struct TYPE_9__ {scalar_t__ qp_type; int qp_num; int device; } ;
struct rvt_qp {size_t state; scalar_t__ qkey; int r_flags; scalar_t__ r_len; int r_lock; int port_num; TYPE_2__ ibqp; scalar_t__ s_pkey_index; int r_wr_id; int r_aflags; int r_sge; struct hfi1_qp_priv* priv; } ;
struct rdma_ah_attr {int dummy; } ;
struct TYPE_10__ {int imm_data; } ;
struct ib_wc {scalar_t__ byte_len; int src_qp; int slid; size_t sl; int dlid_path_bits; int port_num; scalar_t__ pkey_index; TYPE_2__* qp; int opcode; int status; int wr_id; int wc_flags; TYPE_3__ ex; } ;
struct ib_grh {int dummy; } ;
struct TYPE_8__ {int interface_id; } ;
struct TYPE_14__ {TYPE_1__ global; } ;
struct ib_global_route {scalar_t__ sgid_index; TYPE_7__ dgid; } ;
struct hfi1_qp_priv {scalar_t__ hdr_type; } ;
struct hfi1_pportdata {int lid; int lmc; int * guids; } ;
struct TYPE_13__ {int n_loop_pkts; int n_pkt_drops; int n_vl15_dropped; } ;
struct hfi1_ibport {TYPE_6__ rvp; int * sl_to_sc; } ;
typedef int grh ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hfi1_ibport*,int ,size_t,int,int,scalar_t__,int) ;
 int FUNC_4 (struct hfi1_ibport*,scalar_t__) ;
 int FUNC_5 (struct hfi1_ibport*,struct ib_grh*,struct ib_global_route*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_7__*) ;
 int* VAR_19 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct hfi1_pportdata*,int ,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (struct ib_wc*,int ,int) ;
 struct hfi1_pportdata* FUNC_10 (struct hfi1_ibport*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct rdma_ah_attr*) ;
 int FUNC_14 (struct rdma_ah_attr*) ;
 int FUNC_15 (struct rdma_ah_attr*) ;
 size_t FUNC_16 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_17 (struct rdma_ah_attr*) ;
 int FUNC_18 (struct rvt_qp*,int *,struct ib_grh*,scalar_t__,int,int) ;
 int FUNC_19 (struct rvt_qp*,int) ;
 scalar_t__ FUNC_20 (struct rvt_sge*,scalar_t__) ;
 struct rdma_ah_attr* FUNC_21 (struct rvt_swqe*) ;
 scalar_t__ FUNC_22 (struct rvt_swqe*) ;
 scalar_t__ FUNC_23 (struct rvt_swqe*) ;
 int FUNC_24 (struct rvt_swqe*) ;
 struct rvt_qp* FUNC_25 (int ,TYPE_6__*,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct rvt_qp*,int ) ;
 int FUNC_28 (struct rvt_qp*,struct ib_wc*,int) ;
 int FUNC_29 (int *,int,int) ;
 int FUNC_30 (struct rvt_sge_state*,scalar_t__,int) ;
 int FUNC_31 (int *,unsigned long) ;
 int FUNC_32 (int *,unsigned long) ;
 int FUNC_33 (int ,int *) ;
 struct hfi1_ibport* FUNC_34 (int ,int ) ;
 scalar_t__ FUNC_35 (int) ;

__attribute__((used)) static void FUNC_36(struct rvt_qp *VAR_20, struct rvt_swqe *VAR_21)
{
 struct hfi1_ibport *VAR_22 = FUNC_34(VAR_20->ibqp.device, VAR_20->port_num);
 struct hfi1_pportdata *VAR_23;
 struct hfi1_qp_priv *VAR_24 = VAR_20->priv;
 struct rvt_qp *VAR_25;
 struct rdma_ah_attr *VAR_26;
 unsigned long VAR_27;
 struct rvt_sge_state VAR_28;
 struct rvt_sge *VAR_29;
 struct ib_wc VAR_30;
 u32 VAR_31;
 enum ib_qp_type VAR_32, VAR_33;

 FUNC_11();

 VAR_25 = FUNC_25(FUNC_7(VAR_20->ibqp.device), &VAR_22->rvp,
       FUNC_24(VAR_21));
 if (!VAR_25) {
  VAR_22->rvp.n_pkt_drops++;
  FUNC_12();
  return;
 }

 VAR_32 = VAR_20->ibqp.qp_type == VAR_4 ?
   VAR_6 : VAR_20->ibqp.qp_type;
 VAR_33 = VAR_25->ibqp.qp_type == VAR_4 ?
   VAR_6 : VAR_25->ibqp.qp_type;

 if (VAR_33 != VAR_32 ||
     !(VAR_19[VAR_25->state] & VAR_15)) {
  VAR_22->rvp.n_pkt_drops++;
  goto drop;
 }

 VAR_26 = FUNC_21(VAR_21);
 VAR_23 = FUNC_10(VAR_22);

 if (VAR_25->ibqp.qp_num > 1) {
  u16 VAR_34;
  u32 VAR_35;
  u8 VAR_36 = VAR_22->sl_to_sc[FUNC_16(VAR_26)];

  VAR_34 = FUNC_4(VAR_22, VAR_20->s_pkey_index);
  VAR_35 = VAR_23->lid | (FUNC_15(VAR_26) &
       ((1 << VAR_23->lmc) - 1));
  if (FUNC_35(FUNC_8(VAR_23, VAR_34, VAR_36,
      VAR_25->s_pkey_index,
      VAR_35, 0))) {
   FUNC_3(VAR_22, VAR_34,
          FUNC_16(VAR_26),
          VAR_20->ibqp.qp_num, VAR_25->ibqp.qp_num,
          VAR_35, FUNC_14(VAR_26));
   goto drop;
  }
 }






 if (VAR_25->ibqp.qp_num) {
  u32 VAR_37;

  VAR_37 = (int)FUNC_23(VAR_21) < 0 ?
   VAR_20->qkey : FUNC_23(VAR_21);
  if (FUNC_35(VAR_37 != VAR_25->qkey))
   goto drop;
 }





 VAR_31 = VAR_21->length;
 FUNC_9(&VAR_30, 0, sizeof(VAR_30));
 VAR_30.byte_len = VAR_31 + sizeof(struct ib_grh);

 if (VAR_21->wr.opcode == VAR_13) {
  VAR_30.wc_flags = VAR_12;
  VAR_30.ex.imm_data = VAR_21->wr.ex.imm_data;
 }

 FUNC_31(&VAR_25->r_lock, VAR_27);




 if (VAR_25->r_flags & VAR_16) {
  VAR_25->r_flags &= ~VAR_16;
 } else {
  int VAR_38;

  VAR_38 = FUNC_19(VAR_25, 0);
  if (VAR_38 < 0) {
   FUNC_27(VAR_25, VAR_9);
   goto bail_unlock;
  }
  if (!VAR_38) {
   if (VAR_25->ibqp.qp_num == 0)
    VAR_22->rvp.n_vl15_dropped++;
   goto bail_unlock;
  }
 }

 if (FUNC_35(VAR_30.byte_len > VAR_25->r_len)) {
  VAR_25->r_flags |= VAR_16;
  VAR_22->rvp.n_pkt_drops++;
  goto bail_unlock;
 }

 if (FUNC_13(VAR_26) & VAR_2) {
  struct ib_grh VAR_39;
  struct ib_global_route VAR_40 = *(FUNC_17(VAR_26));
  if (VAR_24->hdr_type == VAR_0) {
   if (VAR_40.sgid_index == 0)
    VAR_40.sgid_index = VAR_14;

   if (FUNC_6(&VAR_40.dgid))
    VAR_40.dgid.global.interface_id =
    FUNC_2(VAR_23->guids[VAR_1]);
  }

  FUNC_5(VAR_22, &VAR_39, &VAR_40, 0, 0);
  FUNC_18(VAR_25, &VAR_25->r_sge, &VAR_39,
        sizeof(VAR_39), 1, 0);
  VAR_30.wc_flags |= VAR_8;
 } else {
  FUNC_29(&VAR_25->r_sge, sizeof(struct ib_grh), 1);
 }
 VAR_28.sg_list = VAR_21->sg_list + 1;
 VAR_28.sge = *VAR_21->sg_list;
 VAR_28.num_sge = VAR_21->wr.num_sge;
 VAR_29 = &VAR_28.sge;
 while (VAR_31) {
  u32 VAR_41 = FUNC_20(VAR_29, VAR_31);

  FUNC_0(VAR_41 == 0);
  FUNC_18(VAR_25, &VAR_25->r_sge, VAR_29->vaddr, VAR_41, 1, 0);
  FUNC_30(&VAR_28, VAR_41, 0);
  VAR_31 -= VAR_41;
 }
 FUNC_26(&VAR_25->r_sge);
 if (!FUNC_33(VAR_17, &VAR_25->r_aflags))
  goto bail_unlock;
 VAR_30.wr_id = VAR_25->r_wr_id;
 VAR_30.status = VAR_11;
 VAR_30.opcode = VAR_10;
 VAR_30.qp = &VAR_25->ibqp;
 VAR_30.src_qp = VAR_20->ibqp.qp_num;
 if (VAR_25->ibqp.qp_type == VAR_4 || VAR_25->ibqp.qp_type == VAR_5) {
  if (VAR_20->ibqp.qp_type == VAR_4 ||
      VAR_20->ibqp.qp_type == VAR_5)
   VAR_30.pkey_index = FUNC_22(VAR_21);
  else
   VAR_30.pkey_index = VAR_20->s_pkey_index;
 } else {
  VAR_30.pkey_index = 0;
 }
 VAR_30.slid = (VAR_23->lid | (FUNC_15(VAR_26) &
       ((1 << VAR_23->lmc) - 1))) & VAR_18;

 if (VAR_30.slid == 0 && VAR_20->ibqp.qp_type == VAR_4)
  VAR_30.slid = FUNC_1(VAR_3);
 VAR_30.sl = FUNC_16(VAR_26);
 VAR_30.dlid_path_bits = FUNC_14(VAR_26) & ((1 << VAR_23->lmc) - 1);
 VAR_30.port_num = VAR_25->port_num;

 FUNC_28(VAR_25, &VAR_30, VAR_21->wr.send_flags & VAR_7);
 VAR_22->rvp.n_loop_pkts++;
bail_unlock:
 FUNC_32(&VAR_25->r_lock, VAR_27);
drop:
 FUNC_12();
}
