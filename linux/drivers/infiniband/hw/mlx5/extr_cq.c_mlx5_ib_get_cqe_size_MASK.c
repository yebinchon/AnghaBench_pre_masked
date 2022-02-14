
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_cq {int cqe_size; } ;
struct ib_cq {int dummy; } ;


 struct mlx5_ib_cq* FUNC_0 (struct ib_cq*) ;

int FUNC_1(struct ib_cq *VAR_0)
{
 struct mlx5_ib_cq *VAR_1;

 if (!VAR_0)
  return 128;

 VAR_1 = FUNC_0(VAR_0);
 return VAR_1->cqe_size;
}
