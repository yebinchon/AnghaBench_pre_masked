
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_bfreg_info {int num_static_sys_pages; int num_sys_pages; int * sys_pages; } ;
struct mlx5_ib_ucontext {struct mlx5_bfreg_info bfregi; } ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int ) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_dev *VAR_1, struct mlx5_ib_ucontext *VAR_2)
{
 struct mlx5_bfreg_info *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = &VAR_2->bfregi;
 for (VAR_5 = 0; VAR_5 < VAR_3->num_static_sys_pages; VAR_5++) {
  VAR_4 = FUNC_0(VAR_1->mdev, &VAR_3->sys_pages[VAR_5]);
  if (VAR_4)
   goto error;

  FUNC_2(VAR_1, "allocated uar %d\n", VAR_3->sys_pages[VAR_5]);
 }

 for (VAR_5 = VAR_3->num_static_sys_pages; VAR_5 < VAR_3->num_sys_pages; VAR_5++)
  VAR_3->sys_pages[VAR_5] = VAR_0;

 return 0;

error:
 for (--VAR_5; VAR_5 >= 0; VAR_5--)
  if (FUNC_1(VAR_1->mdev, VAR_3->sys_pages[VAR_5]))
   FUNC_3(VAR_1, "failed to free uar %d\n", VAR_5);

 return VAR_4;
}
