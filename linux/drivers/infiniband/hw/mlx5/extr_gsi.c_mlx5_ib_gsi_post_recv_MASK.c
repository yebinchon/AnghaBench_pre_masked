
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_gsi_qp {int rx_qp; } ;
struct ib_recv_wr {int dummy; } ;
struct ib_qp {int dummy; } ;


 struct mlx5_ib_gsi_qp* FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (int ,struct ib_recv_wr const*,struct ib_recv_wr const**) ;

int FUNC_2(struct ib_qp *VAR_0, const struct ib_recv_wr *VAR_1,
     const struct ib_recv_wr **VAR_2)
{
 struct mlx5_ib_gsi_qp *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3->rx_qp, VAR_1, VAR_2);
}
