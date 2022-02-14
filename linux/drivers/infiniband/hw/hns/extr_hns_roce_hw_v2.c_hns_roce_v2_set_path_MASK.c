
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct TYPE_8__ {struct ib_gid_attr* sgid_attr; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_1__ grh; } ;
struct ib_qp_attr {size_t port_num; TYPE_5__ ah_attr; } ;
struct ib_qp {int device; } ;
struct TYPE_11__ {int raw; } ;
struct ib_global_route {int sgid_index; int hop_limit; int traffic_class; int flow_label; TYPE_4__ dgid; } ;
struct ib_gid_attr {scalar_t__ gid_type; } ;
struct hns_roce_v2_qp_context {int byte_28_at_fl; int dgid; int byte_24_mtu_tc; int byte_20_smac_sgid_idx; int byte_52_udpspn_dmac; int byte_168_irrl_idx; int byte_76_srqn_op_en; } ;
struct hns_roce_qp {size_t port; int sl; } ;
struct TYPE_9__ {int* gid_table_len; } ;
struct hns_roce_dev {TYPE_3__* pci_dev; int dev; TYPE_2__ caps; int ib_dev; } ;
struct TYPE_10__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
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
 scalar_t__ VAR_21 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 struct ib_global_route* FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (int *,size_t) ;
 int FUNC_7 (struct ib_gid_attr const*,scalar_t__*,int *) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,int) ;
 struct hns_roce_dev* FUNC_10 (int ) ;
 struct hns_roce_qp* FUNC_11 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_12(struct ib_qp *VAR_22,
    const struct ib_qp_attr *VAR_23,
    int VAR_24,
    struct hns_roce_v2_qp_context *VAR_25,
    struct hns_roce_v2_qp_context *VAR_26)
{
 const struct ib_global_route *VAR_27 = FUNC_5(&VAR_23->ah_attr);
 struct hns_roce_dev *VAR_28 = FUNC_10(VAR_22->device);
 struct hns_roce_qp *VAR_29 = FUNC_11(VAR_22);
 const struct ib_gid_attr *VAR_30 = ((void*)0);
 int VAR_31;
 bool VAR_32 = 0;
 u16 VAR_33 = 0xffff;
 u8 VAR_34;
 u8 VAR_35;
 int VAR_36;

 VAR_34 = (VAR_24 & VAR_3) ? VAR_23->port_num : VAR_29->port + 1;
 VAR_35 = VAR_34 - 1;
 VAR_31 = FUNC_6(&VAR_28->ib_dev, VAR_34) &&
      FUNC_3(&VAR_23->ah_attr) & VAR_1;

 if (VAR_31) {
  VAR_30 = VAR_23->ah_attr.grh.sgid_attr;
  VAR_36 = FUNC_7(VAR_30, &VAR_33, ((void*)0));
  if (VAR_36)
   return VAR_36;

  if (VAR_30)
   VAR_32 = (VAR_30->gid_type ==
     VAR_2);
 }

 if (VAR_33 < VAR_21) {
  FUNC_8(VAR_25->byte_76_srqn_op_en,
        VAR_20, 1);
  FUNC_8(VAR_26->byte_76_srqn_op_en,
        VAR_20, 0);
  FUNC_8(VAR_25->byte_168_irrl_idx,
        VAR_5, 1);
  FUNC_8(VAR_26->byte_168_irrl_idx,
        VAR_5, 0);
 }

 FUNC_9(VAR_25->byte_24_mtu_tc, VAR_12,
         VAR_13, VAR_33);
 FUNC_9(VAR_26->byte_24_mtu_tc, VAR_12,
         VAR_13, 0);

 if (VAR_27->sgid_index >= VAR_28->caps.gid_table_len[VAR_35]) {
  FUNC_0(VAR_28->dev, "sgid_index(%u) too large. max is %d\n",
   VAR_27->sgid_index, VAR_28->caps.gid_table_len[VAR_35]);
  return -VAR_0;
 }

 if (VAR_23->ah_attr.type != VAR_4) {
  FUNC_0(VAR_28->dev, "ah attr is not RDMA roce type\n");
  return -VAR_0;
 }

 FUNC_9(VAR_25->byte_52_udpspn_dmac, VAR_18,
         VAR_19,
         VAR_32 ? 0x12b7 : 0);

 FUNC_9(VAR_26->byte_52_udpspn_dmac, VAR_18,
         VAR_19, 0);

 FUNC_9(VAR_25->byte_20_smac_sgid_idx,
         VAR_6, VAR_7,
         VAR_27->sgid_index);

 FUNC_9(VAR_26->byte_20_smac_sgid_idx,
         VAR_6, VAR_7, 0);

 FUNC_9(VAR_25->byte_24_mtu_tc, VAR_8,
         VAR_9, VAR_27->hop_limit);
 FUNC_9(VAR_26->byte_24_mtu_tc, VAR_8,
         VAR_9, 0);

 if (VAR_28->pci_dev->revision == 0x21 && VAR_32)
  FUNC_9(VAR_25->byte_24_mtu_tc, VAR_10,
          VAR_11, VAR_27->traffic_class >> 2);
 else
  FUNC_9(VAR_25->byte_24_mtu_tc, VAR_10,
          VAR_11, VAR_27->traffic_class);
 FUNC_9(VAR_26->byte_24_mtu_tc, VAR_10,
         VAR_11, 0);
 FUNC_9(VAR_25->byte_28_at_fl, VAR_14,
         VAR_15, VAR_27->flow_label);
 FUNC_9(VAR_26->byte_28_at_fl, VAR_14,
         VAR_15, 0);
 FUNC_1(VAR_25->dgid, VAR_27->dgid.raw, sizeof(VAR_27->dgid.raw));
 FUNC_2(VAR_26->dgid, 0, sizeof(VAR_27->dgid.raw));
 FUNC_9(VAR_25->byte_28_at_fl, VAR_16,
         VAR_17, FUNC_4(&VAR_23->ah_attr));
 FUNC_9(VAR_26->byte_28_at_fl, VAR_16,
         VAR_17, 0);
 VAR_29->sl = FUNC_4(&VAR_23->ah_attr);

 return 0;
}
