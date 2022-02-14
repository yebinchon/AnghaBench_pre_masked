
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int fp_bfreg; int mdev; int bfreg; } ;


 int FUNC_0 (int ,int *,int,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->mdev, &VAR_0->bfreg, 0, 0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0->mdev, &VAR_0->fp_bfreg, 0, 1);
 if (VAR_1)
  FUNC_1(VAR_0->mdev, &VAR_0->fp_bfreg);

 return VAR_1;
}
