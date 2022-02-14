
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_fmr {int mfmr; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_fmr {int device; } ;


 int FUNC_0 (struct mlx4_ib_fmr*) ;
 int FUNC_1 (int ,int *) ;
 struct mlx4_ib_dev* FUNC_2 (int ) ;
 struct mlx4_ib_fmr* FUNC_3 (struct ib_fmr*) ;

int FUNC_4(struct ib_fmr *VAR_0)
{
 struct mlx4_ib_fmr *VAR_1 = FUNC_3(VAR_0);
 struct mlx4_ib_dev *VAR_2 = FUNC_2(VAR_0->device);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->dev, &VAR_1->mfmr);

 if (!VAR_3)
  FUNC_0(VAR_1);

 return VAR_3;
}
