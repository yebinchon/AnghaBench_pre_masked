
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*) ;
 int FUNC_2 (struct mlx5_ib_dev*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_dev *VAR_2)
{
 struct mlx5_core_dev *VAR_3 = VAR_2->mdev;
 enum rdma_link_layer VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1);
 VAR_4 = FUNC_3(VAR_5);

 if (VAR_4 == VAR_0) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }
}
