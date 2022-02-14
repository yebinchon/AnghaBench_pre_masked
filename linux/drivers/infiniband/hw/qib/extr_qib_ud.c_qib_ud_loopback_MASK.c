
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wc ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_16__ {int imm_data; } ;
struct TYPE_17__ {scalar_t__ opcode; int send_flags; scalar_t__ num_sge; TYPE_7__ ex; } ;
struct rvt_swqe {scalar_t__ length; TYPE_8__ wr; struct rvt_sge* sg_list; } ;
struct rvt_sge {scalar_t__ length; scalar_t__ sge_length; scalar_t__ n; scalar_t__ m; TYPE_3__* mr; struct ib_grh* vaddr; } ;
struct rvt_sge_state {struct rvt_sge* sg_list; scalar_t__ num_sge; struct rvt_sge sge; } ;
struct TYPE_14__ {scalar_t__ qp_type; int qp_num; int device; } ;
struct rvt_qp {size_t state; scalar_t__ qkey; int r_flags; scalar_t__ r_len; int r_lock; int port_num; TYPE_5__ ibqp; int r_wr_id; int r_aflags; int r_sge; int s_pkey_index; } ;
struct rvt_dev_info {int dummy; } ;
struct rdma_ah_attr {int dummy; } ;
struct qib_pportdata {int lid; int lmc; struct qib_devdata* dd; } ;
struct TYPE_18__ {int n_loop_pkts; int n_pkt_drops; int n_vl15_dropped; } ;
struct qib_ibport {TYPE_9__ rvp; } ;
struct TYPE_13__ {struct rvt_dev_info rdi; } ;
struct qib_devdata {TYPE_4__ verbs_dev; } ;
struct TYPE_15__ {int imm_data; } ;
struct ib_wc {scalar_t__ byte_len; int src_qp; int slid; int dlid_path_bits; int port_num; int sl; int pkey_index; TYPE_5__* qp; int opcode; int status; int wr_id; int wc_flags; TYPE_6__ ex; } ;
struct ib_grh {int dummy; } ;
struct ib_global_route {int dummy; } ;
typedef int grh ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_12__ {scalar_t__ mapsz; TYPE_2__** map; scalar_t__ lkey; } ;
struct TYPE_11__ {TYPE_1__* segs; } ;
struct TYPE_10__ {scalar_t__ length; struct ib_grh* vaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int) ;
 int* VAR_14 ;
 int FUNC_1 (struct ib_wc*,int ,int) ;
 struct qib_pportdata* FUNC_2 (struct qib_ibport*) ;
 int FUNC_3 (struct qib_ibport*,int,int ,int,int,int ,int ) ;
 int FUNC_4 (struct qib_ibport*,int ) ;
 int FUNC_5 (struct qib_ibport*,struct ib_grh*,struct ib_global_route const*,int ,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct rdma_ah_attr*) ;
 int FUNC_10 (struct rdma_ah_attr*) ;
 int FUNC_11 (struct rdma_ah_attr*) ;
 int FUNC_12 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_13 (struct rdma_ah_attr*) ;
 int FUNC_14 (struct rvt_qp*,int *,struct ib_grh*,scalar_t__,int,int) ;
 int FUNC_15 (struct rvt_qp*,int) ;
 scalar_t__ FUNC_16 (struct rvt_sge*,scalar_t__) ;
 struct rdma_ah_attr* FUNC_17 (struct rvt_swqe*) ;
 int FUNC_18 (struct rvt_swqe*) ;
 scalar_t__ FUNC_19 (struct rvt_swqe*) ;
 int FUNC_20 (struct rvt_swqe*) ;
 struct rvt_qp* FUNC_21 (struct rvt_dev_info*,TYPE_9__*,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct rvt_qp*,int ) ;
 int FUNC_24 (struct rvt_qp*,struct ib_wc*,int) ;
 int FUNC_25 (int *,int,int) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *,unsigned long) ;
 int FUNC_28 (int ,int *) ;
 struct qib_ibport* FUNC_29 (int ,int ) ;
 scalar_t__ FUNC_30 (int) ;

