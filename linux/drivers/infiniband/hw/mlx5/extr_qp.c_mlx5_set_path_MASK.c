
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


typedef int u8 ;
typedef int u32 ;
struct TYPE_12__ {TYPE_9__* sgid_attr; } ;
struct TYPE_11__ {int dmac; } ;
struct rdma_ah_attr {scalar_t__ type; TYPE_3__ grh; TYPE_2__ roce; } ;
struct mlx5_qp_path {int dci_cfi_prio_sl; int ecn_dscp; int fl_free_ar; int grh_mlid; int static_rate; int port; int ackto_lt; int rgid; int tclass_flowlabel; int hop_limit; scalar_t__ mgid_index; void* rlid; int udp_sport; int rmac; void* pkey_index; } ;
struct TYPE_16__ {scalar_t__ qp_type; int pd; } ;
struct TYPE_15__ {int sq; } ;
struct TYPE_14__ {scalar_t__ wqe_cnt; } ;
struct mlx5_ib_qp {TYPE_7__ ibqp; TYPE_6__ raw_packet_qp; TYPE_5__ sq; } ;
struct mlx5_ib_dev {TYPE_8__* mdev; } ;
struct ib_qp_attr {int alt_timeout; int timeout; int pkey_index; int alt_pkey_index; } ;
struct TYPE_13__ {int raw; } ;
struct ib_global_route {int traffic_class; int flow_label; TYPE_4__ dgid; int hop_limit; scalar_t__ sgid_index; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_18__ {int gid_type; } ;
struct TYPE_17__ {TYPE_1__* port_caps; } ;
struct TYPE_10__ {scalar_t__ gid_table_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx5_ib_dev*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct mlx5_ib_dev*,TYPE_9__*) ;
 int FUNC_5 (TYPE_8__*,int *,int,int ) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct rdma_ah_attr const*) ;
 int FUNC_8 (struct rdma_ah_attr const*) ;
 int FUNC_9 (struct rdma_ah_attr const*) ;
 int FUNC_10 (struct rdma_ah_attr const*) ;
 int FUNC_11 (struct rdma_ah_attr const*) ;
 struct ib_global_route* FUNC_12 (struct rdma_ah_attr const*) ;

__attribute__((used)) static int FUNC_13(struct mlx5_ib_dev *VAR_13, struct mlx5_ib_qp *VAR_14,
    const struct rdma_ah_attr *VAR_15,
    struct mlx5_qp_path *VAR_16, u8 VAR_17, int VAR_18,
    u32 VAR_19, const struct ib_qp_attr *VAR_20,
    bool VAR_21)
{
 const struct ib_global_route *VAR_22 = FUNC_12(VAR_15);
 int VAR_23;
 enum ib_gid_type VAR_24;
 u8 VAR_25 = FUNC_7(VAR_15);
 u8 VAR_26 = FUNC_10(VAR_15);

 if (VAR_18 & VAR_8)
  VAR_16->pkey_index = FUNC_0(VAR_21 ? VAR_20->alt_pkey_index :
           VAR_20->pkey_index);

 if (VAR_25 & VAR_1) {
  if (VAR_22->sgid_index >=
      VAR_13->mdev->port_caps[VAR_17 - 1].gid_table_len) {
   FUNC_6("sgid_index (%u) too large. max is %d\n",
          VAR_22->sgid_index,
          VAR_13->mdev->port_caps[VAR_17 - 1].gid_table_len);
   return -VAR_0;
  }
 }

 if (VAR_15->type == VAR_12) {
  if (!(VAR_25 & VAR_1))
   return -VAR_0;

  FUNC_3(VAR_16->rmac, VAR_15->roce.dmac, sizeof(VAR_15->roce.dmac));
  if (VAR_14->ibqp.qp_type == VAR_4 ||
      VAR_14->ibqp.qp_type == VAR_5 ||
      VAR_14->ibqp.qp_type == VAR_6 ||
      VAR_14->ibqp.qp_type == VAR_7)
   VAR_16->udp_sport =
    FUNC_4(VAR_13, VAR_15->grh.sgid_attr);
  VAR_16->dci_cfi_prio_sl = (VAR_26 & 0x7) << 4;
  VAR_24 = VAR_15->grh.sgid_attr->gid_type;
  if (VAR_24 == VAR_2)
   VAR_16->ecn_dscp = (VAR_22->traffic_class >> 2) & 0x3f;
 } else {
  VAR_16->fl_free_ar = (VAR_19 & VAR_10) ? 0x80 : 0;
  VAR_16->fl_free_ar |=
   (VAR_19 & VAR_11) ? 0x40 : 0;
  VAR_16->rlid = FUNC_0(FUNC_8(VAR_15));
  VAR_16->grh_mlid = FUNC_9(VAR_15) & 0x7f;
  if (VAR_25 & VAR_1)
   VAR_16->grh_mlid |= 1 << 7;
  VAR_16->dci_cfi_prio_sl = VAR_26 & 0xf;
 }

 if (VAR_25 & VAR_1) {
  VAR_16->mgid_index = VAR_22->sgid_index;
  VAR_16->hop_limit = VAR_22->hop_limit;
  VAR_16->tclass_flowlabel =
   FUNC_1((VAR_22->traffic_class << 20) |
        (VAR_22->flow_label));
  FUNC_3(VAR_16->rgid, VAR_22->dgid.raw, 16);
 }

 VAR_23 = FUNC_2(VAR_13, FUNC_11(VAR_15));
 if (VAR_23 < 0)
  return VAR_23;
 VAR_16->static_rate = VAR_23;
 VAR_16->port = VAR_17;

 if (VAR_18 & VAR_9)
  VAR_16->ackto_lt = (VAR_21 ? VAR_20->alt_timeout : VAR_20->timeout) << 3;

 if ((VAR_14->ibqp.qp_type == VAR_3) && VAR_14->sq.wqe_cnt)
  return FUNC_5(VAR_13->mdev,
        &VAR_14->raw_packet_qp.sq,
        VAR_26 & 0xf, VAR_14->ibqp.pd);

 return 0;
}
