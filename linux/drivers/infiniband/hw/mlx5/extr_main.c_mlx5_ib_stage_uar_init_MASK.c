
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_dev {TYPE_2__* mdev; } ;
struct TYPE_3__ {int uar; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_0)
{
 VAR_0->mdev->priv.uar = FUNC_1(VAR_0->mdev);
 return FUNC_0(VAR_0->mdev->priv.uar);
}
