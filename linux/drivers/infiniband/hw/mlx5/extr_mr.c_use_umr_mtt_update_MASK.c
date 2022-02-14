
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_ib_mr {int order; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct mlx5_ib_mr *VAR_1, u64 VAR_2, u64 VAR_3)
{
 return ((u64)1 << VAR_1->order) * VAR_0 >=
  VAR_3 + (VAR_2 & (VAR_0 - 1));
}
