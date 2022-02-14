
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_hw_stats {int dummy; } ;
struct mlx4_ib_diag_counters {int num_counters; int name; } ;
struct mlx4_ib_dev {struct mlx4_ib_diag_counters* diag_counters; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rdma_hw_stats* FUNC_0 (int ,int ,int ) ;
 struct mlx4_ib_dev* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static struct rdma_hw_stats *FUNC_2(struct ib_device *VAR_1,
          u8 VAR_2)
{
 struct mlx4_ib_dev *VAR_3 = FUNC_1(VAR_1);
 struct mlx4_ib_diag_counters *VAR_4 = VAR_3->diag_counters;

 if (!VAR_4[!!VAR_2].name)
  return ((void*)0);

 return FUNC_0(VAR_4[!!VAR_2].name,
       VAR_4[!!VAR_2].num_counters,
       VAR_0);
}
