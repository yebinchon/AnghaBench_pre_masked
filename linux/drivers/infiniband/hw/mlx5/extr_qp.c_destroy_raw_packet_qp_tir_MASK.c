
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_rq {int tirn; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_pd {int dummy; } ;
struct TYPE_2__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*,int,int) ;
 TYPE_1__* FUNC_2 (struct ib_pd*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_2,
          struct mlx5_ib_rq *VAR_3,
          u32 VAR_4,
          struct ib_pd *VAR_5)
{
 if (VAR_4 & (VAR_1 |
      VAR_0))
  FUNC_1(VAR_2, 0, 1);
 FUNC_0(VAR_2->mdev, VAR_3->tirn, FUNC_2(VAR_5)->uid);
}
