
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_flow_spec {int type; int size; } ;
typedef int u64 ;
typedef int u16 ;
struct mlx4_net_trans_rule_hw_ctrl {int qpn; int port; scalar_t__ type; int prio; } ;
struct mlx4_ib_dev {int dev; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_net_trans_rule_hw_ctrl* buf; } ;
struct ib_qp {int qp_num; int device; } ;
struct ib_flow_attr {int const priority; int num_of_specs; int port; } ;
struct _rule_hw {int dummy; } ;
typedef enum mlx4_net_trans_promisc_mode { ____Placeholder_mlx4_net_trans_promisc_mode } mlx4_net_trans_promisc_mode ;
typedef enum ib_flow_spec_type { ____Placeholder_ib_flow_spec_type } ib_flow_spec_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (struct mlx4_ib_dev*,struct ib_qp*,scalar_t__,struct mlx4_net_trans_rule_hw_ctrl*) ;
 int FUNC_3 (struct ib_qp*,struct ib_flow_attr*) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_10 ;
 struct mlx4_cmd_mailbox* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int,int ,int ,int ,int ) ;
 int FUNC_8 (int ,struct mlx4_cmd_mailbox*) ;
 int FUNC_9 (struct mlx4_net_trans_rule_hw_ctrl*,struct _rule_hw*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ,void*,struct mlx4_net_trans_rule_hw_ctrl*) ;
 int FUNC_13 (char*,...) ;
 struct mlx4_ib_dev* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct ib_qp *VAR_11, struct ib_flow_attr *VAR_12,
     int VAR_13,
     enum mlx4_net_trans_promisc_mode VAR_14,
     u64 *VAR_15)
{
 int VAR_16, VAR_17;
 int VAR_18 = 0;
 void *VAR_19;
 struct mlx4_ib_dev *VAR_20 = FUNC_14(VAR_11->device);
 struct mlx4_cmd_mailbox *VAR_21;
 struct mlx4_net_trans_rule_hw_ctrl *VAR_22;
 int VAR_23;

 static const u16 VAR_24[] = {
  [132] = 128,
  [135] = 131,
  [133] = 129,
  [134] = 130,
 };

 if (VAR_12->priority > VAR_8) {
  FUNC_13("Invalid priority value %d\n", VAR_12->priority);
  return -VAR_0;
 }

 if (VAR_13 >= VAR_3) {
  FUNC_13("Invalid domain value %d\n", VAR_13);
  return -VAR_0;
 }

 if (FUNC_11(VAR_20->dev, VAR_14) < 0)
  return -VAR_0;

 VAR_21 = FUNC_6(VAR_20->dev);
 if (FUNC_0(VAR_21))
  return FUNC_1(VAR_21);
 VAR_22 = VAR_21->buf;

 VAR_22->prio = FUNC_4(VAR_24[VAR_13] |
     VAR_12->priority);
 VAR_22->type = FUNC_11(VAR_20->dev, VAR_14);
 VAR_22->port = VAR_12->port;
 VAR_22->qpn = FUNC_5(VAR_11->qp_num);

 VAR_19 = VAR_12 + 1;
 VAR_18 += sizeof(struct mlx4_net_trans_rule_hw_ctrl);

 VAR_23 = FUNC_3(VAR_11, VAR_12);
 if (VAR_23 >= 0) {
  VAR_16 = FUNC_2(
    VAR_20, VAR_11, VAR_10 + VAR_23,
    VAR_21->buf + VAR_18);
  if (VAR_16 < 0) {
   FUNC_8(VAR_20->dev, VAR_21);
   return -VAR_0;
  }
  VAR_18 += VAR_16;
 }
 for (VAR_17 = 0; VAR_17 < VAR_12->num_of_specs; VAR_17++) {
  VAR_16 = FUNC_12(VAR_20->dev, VAR_11->qp_num, VAR_19,
          VAR_21->buf + VAR_18);
  if (VAR_16 < 0) {
   FUNC_8(VAR_20->dev, VAR_21);
   return -VAR_0;
  }
  VAR_19 += ((union ib_flow_spec *) VAR_19)->size;
  VAR_18 += VAR_16;
 }

 if (FUNC_10(VAR_20->dev) && VAR_14 == VAR_7 &&
     VAR_12->num_of_specs == 1) {
  struct _rule_hw *VAR_25 = (struct _rule_hw *)(VAR_22 + 1);
  enum ib_flow_spec_type VAR_26 =
   ((union ib_flow_spec *)(VAR_12 + 1))->type;

  if (VAR_26 == VAR_4)
   FUNC_9(VAR_22, VAR_25);
 }

 VAR_16 = FUNC_7(VAR_20->dev, VAR_21->dma, VAR_15, VAR_18 >> 2, 0,
      VAR_9, VAR_6,
      VAR_5);
 if (VAR_16 == -VAR_1)
  FUNC_13("mcg table is full. Fail to register network rule.\n");
 else if (VAR_16 == -VAR_2)
  FUNC_13("Device managed flow steering is disabled. Fail to register network rule.\n");
 else if (VAR_16)
  FUNC_13("Invalid argument. Fail to register network rule.\n");

 FUNC_8(VAR_20->dev, VAR_21);
 return VAR_16;
}
