
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_counter {int id; int device; } ;
struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (int ,int ) ;
 struct mlx5_ib_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct rdma_counter *VAR_0)
{
 struct mlx5_ib_dev *VAR_1 = FUNC_1(VAR_0->device);

 return FUNC_0(VAR_1->mdev, VAR_0->id);
}
