
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_reg_node_desc {int dummy; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_device_modify {int node_desc; } ;
struct ib_device {struct mlx5_reg_node_desc* node_desc; } ;
typedef int out ;
typedef int in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5_reg_node_desc*,int ,int ) ;
 int FUNC_1 (int ,struct mlx5_reg_node_desc*,int,struct mlx5_reg_node_desc*,int,int ,int ,int) ;
 struct mlx5_ib_dev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_4, int VAR_5,
     struct ib_device_modify *VAR_6)
{
 struct mlx5_ib_dev *VAR_7 = FUNC_2(VAR_4);
 struct mlx5_reg_node_desc VAR_8;
 struct mlx5_reg_node_desc VAR_9;
 int VAR_10;

 if (VAR_5 & ~VAR_1)
  return -VAR_0;

 if (!(VAR_5 & VAR_1))
  return 0;





 FUNC_0(&VAR_8, VAR_6->node_desc, VAR_2);
 VAR_10 = FUNC_1(VAR_7->mdev, &VAR_8, sizeof(VAR_8), &VAR_9,
       sizeof(VAR_9), VAR_3, 0, 1);
 if (VAR_10)
  return VAR_10;

 FUNC_0(VAR_4->node_desc, VAR_6->node_desc, VAR_2);

 return VAR_10;
}
