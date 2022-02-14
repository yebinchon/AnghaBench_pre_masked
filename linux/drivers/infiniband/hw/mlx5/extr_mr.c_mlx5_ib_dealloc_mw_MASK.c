
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int key; } ;
struct mlx5_ib_mw {TYPE_3__ mmkey; } ;
struct mlx5_ib_dev {TYPE_2__* mdev; int mr_srcu; } ;
struct ib_mw {int device; } ;
struct TYPE_4__ {int mkey_table; } ;
struct TYPE_5__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_ib_mw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 struct mlx5_ib_dev* FUNC_5 (int ) ;
 struct mlx5_ib_mw* FUNC_6 (struct ib_mw*) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(struct ib_mw *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_5(VAR_1->device);
 struct mlx5_ib_mw *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;

 if (FUNC_0(VAR_0)) {
  FUNC_7(&VAR_2->mdev->priv.mkey_table,
        FUNC_2(VAR_3->mmkey.key));




  FUNC_4(&VAR_2->mr_srcu);
 }

 VAR_4 = FUNC_3(VAR_2->mdev, &VAR_3->mmkey);
 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_3);
 return 0;
}