__attribute__((used)) static void FUNC_31(struct rvt_qp *VAR_15, struct rvt_swqe *VAR_16)
{
 struct qib_ibport *VAR_17 = FUNC_29(VAR_15->ibqp.device, VAR_15->port_num);
 struct qib_pportdata *VAR_18 = FUNC_2(VAR_17);
 struct qib_devdata *VAR_19 = VAR_18->dd;
 struct rvt_dev_info *VAR_20 = &VAR_19->verbs_dev.rdi;
 struct rvt_qp *VAR_21;
 struct rdma_ah_attr *VAR_22;
 unsigned long VAR_23;
 struct rvt_sge_state VAR_24;
 struct rvt_sge *VAR_25;
 struct ib_wc VAR_26;
 u32 VAR_27;
 enum ib_qp_type VAR_28, VAR_29;

 FUNC_7();
 VAR_21 = FUNC_21(VAR_20, &VAR_17->rvp, FUNC_20(VAR_16));
 if (!VAR_21) {
  VAR_17->rvp.n_pkt_drops++;
  goto drop;
 }

 VAR_28 = VAR_15->ibqp.qp_type == VAR_1 ?
   VAR_2 : VAR_15->ibqp.qp_type;
 VAR_29 = VAR_21->ibqp.qp_type == VAR_1 ?
   VAR_2 : VAR_21->ibqp.qp_type;

 if (VAR_29 != VAR_28 ||
     !(VAR_14[VAR_21->state] & VAR_10)) {
  VAR_17->rvp.n_pkt_drops++;
  goto drop;
 }

 VAR_22 = FUNC_17(VAR_16);
 VAR_18 = FUNC_2(VAR_17);

 if (VAR_21->ibqp.qp_num > 1) {
  u16 VAR_30;
  u16 VAR_31;
  u16 VAR_32;

  VAR_30 = FUNC_4(VAR_17, VAR_15->s_pkey_index);
  VAR_31 = FUNC_4(VAR_17, VAR_21->s_pkey_index);
  if (FUNC_30(!FUNC_6(VAR_30, VAR_31))) {
   VAR_32 = VAR_18->lid | (FUNC_11(VAR_22) &
       ((1 << VAR_18->lmc) - 1));
   FUNC_3(VAR_17, VAR_30,
         FUNC_12(VAR_22),
         VAR_15->ibqp.qp_num, VAR_21->ibqp.qp_num,
         FUNC_0(VAR_32),
         FUNC_0(FUNC_10(VAR_22)));
   goto drop;
  }
 }






 if (VAR_21->ibqp.qp_num) {
  u32 VAR_33;

  VAR_33 = (int)FUNC_19(VAR_16) < 0 ?
   VAR_15->qkey : FUNC_19(VAR_16);
  if (FUNC_30(VAR_33 != VAR_21->qkey))
   goto drop;
 }





 VAR_27 = VAR_16->length;
 FUNC_1(&VAR_26, 0, sizeof(VAR_26));
 VAR_26.byte_len = VAR_27 + sizeof(struct ib_grh);

 if (VAR_16->wr.opcode == VAR_9) {
  VAR_26.wc_flags = VAR_8;
  VAR_26.ex.imm_data = VAR_16->wr.ex.imm_data;
 }

 FUNC_26(&VAR_21->r_lock, VAR_23);




 if (VAR_21->r_flags & VAR_11)
  VAR_21->r_flags &= ~VAR_11;
 else {
  int VAR_34;

  VAR_34 = FUNC_15(VAR_21, 0);
  if (VAR_34 < 0) {
   FUNC_23(VAR_21, VAR_5);
   goto bail_unlock;
  }
  if (!VAR_34) {
   if (VAR_21->ibqp.qp_num == 0)
    VAR_17->rvp.n_vl15_dropped++;
   goto bail_unlock;
  }
 }

 if (FUNC_30(VAR_26.byte_len > VAR_21->r_len)) {
  VAR_21->r_flags |= VAR_11;
  VAR_17->rvp.n_pkt_drops++;
  goto bail_unlock;
 }

 if (FUNC_9(VAR_22) & VAR_0) {
  struct ib_grh VAR_35;
  const struct ib_global_route *VAR_36 = FUNC_13(VAR_22);

  FUNC_5(VAR_17, &VAR_35, VAR_36, 0, 0);
  FUNC_14(VAR_21, &VAR_21->r_sge, &VAR_35,
        sizeof(VAR_35), 1, 0);
  VAR_26.wc_flags |= VAR_4;
 } else
  FUNC_25(&VAR_21->r_sge, sizeof(struct ib_grh), 1);
 VAR_24.sg_list = VAR_16->sg_list + 1;
 VAR_24.sge = *VAR_16->sg_list;
 VAR_24.num_sge = VAR_16->wr.num_sge;
 VAR_25 = &VAR_24.sge;
 while (VAR_27) {
  u32 VAR_37 = FUNC_16(VAR_25, VAR_27);

  FUNC_14(VAR_21, &VAR_21->r_sge, VAR_25->vaddr, VAR_37, 1, 0);
  VAR_25->vaddr += VAR_37;
  VAR_25->length -= VAR_37;
  VAR_25->sge_length -= VAR_37;
  if (VAR_25->sge_length == 0) {
   if (--VAR_24.num_sge)
    *VAR_25 = *VAR_24.sg_list++;
  } else if (VAR_25->length == 0 && VAR_25->mr->lkey) {
   if (++VAR_25->n >= VAR_13) {
    if (++VAR_25->m >= VAR_25->mr->mapsz)
     break;
    VAR_25->n = 0;
   }
   VAR_25->vaddr =
    VAR_25->mr->map[VAR_25->m]->segs[VAR_25->n].vaddr;
   VAR_25->length =
    VAR_25->mr->map[VAR_25->m]->segs[VAR_25->n].length;
  }
  VAR_27 -= VAR_37;
 }
 FUNC_22(&VAR_21->r_sge);
 if (!FUNC_28(VAR_12, &VAR_21->r_aflags))
  goto bail_unlock;
 VAR_26.wr_id = VAR_21->r_wr_id;
 VAR_26.status = VAR_7;
 VAR_26.opcode = VAR_6;
 VAR_26.qp = &VAR_21->ibqp;
 VAR_26.src_qp = VAR_15->ibqp.qp_num;
 VAR_26.pkey_index = VAR_21->ibqp.qp_type == VAR_1 ?
  FUNC_18(VAR_16) : 0;
 VAR_26.slid = VAR_18->lid | (FUNC_11(VAR_22) &
    ((1 << VAR_18->lmc) - 1));
 VAR_26.sl = FUNC_12(VAR_22);
 VAR_26.dlid_path_bits = FUNC_10(VAR_22) & ((1 << VAR_18->lmc) - 1);
 VAR_26.port_num = VAR_21->port_num;

 FUNC_24(VAR_21, &VAR_26, VAR_16->wr.send_flags & VAR_3);
 VAR_17->rvp.n_loop_pkts++;
bail_unlock:
 FUNC_27(&VAR_21->r_lock, VAR_23);
drop:
 FUNC_8();
}
