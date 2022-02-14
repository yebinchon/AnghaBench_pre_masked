
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_pd {int uid; int pdn; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct mlx5_ib_dev* FUNC_1 (int ) ;
 struct mlx5_ib_pd* FUNC_2 (struct ib_pd*) ;

__attribute__((used)) static void FUNC_3(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_1(VAR_0->device);
 struct mlx5_ib_pd *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_2->mdev, VAR_3->pdn, VAR_3->uid);
}
