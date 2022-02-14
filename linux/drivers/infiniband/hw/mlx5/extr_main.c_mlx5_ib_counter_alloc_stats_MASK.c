
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_hw_stats {int dummy; } ;
struct rdma_counter {scalar_t__ port; int device; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_ib_counters {int num_q_counters; int names; } ;


 int VAR_0 ;
 struct mlx5_ib_counters* FUNC_0 (struct mlx5_ib_dev*,scalar_t__) ;
 struct rdma_hw_stats* FUNC_1 (int ,int ,int ) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;

__attribute__((used)) static struct rdma_hw_stats *
FUNC_3(struct rdma_counter *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_2(VAR_1->device);
 const struct mlx5_ib_counters *VAR_3 =
  FUNC_0(VAR_2, VAR_1->port - 1);


 return FUNC_1(VAR_3->names,
       VAR_3->num_q_counters,
       VAR_0);
}
