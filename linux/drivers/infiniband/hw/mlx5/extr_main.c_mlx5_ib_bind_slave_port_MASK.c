
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {int * notifier_call; } ;
struct mlx5_ib_multiport_info {TYPE_3__ mdev_events; int mdev; struct mlx5_ib_dev* ibdev; } ;
struct mlx5_ib_dev {int mdev; TYPE_2__* port; } ;
struct TYPE_4__ {int mpi_lock; struct mlx5_ib_multiport_info* mpi; } ;
struct TYPE_5__ {TYPE_1__ mp; } ;


 int FUNC_0 (struct mlx5_ib_dev*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_ib_dev*,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_ib_dev*,char*,size_t) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,size_t) ;
 int * VAR_0 ;
 int FUNC_6 (struct mlx5_ib_dev*,size_t) ;
 int VAR_1 ;
 int FUNC_7 (struct mlx5_ib_dev*,struct mlx5_ib_multiport_info*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static bool FUNC_12(struct mlx5_ib_dev *VAR_2,
        struct mlx5_ib_multiport_info *VAR_3)
{
 u8 VAR_4 = FUNC_3(VAR_3->mdev) - 1;
 int VAR_5;

 FUNC_1(&VAR_1);

 FUNC_10(&VAR_2->port[VAR_4].mp.mpi_lock);
 if (VAR_2->port[VAR_4].mp.mpi) {
  FUNC_4(VAR_2, "port %d already affiliated.\n",
       VAR_4 + 1);
  FUNC_11(&VAR_2->port[VAR_4].mp.mpi_lock);
  return 0;
 }

 VAR_2->port[VAR_4].mp.mpi = VAR_3;
 VAR_3->ibdev = VAR_2;
 VAR_3->mdev_events.notifier_call = ((void*)0);
 FUNC_11(&VAR_2->port[VAR_4].mp.mpi_lock);

 VAR_5 = FUNC_8(VAR_2->mdev, VAR_3->mdev);
 if (VAR_5)
  goto unbind;

 VAR_5 = FUNC_0(VAR_2, FUNC_3(VAR_3->mdev));
 if (VAR_5)
  goto unbind;

 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_5(VAR_2, "failed adding netdev notifier for port %u\n",
       VAR_4 + 1);
  goto unbind;
 }

 VAR_3->mdev_events.notifier_call = VAR_0;
 FUNC_9(VAR_3->mdev, &VAR_3->mdev_events);

 FUNC_6(VAR_2, VAR_4);

 return 1;

unbind:
 FUNC_7(VAR_2, VAR_3);
 return 0;
}
