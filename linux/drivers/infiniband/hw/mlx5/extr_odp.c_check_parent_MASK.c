
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_mr {struct mlx5_ib_mr* parent; } ;
struct ib_umem_odp {int dying; struct mlx5_ib_mr* private; } ;



__attribute__((used)) static int FUNC_0(struct ib_umem_odp *VAR_0,
          struct mlx5_ib_mr *VAR_1)
{
 struct mlx5_ib_mr *VAR_2 = VAR_0->private;

 return VAR_2 && VAR_2->parent == VAR_1 && !VAR_0->dying;
}
