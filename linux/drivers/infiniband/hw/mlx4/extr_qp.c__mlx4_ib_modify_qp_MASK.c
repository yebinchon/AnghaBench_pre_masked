
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_qp {int state; int port; int mutex; } ;
struct mlx4_ib_dev {scalar_t__ num_ports; TYPE_2__* dev; int ib_dev; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; scalar_t__ port_num; scalar_t__ pkey_index; scalar_t__ max_rd_atomic; scalar_t__ max_dest_rd_atomic; } ;
struct ib_qp {int qp_type; scalar_t__ rwq_ind_tbl; int qp_num; int device; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
struct TYPE_3__ {scalar_t__* pkey_table_len; scalar_t__ max_qp_init_rdma; scalar_t__ max_qp_dest_rdma; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_0 (struct ib_qp*,int ,struct ib_qp_attr*,int,int,int,struct ib_udata*) ;
 int FUNC_1 (scalar_t__,struct ib_udata*) ;
 int FUNC_2 (scalar_t__,int,struct ib_udata*) ;
 int FUNC_3 (int,int,int,int) ;
 scalar_t__ FUNC_4 (struct mlx4_ib_dev*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ,int,int,...) ;
 scalar_t__ FUNC_9 (int *,int) ;
 struct mlx4_ib_dev* FUNC_10 (int ) ;
 struct mlx4_ib_qp* FUNC_11 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_12(struct ib_qp *VAR_19, struct ib_qp_attr *VAR_20,
         int VAR_21, struct ib_udata *VAR_22)
{
 struct mlx4_ib_dev *VAR_23 = FUNC_10(VAR_19->device);
 struct mlx4_ib_qp *VAR_24 = FUNC_11(VAR_19);
 enum ib_qp_state VAR_25, VAR_26;
 int VAR_27 = -VAR_0;
 FUNC_6(&VAR_24->mutex);

 VAR_25 = VAR_21 & VAR_11 ? VAR_20->cur_qp_state : VAR_24->state;
 VAR_26 = VAR_21 & VAR_16 ? VAR_20->qp_state : VAR_25;

 if (!FUNC_3(VAR_25, VAR_26, VAR_19->qp_type,
    VAR_21)) {
  FUNC_8("qpn 0x%x: invalid attribute mask specified "
    "for transition %d to %d. qp_type %d,"
    " attr_mask 0x%x\n",
    VAR_19->qp_num, VAR_25, VAR_26,
    VAR_19->qp_type, VAR_21);
  goto out;
 }

 if (VAR_19->rwq_ind_tbl) {
  if (!(((VAR_25 == VAR_4) &&
         (VAR_26 == VAR_3)) ||
        ((VAR_25 == VAR_3) &&
         (VAR_26 == VAR_5)))) {
   FUNC_8("qpn 0x%x: RSS QP unsupported transition %d to %d\n",
     VAR_19->qp_num, VAR_25, VAR_26);

   VAR_27 = -VAR_1;
   goto out;
  }

  if (VAR_21 & ~VAR_17) {
   FUNC_8("qpn 0x%x: RSS QP unsupported attribute mask 0x%x for transition %d to %d\n",
     VAR_19->qp_num, VAR_21, VAR_25, VAR_26);

   VAR_27 = -VAR_1;
   goto out;
  }
 }

 if (FUNC_5(VAR_23->dev) && (VAR_21 & VAR_15)) {
  if ((VAR_25 == VAR_4) && (VAR_26 == VAR_3)) {
   if ((VAR_19->qp_type == VAR_7) ||
       (VAR_19->qp_type == VAR_9) ||
       (VAR_19->qp_type == VAR_8) ||
       (VAR_19->qp_type == VAR_6) ||
       (VAR_19->qp_type == VAR_10)) {
    VAR_20->port_num = FUNC_4(VAR_23);
   }
  } else {


   VAR_21 &= ~VAR_15;
  }
 }

 if ((VAR_21 & VAR_15) &&
     (VAR_20->port_num == 0 || VAR_20->port_num > VAR_23->num_ports)) {
  FUNC_8("qpn 0x%x: invalid port number (%d) specified "
    "for transition %d to %d. qp_type %d\n",
    VAR_19->qp_num, VAR_20->port_num, VAR_25,
    VAR_26, VAR_19->qp_type);
  goto out;
 }

 if ((VAR_21 & VAR_15) && (VAR_19->qp_type == VAR_6) &&
     (FUNC_9(&VAR_23->ib_dev, VAR_20->port_num) !=
      VAR_2))
  goto out;

 if (VAR_21 & VAR_14) {
  int VAR_28 = VAR_21 & VAR_15 ? VAR_20->port_num : VAR_24->port;
  if (VAR_20->pkey_index >= VAR_23->dev->caps.pkey_table_len[VAR_28]) {
   FUNC_8("qpn 0x%x: invalid pkey index (%d) specified "
     "for transition %d to %d. qp_type %d\n",
     VAR_19->qp_num, VAR_20->pkey_index, VAR_25,
     VAR_26, VAR_19->qp_type);
   goto out;
  }
 }

 if (VAR_21 & VAR_13 &&
     VAR_20->max_rd_atomic > VAR_23->dev->caps.max_qp_init_rdma) {
  FUNC_8("qpn 0x%x: max_rd_atomic (%d) too large. "
    "Transition %d to %d. qp_type %d\n",
    VAR_19->qp_num, VAR_20->max_rd_atomic, VAR_25,
    VAR_26, VAR_19->qp_type);
  goto out;
 }

 if (VAR_21 & VAR_12 &&
     VAR_20->max_dest_rd_atomic > VAR_23->dev->caps.max_qp_dest_rdma) {
  FUNC_8("qpn 0x%x: max_dest_rd_atomic (%d) too large. "
    "Transition %d to %d. qp_type %d\n",
    VAR_19->qp_num, VAR_20->max_dest_rd_atomic, VAR_25,
    VAR_26, VAR_19->qp_type);
  goto out;
 }

 if (VAR_25 == VAR_26 && VAR_25 == VAR_4) {
  VAR_27 = 0;
  goto out;
 }

 if (VAR_19->rwq_ind_tbl && (VAR_26 == VAR_3)) {
  VAR_27 = FUNC_2(VAR_19->rwq_ind_tbl, VAR_20->port_num,
           VAR_22);
  if (VAR_27)
   goto out;
 }

 VAR_27 = FUNC_0(VAR_19, VAR_18, VAR_20, VAR_21,
      VAR_25, VAR_26, VAR_22);

 if (VAR_19->rwq_ind_tbl && VAR_27)
  FUNC_1(VAR_19->rwq_ind_tbl, VAR_22);

 if (FUNC_5(VAR_23->dev) && (VAR_21 & VAR_15))
  VAR_20->port_num = 1;

out:
 FUNC_7(&VAR_24->mutex);
 return VAR_27;
}
