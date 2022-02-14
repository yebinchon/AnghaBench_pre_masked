
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_dev {int num_ports; int mdev; int ib_dev_list; TYPE_2__* port; int ib_dev; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;
struct TYPE_3__ {int * mpi; } ;
struct TYPE_4__ {TYPE_1__ mp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_ib_dev*,char*,...) ;
 int VAR_1 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct mlx5_ib_dev*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct mlx5_ib_dev *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_2->mdev) - 1;
 enum rdma_link_layer VAR_4 = FUNC_5(&VAR_2->ib_dev,
         VAR_3 + 1);
 int VAR_5;

 if (!FUNC_2(VAR_2->mdev) || VAR_4 != VAR_0)
  return;

 FUNC_8(&VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_2->num_ports; VAR_5++) {
  if (VAR_2->port[VAR_5].mp.mpi) {

   if (VAR_5 == VAR_3) {
    FUNC_0(VAR_2->port[VAR_5].mp.mpi);
    VAR_2->port[VAR_5].mp.mpi = ((void*)0);
   } else {
    FUNC_4(VAR_2, "unbinding port_num: %d\n", VAR_5 + 1);
    FUNC_6(VAR_2, VAR_2->port[VAR_5].mp.mpi);
   }
  }
 }

 FUNC_4(VAR_2, "removing from devlist\n");
 FUNC_1(&VAR_2->ib_dev_list);
 FUNC_9(&VAR_1);

 FUNC_7(VAR_2->mdev);
}
