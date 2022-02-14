
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct mlx5_ib_dev *VAR_2, bool VAR_3)
{
 return VAR_3 && FUNC_0(VAR_2->mdev, VAR_1) ?
    VAR_0 : 1;
}
