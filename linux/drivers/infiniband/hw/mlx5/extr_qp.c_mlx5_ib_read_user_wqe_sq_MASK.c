
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_wqe_ctrl_seg {int qpn_ds; } ;
struct mlx5_ib_wq {int wqe_shift; int wqe_cnt; int offset; } ;
struct TYPE_4__ {struct ib_umem* umem; } ;
struct mlx5_ib_qp_base {TYPE_2__ ubuffer; } ;
struct TYPE_3__ {struct mlx5_ib_qp_base base; } ;
struct mlx5_ib_qp {struct mlx5_ib_wq sq; TYPE_1__ trans_qp; } ;
struct ib_umem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_umem*,void*,int,int,int ,int ,int ,size_t,size_t*) ;

int FUNC_2(struct mlx5_ib_qp *VAR_3,
        int VAR_4,
        void *VAR_5,
        int VAR_6,
        size_t *VAR_7)
{
 struct mlx5_ib_qp_base *VAR_8 = &VAR_3->trans_qp.base;
 struct ib_umem *VAR_9 = VAR_8->ubuffer.umem;
 struct mlx5_ib_wq *VAR_10 = &VAR_3->sq;
 struct mlx5_wqe_ctrl_seg *VAR_11;
 size_t VAR_12;
 size_t VAR_13;
 size_t VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_6 < sizeof(*VAR_11))
  return -VAR_0;


 VAR_15 = FUNC_1(VAR_9,
        VAR_5,
        VAR_6,
        VAR_4,
        VAR_10->offset,
        VAR_10->wqe_cnt,
        VAR_10->wqe_shift,
        VAR_6,
        &VAR_12);
 if (VAR_15)
  return VAR_15;


 if (VAR_12 < sizeof(*VAR_11))
  return -VAR_0;

 VAR_11 = VAR_5;
 VAR_16 = FUNC_0(VAR_11->qpn_ds) & VAR_1;
 VAR_14 = VAR_16 * VAR_2;


 if (VAR_12 >= VAR_14) {
  *VAR_7 = VAR_12;
  return 0;
 }





 VAR_15 = FUNC_1(VAR_9,
        VAR_5 + VAR_12,
        VAR_6 - VAR_12,
        0,
        VAR_10->offset,
        VAR_10->wqe_cnt,
        VAR_10->wqe_shift,
        VAR_14 - VAR_12,
        &VAR_13);

 if (VAR_15)
  return VAR_15;
 *VAR_7 = VAR_12 + VAR_13;
 return 0;
}
