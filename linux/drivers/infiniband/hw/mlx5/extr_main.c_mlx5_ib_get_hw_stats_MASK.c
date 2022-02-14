
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rdma_hw_stats {scalar_t__ value; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_counters {int num_q_counters; int num_cong_counters; int num_ext_ppcnt_counters; scalar_t__ offsets; int set_id; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 struct mlx5_ib_counters* FUNC_2 (struct mlx5_ib_dev*,scalar_t__) ;
 struct mlx5_core_dev* FUNC_3 (struct mlx5_ib_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct mlx5_ib_dev*,scalar_t__) ;
 int FUNC_5 (struct mlx5_ib_dev*,struct mlx5_ib_counters const*,struct rdma_hw_stats*) ;
 int FUNC_6 (int ,struct mlx5_ib_counters const*,struct rdma_hw_stats*,int ) ;
 int FUNC_7 (int ,scalar_t__,int,scalar_t__) ;
 int VAR_2 ;
 struct mlx5_ib_dev* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_3,
    struct rdma_hw_stats *VAR_4,
    u8 VAR_5, int VAR_6)
{
 struct mlx5_ib_dev *VAR_7 = FUNC_8(VAR_3);
 const struct mlx5_ib_counters *VAR_8 = FUNC_2(VAR_7, VAR_5 - 1);
 struct mlx5_core_dev *VAR_9;
 int VAR_10, VAR_11;
 u8 VAR_12;

 if (!VAR_4)
  return -VAR_0;

 VAR_11 = VAR_8->num_q_counters +
         VAR_8->num_cong_counters +
         VAR_8->num_ext_ppcnt_counters;


 VAR_10 = FUNC_6(VAR_7->mdev, VAR_8, VAR_4, VAR_8->set_id);
 if (VAR_10)
  return VAR_10;

 if (FUNC_1(VAR_7->mdev, VAR_2)) {
  VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_4);
  if (VAR_10)
   return VAR_10;
 }

 if (FUNC_0(VAR_7->mdev, VAR_1)) {
  VAR_9 = FUNC_3(VAR_7, VAR_5,
          &VAR_12);
  if (!VAR_9) {




   goto done;
  }
  VAR_10 = FUNC_7(VAR_7->mdev,
         VAR_4->value +
         VAR_8->num_q_counters,
         VAR_8->num_cong_counters,
         VAR_8->offsets +
         VAR_8->num_q_counters);

  FUNC_4(VAR_7, VAR_5);
  if (VAR_10)
   return VAR_10;
 }

done:
 return VAR_11;
}
