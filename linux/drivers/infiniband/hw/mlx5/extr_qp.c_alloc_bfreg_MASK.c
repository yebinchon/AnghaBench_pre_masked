
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct mlx5_bfreg_info {int ver; int lock; int * count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_bfreg_info*) ;
 int FUNC_2 (struct mlx5_ib_dev*,struct mlx5_bfreg_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mlx5_ib_dev *VAR_2,
         struct mlx5_bfreg_info *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_3(&VAR_3->lock);
 if (VAR_3->ver >= 2) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4 < 0)
   VAR_4 = FUNC_2(VAR_2, VAR_3);
 }

 if (VAR_4 < 0) {
  FUNC_0(VAR_1 != 1);
  VAR_4 = 0;
  VAR_3->count[VAR_4]++;
 }
 FUNC_4(&VAR_3->lock);

 return VAR_4;
}
