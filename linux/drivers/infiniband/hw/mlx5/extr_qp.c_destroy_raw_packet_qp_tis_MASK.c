
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_sq {int tisn; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_pd {int dummy; } ;
struct TYPE_2__ {int uid; } ;


 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (struct ib_pd*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_dev *VAR_0,
          struct mlx5_ib_sq *VAR_1, struct ib_pd *VAR_2)
{
 FUNC_0(VAR_0->mdev, VAR_1->tisn, FUNC_1(VAR_2)->uid);
}
