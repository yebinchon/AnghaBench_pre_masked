
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_qp {int dummy; } ;
struct mlx5_core_rsc_common {int dummy; } ;
struct mlx5_core_qp {int dummy; } ;


 struct mlx5_ib_qp* FUNC_0 (struct mlx5_core_qp*) ;

__attribute__((used)) static inline struct mlx5_ib_qp *FUNC_1(struct mlx5_core_rsc_common *VAR_0)
{
 struct mlx5_core_qp *VAR_1 = (struct mlx5_core_qp *)VAR_0;

 return FUNC_0(VAR_1);
}
