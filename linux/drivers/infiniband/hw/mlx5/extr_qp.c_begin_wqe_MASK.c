
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wqe_ctrl_seg {int dummy; } ;
struct mlx5_ib_qp {int dummy; } ;
struct ib_send_wr {int send_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_ib_qp*,void**,struct mlx5_wqe_ctrl_seg**,struct ib_send_wr const*,unsigned int*,int*,void**,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_qp *VAR_2, void **VAR_3,
       struct mlx5_wqe_ctrl_seg **VAR_4,
       const struct ib_send_wr *VAR_5, unsigned *VAR_6,
       int *VAR_7, void **VAR_8, int VAR_9)
{
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_5->send_flags & VAR_0,
      VAR_5->send_flags & VAR_1);
}
