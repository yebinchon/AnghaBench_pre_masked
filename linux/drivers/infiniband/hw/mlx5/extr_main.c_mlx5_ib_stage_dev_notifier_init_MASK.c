
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct mlx5_ib_dev {TYPE_1__ mdev_events; int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_1)
{
 VAR_1->mdev_events.notifier_call = VAR_0;
 FUNC_0(VAR_1->mdev, &VAR_1->mdev_events);
 return 0;
}
