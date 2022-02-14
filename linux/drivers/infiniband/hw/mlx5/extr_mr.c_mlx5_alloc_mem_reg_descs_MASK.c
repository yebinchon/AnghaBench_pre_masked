
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_mtt {int dummy; } ;
struct mlx5_ib_mr {int dummy; } ;
struct ib_pd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_pd*,struct mlx5_ib_mr*,int,int,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ib_pd *VAR_2, struct mlx5_ib_mr *VAR_3,
        int VAR_4, u32 *VAR_5, int VAR_6)
{
 return FUNC_0(VAR_2, VAR_3, VAR_4, sizeof(struct mlx5_mtt),
          VAR_1, VAR_0, VAR_5,
          VAR_6);
}
