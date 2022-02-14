
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct mlx5_wqe_xrc_seg {int dummy; } ;
struct mlx5_wqe_raddr_seg {int dummy; } ;
struct mlx5_wqe_ctrl_seg {int opmod_idx_opcode; int qpn_ds; } ;
struct mlx5_wqe_atomic_seg {int dummy; } ;
struct TYPE_6__ {unsigned int wqe_index; } ;
struct mlx5_pagefault {TYPE_1__ wqe; } ;
struct TYPE_10__ {scalar_t__ qp_type; } ;
struct TYPE_7__ {int qpn; } ;
struct TYPE_8__ {TYPE_2__ mqp; } ;
struct TYPE_9__ {TYPE_3__ base; } ;
struct mlx5_ib_qp {scalar_t__ qp_sub_type; TYPE_5__ ibqp; TYPE_4__ trans_qp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_base_av {int dqp_dct; } ;
struct mlx5_av {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;





 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(
 struct mlx5_ib_dev *VAR_8, struct mlx5_pagefault *VAR_9,
 struct mlx5_ib_qp *VAR_10, void **VAR_11, void **VAR_12, int VAR_13)
{
 struct mlx5_wqe_ctrl_seg *VAR_14 = *VAR_11;
 u16 VAR_15 = VAR_9->wqe.wqe_index;
 struct mlx5_base_av *VAR_16;
 unsigned VAR_17, VAR_18;
 u32 VAR_19 = VAR_10->trans_qp.base.mqp.qpn;

 VAR_17 = FUNC_0(VAR_14->qpn_ds) & VAR_5;
 if (VAR_17 * VAR_7 > VAR_13) {
  FUNC_2(VAR_8, "Unable to read the complete WQE. ds = 0x%x, ret = 0x%x\n",
       VAR_17, VAR_13);
  return -VAR_0;
 }

 if (VAR_17 == 0) {
  FUNC_2(VAR_8, "Got WQE with zero DS. wqe_index=%x, qpn=%x\n",
       VAR_15, VAR_19);
  return -VAR_0;
 }

 *VAR_12 = *VAR_11 + VAR_17 * VAR_7;
 *VAR_11 += sizeof(*VAR_14);

 VAR_18 = FUNC_0(VAR_14->opmod_idx_opcode) &
   VAR_6;

 if (VAR_10->ibqp.qp_type == VAR_2)
  *VAR_11 += sizeof(struct mlx5_wqe_xrc_seg);

 if (VAR_10->ibqp.qp_type == VAR_1 ||
     VAR_10->qp_sub_type == VAR_4) {
  VAR_16 = *VAR_11;
  if (VAR_16->dqp_dct & FUNC_1(VAR_3))
   *VAR_11 += sizeof(struct mlx5_av);
  else
   *VAR_11 += sizeof(struct mlx5_base_av);
 }

 switch (VAR_18) {
 case 129:
 case 128:
 case 130:
  *VAR_11 += sizeof(struct mlx5_wqe_raddr_seg);
  break;
 case 132:
 case 131:
  *VAR_11 += sizeof(struct mlx5_wqe_raddr_seg);
  *VAR_11 += sizeof(struct mlx5_wqe_atomic_seg);
  break;
 }

 return 0;
}
