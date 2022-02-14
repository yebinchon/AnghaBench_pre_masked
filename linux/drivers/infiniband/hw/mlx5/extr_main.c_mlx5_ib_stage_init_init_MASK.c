
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {struct mlx5_core_dev* dev; int lock; } ;
struct TYPE_10__ {int parent; } ;
struct TYPE_11__ {int phys_port_cnt; TYPE_4__ dev; int num_comp_vectors; scalar_t__ local_dma_lkey; int node_type; } ;
struct mlx5_ib_dev {int num_ports; int mr_srcu; TYPE_6__ dm; int reset_flow_resource_lock; int qp_list; int cap_mask_mutex; TYPE_5__ ib_dev; TYPE_3__* port; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int device; } ;
struct TYPE_8__ {int native_port_num; int last_port_state; struct mlx5_ib_dev* dev; int netdev_lock; } ;
struct TYPE_7__ {int mpi_lock; } ;
struct TYPE_9__ {TYPE_2__ roce; TYPE_1__ mp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct mlx5_ib_dev*) ;
 int FUNC_3 (struct mlx5_ib_dev*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (struct mlx5_ib_dev*) ;
 int FUNC_9 (struct mlx5_ib_dev*) ;
 int FUNC_10 (struct mlx5_ib_dev*) ;
 scalar_t__ FUNC_11 (struct mlx5_ib_dev*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct mlx5_ib_dev*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct mlx5_ib_dev *VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_ports; VAR_7++) {
  FUNC_15(&VAR_4->port[VAR_7].mp.mpi_lock);
  FUNC_13(&VAR_4->port[VAR_7].roce.netdev_lock);
  VAR_4->port[VAR_7].roce.dev = VAR_4;
  VAR_4->port[VAR_7].roce.native_port_num = VAR_7 + 1;
  VAR_4->port[VAR_7].roce.last_port_state = VAR_2;
 }

 FUNC_10(VAR_4);

 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_14(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (!FUNC_6(VAR_5)) {
  for (VAR_7 = 1; VAR_7 <= VAR_4->num_ports; VAR_7++) {
   VAR_6 = FUNC_3(VAR_4, VAR_7);
   if (VAR_6)
    break;
  }
 } else {
  VAR_6 = FUNC_3(VAR_4, FUNC_7(VAR_5));
 }
 if (VAR_6)
  goto err_mp;

 if (FUNC_11(VAR_4))
  FUNC_2(VAR_4);

 VAR_4->ib_dev.node_type = VAR_3;
 VAR_4->ib_dev.local_dma_lkey = 0 ;
 VAR_4->ib_dev.phys_port_cnt = VAR_4->num_ports;
 VAR_4->ib_dev.num_comp_vectors = FUNC_5(VAR_5);
 VAR_4->ib_dev.dev.parent = VAR_5->device;

 FUNC_12(&VAR_4->cap_mask_mutex);
 FUNC_0(&VAR_4->qp_list);
 FUNC_15(&VAR_4->reset_flow_resource_lock);

 FUNC_15(&VAR_4->dm.lock);
 VAR_4->dm.dev = VAR_5;

 if (FUNC_1(VAR_0)) {
  VAR_6 = FUNC_4(&VAR_4->mr_srcu);
  if (VAR_6)
   goto err_mp;
 }

 return 0;

err_mp:
 FUNC_8(VAR_4);

 return -VAR_1;
}
