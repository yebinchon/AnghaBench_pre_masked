
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mpi_lock; struct mlx5_ib_multiport_info* mpi; } ;
struct mlx5_ib_port {TYPE_1__ mp; } ;
struct mlx5_ib_multiport_info {int mdev_refcnt; int is_master; struct mlx5_core_dev* mdev; int unaffiliate; } ;
struct mlx5_ib_dev {struct mlx5_ib_port* port; struct mlx5_core_dev* mdev; int ib_dev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct mlx5_core_dev *FUNC_4(struct mlx5_ib_dev *VAR_1,
         u8 VAR_2,
         u8 *VAR_3)
{
 enum rdma_link_layer VAR_4 = FUNC_1(&VAR_1->ib_dev,
         VAR_2);
 struct mlx5_core_dev *VAR_5 = ((void*)0);
 struct mlx5_ib_multiport_info *VAR_6;
 struct mlx5_ib_port *VAR_7;

 if (!FUNC_0(VAR_1->mdev) ||
     VAR_4 != VAR_0) {
  if (VAR_3)
   *VAR_3 = VAR_2;
  return VAR_1->mdev;
 }

 if (VAR_3)
  *VAR_3 = 1;

 VAR_7 = &VAR_1->port[VAR_2 - 1];
 if (!VAR_7)
  return ((void*)0);

 FUNC_2(&VAR_7->mp.mpi_lock);
 VAR_6 = VAR_1->port[VAR_2 - 1].mp.mpi;
 if (VAR_6 && !VAR_6->unaffiliate) {
  VAR_5 = VAR_6->mdev;



  if (!VAR_6->is_master)
   VAR_6->mdev_refcnt++;
 }
 FUNC_3(&VAR_7->mp.mpi_lock);

 return VAR_5;
}
