
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {int last_port_state; } ;
struct TYPE_4__ {int mpi_lock; int * mpi; } ;
struct mlx5_ib_port {TYPE_2__ roce; TYPE_1__ mp; } ;
struct TYPE_6__ {int * notifier_call; } ;
struct mlx5_ib_multiport_info {int mdev_refcnt; int unaffiliate; int mdev; int list; int unref_comp; TYPE_3__ mdev_events; int * ibdev; } ;
struct mlx5_ib_dev {struct mlx5_ib_port* port; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_ib_dev*,size_t) ;
 int FUNC_5 (struct mlx5_ib_dev*,char*,size_t) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 int FUNC_9 (struct mlx5_ib_dev*,size_t) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct mlx5_ib_dev *VAR_3,
          struct mlx5_ib_multiport_info *VAR_4)
{
 u8 VAR_5 = FUNC_3(VAR_4->mdev) - 1;
 struct mlx5_ib_port *VAR_6 = &VAR_3->port[VAR_5];
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_2(&VAR_1);

 FUNC_4(VAR_3, VAR_5);

 FUNC_10(&VAR_6->mp.mpi_lock);
 if (!VAR_4->ibdev) {
  FUNC_11(&VAR_6->mp.mpi_lock);
  return;
 }

 VAR_4->ibdev = ((void*)0);

 FUNC_11(&VAR_6->mp.mpi_lock);
 if (VAR_4->mdev_events.notifier_call)
  FUNC_8(VAR_4->mdev, &VAR_4->mdev_events);
 VAR_4->mdev_events.notifier_call = ((void*)0);
 FUNC_9(VAR_3, VAR_5);
 FUNC_10(&VAR_6->mp.mpi_lock);

 VAR_7 = VAR_4->mdev_refcnt;
 if (VAR_7) {
  VAR_4->unaffiliate = 1;
  FUNC_0(&VAR_4->unref_comp);
  FUNC_11(&VAR_6->mp.mpi_lock);

  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_12(&VAR_4->unref_comp);

  FUNC_10(&VAR_6->mp.mpi_lock);
  VAR_4->unaffiliate = 0;
 }

 VAR_6->mp.mpi = ((void*)0);

 FUNC_1(&VAR_4->list, &VAR_2);

 FUNC_11(&VAR_6->mp.mpi_lock);

 VAR_8 = FUNC_7(VAR_4->mdev);

 FUNC_5(VAR_3, "unaffiliated port %d\n", VAR_5 + 1);



 if (VAR_8)
  FUNC_6(VAR_3, "Failed to unaffiliate port %u\n",
       VAR_5 + 1);

 VAR_3->port[VAR_5].roce.last_port_state = VAR_0;
}
