
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_wqe_umr_ctrl_seg {int dummy; } ;
struct mlx5_wqe_data_seg {int dummy; } ;
struct mlx5_mkey_seg {int dummy; } ;
struct TYPE_6__ {int device; int pd; } ;
struct mlx5_ib_qp {int sq; TYPE_3__ ibqp; } ;
struct TYPE_4__ {int device; } ;
struct mlx5_ib_pd {TYPE_1__ ibpd; } ;
struct mlx5_ib_mr {int ndescs; int meta_ndescs; int desc_size; int descs; } ;
struct mlx5_ib_dev {int mdev; } ;
struct TYPE_5__ {int send_flags; } ;
struct ib_reg_wr {int access; int key; TYPE_2__ wr; int mr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,void**,int,void**) ;
 int FUNC_3 (int *,void**,void**,int*,int ,int) ;
 int FUNC_4 (struct mlx5_ib_dev*,int) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,...) ;
 int FUNC_6 (void*,struct mlx5_ib_mr*,struct mlx5_ib_pd*) ;
 int FUNC_7 (void*,struct mlx5_ib_mr*,int ,int) ;
 int FUNC_8 (void*,struct mlx5_ib_mr*,int ,int) ;
 struct mlx5_ib_dev* FUNC_9 (int ) ;
 struct mlx5_ib_mr* FUNC_10 (int ) ;
 struct mlx5_ib_pd* FUNC_11 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct mlx5_ib_qp *VAR_8,
        const struct ib_reg_wr *VAR_9,
        void **VAR_10, int *VAR_11, void **VAR_12,
        bool VAR_13)
{
 struct mlx5_ib_mr *VAR_14 = FUNC_10(VAR_9->mr);
 struct mlx5_ib_pd *VAR_15 = FUNC_11(VAR_8->ibqp.pd);
 struct mlx5_ib_dev *VAR_16 = FUNC_9(VAR_15->ibpd.device);
 int VAR_17 = (VAR_14->ndescs + VAR_14->meta_ndescs) * VAR_14->desc_size;
 bool VAR_18 = VAR_17 <= VAR_3;
 bool VAR_19 = VAR_9->access & VAR_1;
 u8 VAR_20 = 0;

 if (!FUNC_4(VAR_16, VAR_19)) {
  FUNC_5(FUNC_9(VAR_8->ibqp.device),
        "Fast update of %s for MR is disabled\n",
        (FUNC_1(VAR_16->mdev,
        VAR_7)) ?
         "entity size" :
         "atomic access");
  return -VAR_0;
 }

 if (FUNC_12(VAR_9->wr.send_flags & VAR_2)) {
  FUNC_5(FUNC_9(VAR_8->ibqp.device),
        "Invalid IB_SEND_INLINE send flag\n");
  return -VAR_0;
 }

 if (VAR_13)
  VAR_20 |= VAR_5;
 if (VAR_18)
  VAR_20 |= VAR_6;

 FUNC_8(*VAR_10, VAR_14, VAR_20, VAR_19);
 *VAR_10 += sizeof(struct mlx5_wqe_umr_ctrl_seg);
 *VAR_11 += sizeof(struct mlx5_wqe_umr_ctrl_seg) / 16;
 FUNC_2(&VAR_8->sq, VAR_10, *VAR_11, VAR_12);

 FUNC_7(*VAR_10, VAR_14, VAR_9->key, VAR_9->access);
 *VAR_10 += sizeof(struct mlx5_mkey_seg);
 *VAR_11 += sizeof(struct mlx5_mkey_seg) / 16;
 FUNC_2(&VAR_8->sq, VAR_10, *VAR_11, VAR_12);

 if (VAR_18) {
  FUNC_3(&VAR_8->sq, VAR_12, VAR_10, VAR_11, VAR_14->descs,
    VAR_17);
  *VAR_11 = FUNC_0(*VAR_11, VAR_4 >> 4);
 } else {
  FUNC_6(*VAR_10, VAR_14, VAR_15);
  *VAR_10 += sizeof(struct mlx5_wqe_data_seg);
  *VAR_11 += (sizeof(struct mlx5_wqe_data_seg) / 16);
 }
 return 0;
}
