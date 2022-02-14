
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct mlx5_bfreg_info {int * count; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_bfreg_info*) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_bfreg_info*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_1,
      struct mlx5_bfreg_info *VAR_2)
{
 int VAR_3;

 for (VAR_3 = FUNC_0(VAR_1, VAR_2); VAR_3 < FUNC_1(VAR_1, VAR_2); VAR_3++) {
  if (!VAR_2->count[VAR_3]) {
   VAR_2->count[VAR_3]++;
   return VAR_3;
  }
 }

 return -VAR_0;
}
