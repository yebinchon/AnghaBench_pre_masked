
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int qp_type; int device; } ;
struct TYPE_3__ {int atomic_rd_en; int resp_depth; } ;
struct mlx5_ib_qp {TYPE_2__ ibqp; TYPE_1__ trans_qp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_qp_attr {int qp_access_flags; int max_dest_rd_atomic; } ;
typedef int __be32 ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_ib_dev*,int ) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_qp *VAR_10,
    const struct ib_qp_attr *VAR_11,
    int VAR_12, __be32 *VAR_13)
{
 u8 VAR_14;
 u32 VAR_15, VAR_16 = 0;

 struct mlx5_ib_dev *VAR_17 = FUNC_2(VAR_10->ibqp.device);

 if (VAR_12 & VAR_5)
  VAR_14 = VAR_11->max_dest_rd_atomic;
 else
  VAR_14 = VAR_10->trans_qp.resp_depth;

 if (VAR_12 & VAR_4)
  VAR_15 = VAR_11->qp_access_flags;
 else
  VAR_15 = VAR_10->trans_qp.atomic_rd_en;

 if (!VAR_14)
  VAR_15 &= VAR_3;

 if (VAR_15 & VAR_2)
  VAR_16 |= VAR_8;
 if (VAR_15 & VAR_1) {
  int VAR_18;

  VAR_18 = FUNC_1(VAR_17, VAR_10->ibqp.qp_type);
  if (VAR_18 < 0)
   return -VAR_0;

  VAR_16 |= VAR_7;
  VAR_16 |= VAR_18 << VAR_6;
 }

 if (VAR_15 & VAR_3)
  VAR_16 |= VAR_9;

 *VAR_13 = FUNC_0(VAR_16);

 return 0;
}
