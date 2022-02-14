
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int ib_dev; int mdev; } ;


 int FUNC_0 (int *,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_1)
{
 const char *VAR_2;

 FUNC_2(&VAR_1->ib_dev, &VAR_0);
 if (!FUNC_1(VAR_1->mdev))
  VAR_2 = "mlx5_%d";
 else
  VAR_2 = "mlx5_bond_%d";
 return FUNC_0(&VAR_1->ib_dev, VAR_2);
}
