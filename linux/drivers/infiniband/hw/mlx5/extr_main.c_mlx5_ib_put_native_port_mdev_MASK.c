
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mpi_lock; struct mlx5_ib_multiport_info* mpi; } ;
struct mlx5_ib_port {TYPE_1__ mp; } ;
struct mlx5_ib_multiport_info {int unref_comp; scalar_t__ unaffiliate; int mdev_refcnt; scalar_t__ is_master; } ;
struct mlx5_ib_dev {struct mlx5_ib_port* port; int mdev; int ib_dev; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5_ib_dev *VAR_1, u8 VAR_2)
{
 enum rdma_link_layer VAR_3 = FUNC_2(&VAR_1->ib_dev,
         VAR_2);
 struct mlx5_ib_multiport_info *VAR_4;
 struct mlx5_ib_port *VAR_5;

 if (!FUNC_1(VAR_1->mdev) || VAR_3 != VAR_0)
  return;

 VAR_5 = &VAR_1->port[VAR_2 - 1];

 FUNC_3(&VAR_5->mp.mpi_lock);
 VAR_4 = VAR_1->port[VAR_2 - 1].mp.mpi;
 if (VAR_4->is_master)
  goto out;

 VAR_4->mdev_refcnt--;
 if (VAR_4->unaffiliate)
  FUNC_0(&VAR_4->unref_comp);
out:
 FUNC_4(&VAR_5->mp.mpi_lock);
}
