
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int activate; int rqs_cnt; int lock; int timeout; } ;
struct mlx5_ib_dev {TYPE_1__ delay_drop; int mdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_dev *VAR_0)
{
 int VAR_1 = 0;

 FUNC_2(&VAR_0->delay_drop.lock);
 if (VAR_0->delay_drop.activate)
  goto out;

 VAR_1 = FUNC_1(VAR_0->mdev, VAR_0->delay_drop.timeout);
 if (VAR_1)
  goto out;

 VAR_0->delay_drop.activate = 1;
out:
 FUNC_3(&VAR_0->delay_drop.lock);

 if (!VAR_1)
  FUNC_0(&VAR_0->delay_drop.rqs_cnt);
 return VAR_1;
}
