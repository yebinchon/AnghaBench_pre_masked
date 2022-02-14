
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct mlx5_bfreg_info {int num_static_sys_pages; int lib_uar_4k; } ;


 int FUNC_0 (struct mlx5_ib_dev*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct mlx5_ib_dev *VAR_0,
          struct mlx5_bfreg_info *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->lib_uar_4k) * VAR_1->num_static_sys_pages;
}
