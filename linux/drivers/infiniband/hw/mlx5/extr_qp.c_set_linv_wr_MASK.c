
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wqe_umr_ctrl_seg {int dummy; } ;
struct mlx5_mkey_seg {int dummy; } ;
struct mlx5_ib_qp {int sq; } ;


 int FUNC_0 (int *,void**,int,void**) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_qp *VAR_0, void **VAR_1, int *VAR_2,
   void **VAR_3)
{
 FUNC_2(*VAR_1);
 *VAR_1 += sizeof(struct mlx5_wqe_umr_ctrl_seg);
 *VAR_2 += sizeof(struct mlx5_wqe_umr_ctrl_seg) / 16;
 FUNC_0(&VAR_0->sq, VAR_1, *VAR_2, VAR_3);
 FUNC_1(*VAR_1);
 *VAR_1 += sizeof(struct mlx5_mkey_seg);
 *VAR_2 += sizeof(struct mlx5_mkey_seg) / 16;
 FUNC_0(&VAR_0->sq, VAR_1, *VAR_2, VAR_3);
}
