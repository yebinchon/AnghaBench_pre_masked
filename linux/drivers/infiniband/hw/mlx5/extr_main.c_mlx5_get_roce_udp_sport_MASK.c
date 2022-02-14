
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;
struct ib_gid_attr {scalar_t__ gid_type; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__be16 FUNC_2(struct mlx5_ib_dev *VAR_2,
          const struct ib_gid_attr *VAR_3)
{
 if (VAR_3->gid_type != VAR_0)
  return 0;

 return FUNC_1(FUNC_0(VAR_2->mdev, VAR_1));
}
