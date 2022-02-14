
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rdma_hw_stats {int dummy; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_counters {scalar_t__ num_ext_ppcnt_counters; scalar_t__ num_cong_counters; scalar_t__ num_q_counters; int names; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct mlx5_ib_counters* FUNC_0 (struct mlx5_ib_dev*,scalar_t__) ;
 int FUNC_1 (int ) ;
 struct rdma_hw_stats* FUNC_2 (int ,scalar_t__,int ) ;
 struct mlx5_ib_dev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static struct rdma_hw_stats *FUNC_4(struct ib_device *VAR_1,
          u8 VAR_2)
{
 struct mlx5_ib_dev *VAR_3 = FUNC_3(VAR_1);
 const struct mlx5_ib_counters *VAR_4;
 bool VAR_5 = FUNC_1(VAR_3->mdev);

 if ((VAR_5 && VAR_2) || (!VAR_5 && !VAR_2))
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_3, VAR_2 - 1);

 return FUNC_2(VAR_4->names,
       VAR_4->num_q_counters +
       VAR_4->num_cong_counters +
       VAR_4->num_ext_ppcnt_counters,
       VAR_0);
}
