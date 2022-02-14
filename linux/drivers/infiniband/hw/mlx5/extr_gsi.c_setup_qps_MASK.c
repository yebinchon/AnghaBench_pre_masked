
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5_ib_gsi_qp {scalar_t__ num_qps; } ;


 int FUNC_0 (struct mlx5_ib_gsi_qp*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_gsi_qp *VAR_0)
{
 u16 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_qps; ++VAR_1)
  FUNC_0(VAR_0, VAR_1);
}
