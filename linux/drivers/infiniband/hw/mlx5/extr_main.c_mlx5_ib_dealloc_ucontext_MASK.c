
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_bfreg_info {int count; int sys_pages; } ;
struct mlx5_ib_ucontext {scalar_t__ devx_uid; int tdn; struct mlx5_bfreg_info bfregi; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_ucontext {int device; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_ucontext*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,int ,scalar_t__) ;
 int FUNC_3 (struct mlx5_ib_dev*,scalar_t__) ;
 struct mlx5_ib_dev* FUNC_4 (int ) ;
 struct mlx5_ib_ucontext* FUNC_5 (struct ib_ucontext*) ;

__attribute__((used)) static void FUNC_6(struct ib_ucontext *VAR_0)
{
 struct mlx5_ib_ucontext *VAR_1 = FUNC_5(VAR_0);
 struct mlx5_ib_dev *VAR_2 = FUNC_4(VAR_0->device);
 struct mlx5_bfreg_info *VAR_3;

 VAR_3 = &VAR_1->bfregi;
 FUNC_2(VAR_2, VAR_1->tdn, VAR_1->devx_uid);

 if (VAR_1->devx_uid)
  FUNC_3(VAR_2, VAR_1->devx_uid);

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_3->sys_pages);
 FUNC_1(VAR_3->count);
}
