
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_ib_srq {int dummy; } ;
struct mlx4_ib_cq {int lock; } ;


 int FUNC_0 (struct mlx4_ib_cq*,int ,struct mlx4_ib_srq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx4_ib_cq *VAR_0, u32 VAR_1, struct mlx4_ib_srq *VAR_2)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock);
}
