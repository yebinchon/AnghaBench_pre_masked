
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_pf_eq {int pool; int wq; int work; int core; int irq_nb; } ;
struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_pf_eq *VAR_1)
{
 int VAR_2;

 FUNC_4(VAR_0->mdev, VAR_1->core, &VAR_1->irq_nb);
 VAR_2 = FUNC_3(VAR_0->mdev, VAR_1->core);
 FUNC_0(&VAR_1->work);
 FUNC_1(VAR_1->wq);
 FUNC_2(VAR_1->pool);

 return VAR_2;
}
