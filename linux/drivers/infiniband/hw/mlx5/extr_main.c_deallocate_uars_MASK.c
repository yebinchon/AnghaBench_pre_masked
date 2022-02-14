
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_bfreg_info {int num_sys_pages; int num_static_sys_pages; scalar_t__* sys_pages; } ;
struct mlx5_ib_ucontext {struct mlx5_bfreg_info bfregi; } ;
struct mlx5_ib_dev {int mdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_1,
       struct mlx5_ib_ucontext *VAR_2)
{
 struct mlx5_bfreg_info *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->bfregi;
 for (VAR_4 = 0; VAR_4 < VAR_3->num_sys_pages; VAR_4++)
  if (VAR_4 < VAR_3->num_static_sys_pages ||
      VAR_3->sys_pages[VAR_4] != VAR_0)
   FUNC_0(VAR_1->mdev, VAR_3->sys_pages[VAR_4]);
}
