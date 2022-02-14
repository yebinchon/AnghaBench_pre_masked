
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5_ib_dev {TYPE_2__* port; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int netdev_lock; struct net_device* netdev; } ;
struct TYPE_4__ {TYPE_1__ roce; } ;


 int FUNC_0 (struct net_device*) ;
 struct mlx5_core_dev* FUNC_1 (struct mlx5_ib_dev*,int,int *) ;
 int FUNC_2 (struct mlx5_ib_dev*,int) ;
 struct net_device* FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx5_ib_dev* FUNC_6 (struct ib_device*) ;

__attribute__((used)) static struct net_device *FUNC_7(struct ib_device *VAR_0,
          u8 VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_6(VAR_0);
 struct net_device *VAR_3;
 struct mlx5_core_dev *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, ((void*)0));
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3)
  goto out;



 FUNC_4(&VAR_2->port[VAR_1 - 1].roce.netdev_lock);
 VAR_3 = VAR_2->port[VAR_1 - 1].roce.netdev;
 if (VAR_3)
  FUNC_0(VAR_3);
 FUNC_5(&VAR_2->port[VAR_1 - 1].roce.netdev_lock);

out:
 FUNC_2(VAR_2, VAR_1);
 return VAR_3;
}
