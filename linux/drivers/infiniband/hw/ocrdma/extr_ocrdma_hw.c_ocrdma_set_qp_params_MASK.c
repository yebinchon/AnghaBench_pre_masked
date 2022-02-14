
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int device; } ;
struct ocrdma_qp {scalar_t__ qp_type; scalar_t__ max_ord; scalar_t__ max_ird; int qkey; TYPE_1__ ibqp; } ;
struct TYPE_8__ {int path_mtu_pkey_indx; int dmac_b0_to_b3; int vlan_dmac_b4_to_b5; int ack_to_rnr_rtc_dest_qpn; int rnt_rc_sl_fl; int tclass_sq_psn; int hop_lmt_rq_psn; int max_ord_ird; int max_sge_recv_flags; int qkey; } ;
struct ocrdma_modify_qp {TYPE_4__ params; int flags; } ;
struct TYPE_7__ {scalar_t__ max_ord_per_qp; scalar_t__ max_ird_per_qp; } ;
struct TYPE_6__ {int* mac_addr; } ;
struct ocrdma_dev {TYPE_3__ attr; int id; TYPE_2__ nic_info; } ;
struct ib_qp_attr {int pkey_index; int dest_qp_num; scalar_t__ path_mtu; int timeout; int retry_cnt; int min_rnr_timer; int rnr_retry; int sq_psn; int rq_psn; scalar_t__ max_rd_atomic; scalar_t__ max_dest_rd_atomic; scalar_t__ en_sqd_async_notify; int qkey; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 struct ocrdma_dev* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ocrdma_qp*,struct ocrdma_modify_qp*,struct ib_qp_attr*,int) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_qp *VAR_45,
    struct ocrdma_modify_qp *VAR_46,
    struct ib_qp_attr *VAR_47, int VAR_48)
{
 int VAR_49 = 0;
 struct ocrdma_dev *VAR_50 = FUNC_0(VAR_45->ibqp.device);

 if (VAR_48 & VAR_12) {
  VAR_46->params.path_mtu_pkey_indx |= (VAR_47->pkey_index &
         VAR_26);
  VAR_46->flags |= VAR_37;
 }
 if (VAR_48 & VAR_13) {
  VAR_45->qkey = VAR_47->qkey;
  VAR_46->params.qkey = VAR_47->qkey;
  VAR_46->flags |= VAR_39;
 }
 if (VAR_48 & VAR_5) {
  VAR_49 = FUNC_2(VAR_45, VAR_46, VAR_47, VAR_48);
  if (VAR_49)
   return VAR_49;
 } else if (VAR_45->qp_type == VAR_3 || VAR_45->qp_type == VAR_4) {

  VAR_46->params.dmac_b0_to_b3 = VAR_50->nic_info.mac_addr[0] |
   (VAR_50->nic_info.mac_addr[1] << 8) |
   (VAR_50->nic_info.mac_addr[2] << 16) |
   (VAR_50->nic_info.mac_addr[3] << 24);
  VAR_46->params.vlan_dmac_b4_to_b5 = VAR_50->nic_info.mac_addr[4] |
     (VAR_50->nic_info.mac_addr[5] << 8);
 }
 if ((VAR_48 & VAR_7) &&
     VAR_47->en_sqd_async_notify) {
  VAR_46->params.max_sge_recv_flags |=
   VAR_21;
  VAR_46->flags |= VAR_34;
 }
 if (VAR_48 & VAR_6) {
  VAR_46->params.ack_to_rnr_rtc_dest_qpn |= (VAR_47->dest_qp_num &
    VAR_20);
  VAR_46->flags |= VAR_34;
 }
 if (VAR_48 & VAR_11) {
  if (VAR_47->path_mtu < VAR_2 ||
      VAR_47->path_mtu > VAR_1) {
   FUNC_3("ocrdma%d: IB MTU %d is not supported\n",
          VAR_50->id, FUNC_1(VAR_47->path_mtu));
   VAR_49 = -VAR_0;
   goto pmtu_err;
  }
  VAR_46->params.path_mtu_pkey_indx |=
      (FUNC_1(VAR_47->path_mtu) <<
       VAR_25) &
      VAR_24;
  VAR_46->flags |= VAR_38;
 }
 if (VAR_48 & VAR_18) {
  VAR_46->params.ack_to_rnr_rtc_dest_qpn |= VAR_47->timeout <<
      VAR_19;
  VAR_46->flags |= VAR_33;
 }
 if (VAR_48 & VAR_14) {
  VAR_46->params.rnt_rc_sl_fl |= (VAR_47->retry_cnt <<
          VAR_28) &
      VAR_27;
  VAR_46->flags |= VAR_40;
 }
 if (VAR_48 & VAR_10) {
  VAR_46->params.rnt_rc_sl_fl |= (VAR_47->min_rnr_timer <<
          VAR_30) &
      VAR_29;
  VAR_46->flags |= VAR_41;
 }
 if (VAR_48 & VAR_15) {
  VAR_46->params.ack_to_rnr_rtc_dest_qpn |= (VAR_47->rnr_retry <<
   VAR_32)
   & VAR_31;
  VAR_46->flags |= VAR_43;
 }
 if (VAR_48 & VAR_17) {
  VAR_46->params.tclass_sq_psn |= (VAR_47->sq_psn & 0x00ffffff);
  VAR_46->flags |= VAR_44;
 }
 if (VAR_48 & VAR_16) {
  VAR_46->params.hop_lmt_rq_psn |= (VAR_47->rq_psn & 0x00ffffff);
  VAR_46->flags |= VAR_42;
 }
 if (VAR_48 & VAR_9) {
  if (VAR_47->max_rd_atomic > VAR_50->attr.max_ord_per_qp) {
   VAR_49 = -VAR_0;
   goto pmtu_err;
  }
  VAR_45->max_ord = VAR_47->max_rd_atomic;
  VAR_46->flags |= VAR_36;
 }
 if (VAR_48 & VAR_8) {
  if (VAR_47->max_dest_rd_atomic > VAR_50->attr.max_ird_per_qp) {
   VAR_49 = -VAR_0;
   goto pmtu_err;
  }
  VAR_45->max_ird = VAR_47->max_dest_rd_atomic;
  VAR_46->flags |= VAR_35;
 }
 VAR_46->params.max_ord_ird = (VAR_45->max_ord <<
    VAR_23) |
    (VAR_45->max_ird & VAR_22);
pmtu_err:
 return VAR_49;
}
