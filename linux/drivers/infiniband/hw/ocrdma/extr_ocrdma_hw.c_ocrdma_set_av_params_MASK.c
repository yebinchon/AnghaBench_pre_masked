
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sockaddr_in6 {int dummy; } ;
struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {struct ib_gid_attr* sgid_attr; } ;
struct rdma_ah_attr {TYPE_2__ grh; } ;
struct TYPE_6__ {int device; } ;
struct ocrdma_qp {int sgid_idx; TYPE_1__ ibqp; } ;
struct TYPE_9__ {int tclass_sq_psn; int rnt_rc_sl_fl; int hop_lmt_rq_psn; int dmac_b0_to_b3; int vlan_dmac_b4_to_b5; int max_sge_recv_flags; int * sgid; int * dgid; } ;
struct ocrdma_modify_qp {TYPE_4__ params; int flags; } ;
struct ocrdma_dev {int sl; int id; scalar_t__ pfc_state; int update_sl; } ;
struct ib_qp_attr {struct rdma_ah_attr ah_attr; } ;
struct TYPE_10__ {int * raw; } ;
struct ib_global_route {int traffic_class; int flow_label; int hop_limit; TYPE_5__ dgid; int sgid_index; } ;
struct ib_gid_attr {TYPE_5__ gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct ocrdma_dev*) ;
 int FUNC_5 (struct ocrdma_dev*,struct rdma_ah_attr*,int*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct rdma_ah_attr*) ;
 int FUNC_8 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_9 (struct rdma_ah_attr*) ;
 int FUNC_10 (struct sockaddr*,TYPE_5__*) ;
 int FUNC_11 (struct ib_gid_attr const*) ;
 int FUNC_12 (struct ib_gid_attr const*,int*,int*) ;

__attribute__((used)) static int FUNC_13(struct ocrdma_qp *VAR_12,
    struct ocrdma_modify_qp *VAR_13,
    struct ib_qp_attr *VAR_14,
    int VAR_15)
{
 int VAR_16;
 struct rdma_ah_attr *VAR_17 = &VAR_14->ah_attr;
 const struct ib_gid_attr *VAR_18;
 u16 VAR_19 = 0xFFFF;
 u8 VAR_20[6], VAR_21;
 union {
  struct sockaddr_in _sockaddr_in;
  struct sockaddr_in6 _sockaddr_in6;
 } VAR_22, VAR_23;
 struct ocrdma_dev *VAR_24 = FUNC_1(VAR_12->ibqp.device);
 const struct ib_global_route *VAR_25;

 if ((FUNC_7(VAR_17) & VAR_1) == 0)
  return -VAR_0;
 VAR_25 = FUNC_9(VAR_17);
 if (FUNC_0(&VAR_24->update_sl, 1, 0))
  FUNC_4(VAR_24);
 VAR_13->params.tclass_sq_psn |=
     (VAR_25->traffic_class << VAR_7);
 VAR_13->params.rnt_rc_sl_fl |=
     (VAR_25->flow_label & VAR_4);
 VAR_13->params.rnt_rc_sl_fl |= (FUNC_8(VAR_17) <<
         VAR_6);
 VAR_13->params.hop_lmt_rq_psn |=
     (VAR_25->hop_limit << VAR_5);
 VAR_13->flags |= VAR_9;


 FUNC_2(&VAR_13->params.dgid[0], &VAR_25->dgid.raw[0],
        sizeof(VAR_13->params.dgid));

 VAR_18 = VAR_17->grh.sgid_attr;
 VAR_16 = FUNC_12(VAR_18, &VAR_19, &VAR_20[0]);
 if (VAR_16)
  return VAR_16;

 VAR_12->sgid_idx = VAR_25->sgid_index;
 FUNC_2(&VAR_13->params.sgid[0], &VAR_18->gid.raw[0],
        sizeof(VAR_13->params.sgid));
 VAR_16 = FUNC_5(VAR_24, VAR_17, &VAR_20[0]);
 if (VAR_16)
  return VAR_16;

 VAR_13->params.dmac_b0_to_b3 = VAR_20[0] | (VAR_20[1] << 8) |
    (VAR_20[2] << 16) | (VAR_20[3] << 24);

 VAR_21 = FUNC_11(VAR_18);
 if (VAR_21 == VAR_11) {
  FUNC_10((struct sockaddr *)&VAR_22, &VAR_18->gid);
  FUNC_10((struct sockaddr *)&VAR_23, &VAR_25->dgid);
  FUNC_2(&VAR_13->params.dgid[0],
         &VAR_23._sockaddr_in.sin_addr.s_addr, 4);
  FUNC_2(&VAR_13->params.sgid[0],
         &VAR_22._sockaddr_in.sin_addr.s_addr, 4);
 }

 FUNC_3(&VAR_13->params.dgid[0], sizeof(VAR_13->params.dgid));
 FUNC_3(&VAR_13->params.sgid[0], sizeof(VAR_13->params.sgid));
 VAR_13->params.vlan_dmac_b4_to_b5 = VAR_20[4] | (VAR_20[5] << 8);

 if (VAR_19 == 0xFFFF)
  VAR_19 = 0;
 if (VAR_19 || VAR_24->pfc_state) {
  if (!VAR_19) {
   FUNC_6("ocrdma%d:Using VLAN with PFC is recommended\n",
          VAR_24->id);
   FUNC_6("ocrdma%d:Using VLAN 0 for this connection\n",
          VAR_24->id);
  }
  VAR_13->params.vlan_dmac_b4_to_b5 |=
      VAR_19 << VAR_8;
  VAR_13->flags |= VAR_10;
  VAR_13->params.rnt_rc_sl_fl |=
   (VAR_24->sl & 0x07) << VAR_6;
 }
 VAR_13->params.max_sge_recv_flags |= ((VAR_21 <<
     VAR_3) &
     VAR_2);
 return 0;
}
