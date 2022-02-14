
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {int dummy; } ;
struct mlx4_ib_dev {int ib_dev; } ;
struct ib_global_route {int sgid_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_ib_dev*,int,int) ;
 struct ib_global_route* FUNC_1 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_dev *VAR_1, int VAR_2, int VAR_3,
        struct rdma_ah_attr *VAR_4)
{
 struct ib_global_route *VAR_5 = FUNC_1(VAR_4);
 if (FUNC_2(&VAR_1->ib_dev, VAR_3) == VAR_0)
  VAR_5->sgid_index = VAR_2;
 else
  VAR_5->sgid_index += FUNC_0(VAR_1, VAR_2, VAR_3);
}
