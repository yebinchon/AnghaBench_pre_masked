
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_counter {int id; int stats; scalar_t__ port; int device; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_counters {int dummy; } ;


 struct mlx5_ib_counters* FUNC_0 (struct mlx5_ib_dev*,scalar_t__) ;
 int FUNC_1 (int ,struct mlx5_ib_counters const*,int ,int ) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rdma_counter *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_2(VAR_0->device);
 const struct mlx5_ib_counters *VAR_2 =
  FUNC_0(VAR_1, VAR_0->port - 1);

 return FUNC_1(VAR_1->mdev, VAR_2,
     VAR_0->stats, VAR_0->id);
}
