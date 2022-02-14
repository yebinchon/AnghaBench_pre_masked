
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_klm {int dummy; } ;
struct mlx5_ib_mr {int dummy; } ;
struct ib_pd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_pd*,struct mlx5_ib_mr*,int,int,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ib_pd *VAR_1, struct mlx5_ib_mr *VAR_2,
        int VAR_3, u32 *VAR_4, int VAR_5)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, sizeof(struct mlx5_klm),
          0, VAR_0, VAR_4, VAR_5);
}
